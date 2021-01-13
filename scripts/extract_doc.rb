#!/usr/bin/ruby

$script_call = $0 + " " + ARGV.join(" ")

$indirs = [ "src/drc/drc/built-in-macros", "src/lvs/lvs/built-in-macros" ]

$loc = "about"
$outfiles = "src/lay/lay/doc"

def create_ref(mod, s)
  if s =~ /(.*)::(.*)#(.*)/
    "<a href=\"/" + $loc + "/" + $1.downcase + "_ref_" + $2.downcase + ".xml#" + $3 + "\">#{s}</a>"
  elsif s =~ /(.*)::(.*)/
    "<a href=\"/" + $loc + "/" + $1.downcase + "_ref_" + $2.downcase + ".xml\">#{s}</a>"
  elsif s =~ /(.*)#(.*)/
    if $2 != ""
      "<a href=\"/" + $loc + "/" + mod.downcase + "_ref_" + $1.downcase + ".xml#" + $2 + "\">" + ($1 == "global" ? $2 : s) + "</a>"
    else
      "<a href=\"/" + $loc + "/" + mod.downcase + "_ref_" + $1.downcase + ".xml\">#{$1}</a>"
    end
  else
    "<a href=\"#" + s + "\">#{s}</a>"
  end
end

def create_link(mod, s)
  if s =~ /(.*)::(.*)#(.*)/
    "<link href=\"/" + $loc + "/" + $1.downcase + "_ref_" + $2.downcase + ".xml#" + $3 + "\"/>"
  elsif s =~ /(.*)::(.*)/
    "<link href=\"/" + $loc + "/" + $1.downcase + "_ref_" + $2.downcase + ".xml\"/>"
  elsif s =~ /(.*)#(.*)/
    if $2 != ""
      "<link href=\"/" + $loc + "/" + mod.downcase + "_ref_" + $1.downcase + ".xml#" + $2 + "\"/>"
    else
      "<link href=\"/" + $loc + "/" + mod.downcase + "_ref_" + $1.downcase + ".xml\"/>"
    end
  else
    "<link href=\"#" + s + "\"/>"
  end
end

def create_class_doc_ref(s)
  "<class_doc href=\"" + s + "\">#{s}</class_doc>"
end

def escape(mod, s)
  s.gsub("&", "&amp;").
    gsub("<", "&lt;").
    gsub(">", "&gt;").
    gsub(/\\([\w:#]+)/) { create_ref(mod, $1) }.
    gsub(/\\\\([\w:#]+)/) { create_link(mod, $1) }.
    gsub(/RBA::([\w#]+)/) { create_class_doc_ref($1) }
end

def unescape(s)
  s.gsub("&amp;", "&").gsub("&lt;", "<").gsub("&gt;", ">")
end

class DocItem

  attr_accessor :brief
  attr_accessor :synopsis
  attr_accessor :name
  attr_accessor :doc
  attr_accessor :mod

  def initialize(mod, block)

    @paragraphs = []
    para = nil
    self.synopsis = []
    self.mod = mod
    in_code = false

    block.each do |b|
      if in_code
        if b =~ /@\/code/
          in_code = false
        end
        para.push(b)
      elsif b =~ /^@brief\s+(.*?)\s*$/
        self.brief = $1
      elsif b =~ /^@name\s+(.*?)\s*$/
        self.name = $1
      elsif b =~ /^@synopsis\s+(.*?)\s*$/
        self.synopsis.push($1)
      elsif b =~ /^@scope/
        # ignore scope commands
      elsif b =~ /^\s*$/
        para && @paragraphs.push(para)
        para = nil
      else
        para ||= []
        para.push(b)
        if b =~ /@code/ 
          in_code = true
        end
      end
    end

    self.name || raise("Doc block without name")

    para && @paragraphs.push(para)

  end

  def produce_doc

    if @paragraphs.empty?
      return ""
    end

    doc = "<p>\n"

    @paragraphs.each_with_index do |p, i|
      
      i > 0 && doc += "</p><p>\n"

      p.each do |pp|
        doc += escape(self.mod, pp).
              gsub(/\\@/, "&at;").
              gsub(/\s*@code\s*/, "<pre>").
              gsub(/\s*@\/code\s*/, "</pre>").
              gsub(/@img\((.*)\)\s*/) { "<img src=\"" + $1 + "\"/>" }.
              gsub(/@\/img\s*/, "</img>").
              gsub(/@(\w+)\s*/) { "<" + $1 + ">" }.
              gsub(/@\/(\w+)\s*/) { "</" + $1 + ">" }.
              gsub(/&at;/, "@")
        doc += "\n"
      end

    end

    doc += "</p>\n"

  end

end

class Scope < DocItem

  def initialize(mod, block)
    super(mod, block)
    @items = {}
  end

  def merge(other)
    if !self.brief
      self.brief = other.brief
      self.doc = other.doc
      self.synopsis = other.synopsis
    end
  end

  def add_doc_item(mod, block)
    item = DocItem::new(mod, block)
    @items[item.name] = item
  end

  alias :super_produce_doc :produce_doc

  def produce_doc

    doc = <<HEAD
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE language SYSTEM "klayout_doc.dtd">

<!-- generated by #{$script_call} -->
<!-- DO NOT EDIT! -->

HEAD

    doc += "<doc>\n"
    doc += "<title>" + escape(self.mod, self.brief) + "</title>\n"
    doc += "<keyword name=\"" + escape(self.mod, self.name) + "\"/>\n"

    doc += super_produce_doc

    doc += "<h2-index/>\n"

    @items.keys.sort.each do |item_key|

      item = @items[item_key]

      item.name || raise("Missing @name for item #{item_key}")
      item.brief || raise("Missing @brief for item #{item_key}")

      doc += "<a name=\"" + escape(self.mod, item.name) + "\"/>"
      doc += "<h2>\"" + escape(self.mod, item.name) + "\" - " + escape(self.mod, item.brief) + "</h2>\n"
      doc += "<keyword name=\"" + escape(self.mod, item.name) + "\"/>\n"
      if ! item.synopsis.empty?
        doc += "<p>Usage:</p>\n"
        doc += "<ul>\n"
        item.synopsis.each do |s|
          doc += "<li><tt>" + escape(self.mod, s) + "</tt></li>\n"
        end
        doc += "</ul>\n"
      end

      doc += item.produce_doc

    end

    doc += "</doc>\n"

    doc

  end

end

class Collector

  def initialize(mod, title)
    @mod = mod
    @title = title
  end

  def add_block(block)

    if block.find { |l| l =~ /^@scope/ }

      # is a scope block
      @scopes ||= {}
      scope = Scope::new(@mod, block)
      if ! @scopes[scope.name]
        @current_scope = scope
        @scopes[scope.name] = scope
      else
        @current_scope = @scopes[scope.name]
        @current_scope.merge(scope)
      end

    else
      @current_scope && @current_scope.add_doc_item(@mod, block)
    end

  end

  def produce_doc

    @scopes.keys.sort.each do |k|
      suffix = k.downcase
      outfile = $outfiles + "/" + $loc + "/" + @mod + "_ref_" + suffix + ".xml"
      File.open(outfile, "w") do |file|
        file.write(@scopes[k].produce_doc)
        puts "---> #{outfile} written."
      end
    end

  end

  def produce_index

    outfile = $outfiles + "/" + $loc + "/" + @mod + "_ref.xml"
    File.open(outfile, "w") do |file|

      doc = <<HEAD
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE language SYSTEM "klayout_doc.dtd">

<!-- generated by #{$script_call} -->
<!-- DO NOT EDIT! -->

HEAD

      doc += "<doc>\n"

      doc += "<title>#{escape(@mod, @title)}</title>\n"
      doc += "<keyword name=\"#{escape(@mod, @title)}\"/>\n"

      doc += "<topics>\n"

      @scopes.keys.sort.each do |k|
        suffix = k.downcase
        doc += "<topic href=\"/#{$loc}/#{@mod}_ref_#{suffix}.xml\"/>\n"
      end

      doc += "</topics>\n"
      doc += "</doc>\n"

      file.write(doc)

    end

    puts "---> Index file #{outfile} written."

  end

end

collectors = {
  "DRC" => Collector::new("drc", "DRC Reference"),
  "LVS" => Collector::new("lvs", "LVS Reference")
}

$indirs.each do |indir|

  Dir.entries(indir).each do |p|

    if p !~ /\.rb$/
      next
    end

    infile = File.join(indir, p)
    puts "Extracting doc from #{infile} .."

    File.open(infile, "r") do |file|

      block = []
      collector = nil
      line = 0

      file.each_line do |l|

        line += 1

        begin

          l = unescape(l)

          if ! collector
            collectors.each do |k,c|
              if l =~ /^\s*#\s*%#{k}%/
                collector = c
                l = nil
                block = []
                break
              end
            end
          end

          if l
            if l =~ /^\s*#\s*(.*)\s*$/
              collector && block.push($1)
            elsif l =~ /^\s*$/
              collector && collector.add_block(block)
              collector = nil
            end
          end

        rescue => ex
          puts "ERROR in line #{line}:\n" + ex.to_s
          puts ex.backtrace # @@@
          exit 1
        end

      end

    end

  end

end

collectors.each do |k,collector|
  collector.produce_doc
  collector.produce_index
end

