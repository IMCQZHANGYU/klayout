
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbFlatTexts.h"
#include "dbEmptyTexts.h"
#include "dbTexts.h"

namespace db
{

// -------------------------------------------------------------------------------------------------------------
//  FlatTexts implementation

FlatTexts::FlatTexts ()
  : AsIfFlatTexts (), mp_texts (new db::Shapes (false))
{
  //  .. nothing yet ..
}

FlatTexts::~FlatTexts ()
{
  //  .. nothing yet ..
}

FlatTexts::FlatTexts (const FlatTexts &other)
  : AsIfFlatTexts (other), mp_texts (other.mp_texts)
{
  //  .. nothing yet ..
}

FlatTexts::FlatTexts (const db::Shapes &texts)
  : AsIfFlatTexts (), mp_texts (new db::Shapes (texts))
{
  //  .. nothing yet ..
}

void FlatTexts::invalidate_cache ()
{
  invalidate_bbox ();
}

void FlatTexts::reserve (size_t n)
{
  mp_texts->reserve (db::Text::tag (), n);
}

TextsIteratorDelegate *FlatTexts::begin () const
{
  return new FlatTextsIterator (mp_texts.get_non_const ());
}

std::pair<db::RecursiveShapeIterator, db::ICplxTrans> FlatTexts::begin_iter () const
{
  return std::make_pair (db::RecursiveShapeIterator (*mp_texts), db::ICplxTrans ());
}

bool FlatTexts::empty () const
{
  return mp_texts->empty ();
}

size_t FlatTexts::count () const
{
  return mp_texts->size ();
}

size_t FlatTexts::hier_count () const
{
  return mp_texts->size ();
}

Box FlatTexts::compute_bbox () const
{
  mp_texts->update_bbox ();
  return mp_texts->bbox ();
}

TextsDelegate *
FlatTexts::filter_in_place (const TextFilterBase &filter)
{
  db::Shapes &texts = *mp_texts;

  text_iterator_type pw = texts.get_layer<db::Text, db::unstable_layer_tag> ().begin ();
  for (TextsIterator p (begin ()); ! p.at_end (); ++p) {
    if (filter.selected (*p)) {
      if (pw == texts.get_layer<db::Text, db::unstable_layer_tag> ().end ()) {
        texts.get_layer<db::Text, db::unstable_layer_tag> ().insert (*p);
        pw = texts.get_layer<db::Text, db::unstable_layer_tag> ().end ();
      } else {
        texts.get_layer<db::Text, db::unstable_layer_tag> ().replace (pw++, *p);
      }
    }
  }

  texts.get_layer<db::Text, db::unstable_layer_tag> ().erase (pw, texts.get_layer<db::Text, db::unstable_layer_tag> ().end ());

  return this;
}

TextsDelegate *FlatTexts::add (const Texts &other) const
{
  std::auto_ptr<FlatTexts> new_texts (new FlatTexts (*this));
  new_texts->invalidate_cache ();

  FlatTexts *other_flat = dynamic_cast<FlatTexts *> (other.delegate ());
  if (other_flat) {

    new_texts->raw_texts ().insert (other_flat->raw_texts ().get_layer<db::Text, db::unstable_layer_tag> ().begin (), other_flat->raw_texts ().get_layer<db::Text, db::unstable_layer_tag> ().end ());

  } else {

    size_t n = new_texts->raw_texts ().size ();
    for (TextsIterator p (other.begin ()); ! p.at_end (); ++p) {
      ++n;
    }

    new_texts->raw_texts ().reserve (db::Text::tag (), n);

    for (TextsIterator p (other.begin ()); ! p.at_end (); ++p) {
      new_texts->raw_texts ().insert (*p);
    }

  }

  return new_texts.release ();
}

TextsDelegate *FlatTexts::add_in_place (const Texts &other)
{
  invalidate_cache ();

  db::Shapes &texts = *mp_texts;

  FlatTexts *other_flat = dynamic_cast<FlatTexts *> (other.delegate ());
  if (other_flat) {

    texts.insert (other_flat->raw_texts ().get_layer<db::Text, db::unstable_layer_tag> ().begin (), other_flat->raw_texts ().get_layer<db::Text, db::unstable_layer_tag> ().end ());

  } else {

    size_t n = texts.size ();
    for (TextsIterator p (other.begin ()); ! p.at_end (); ++p) {
      ++n;
    }

    texts.reserve (db::Text::tag (), n);

    for (TextsIterator p (other.begin ()); ! p.at_end (); ++p) {
      texts.insert (*p);
    }

  }

  return this;
}

const db::Text *FlatTexts::nth (size_t n) const
{
  return n < mp_texts->size () ? &mp_texts->get_layer<db::Text, db::unstable_layer_tag> ().begin () [n] : 0;
}

bool FlatTexts::has_valid_texts () const
{
  return true;
}

const db::RecursiveShapeIterator *FlatTexts::iter () const
{
  return 0;
}

void
FlatTexts::insert_into_as_polygons (Layout *layout, db::cell_index_type into_cell, unsigned int into_layer, db::Coord enl) const
{
  db::Shapes &out = layout->cell (into_cell).shapes (into_layer);
  for (TextsIterator p (begin ()); ! p.at_end (); ++p) {
    db::Box box = p->box ();
    box.enlarge (db::Vector (enl, enl));
    out.insert (db::SimplePolygon (box));
  }
}

void
FlatTexts::insert_into (Layout *layout, db::cell_index_type into_cell, unsigned int into_layer) const
{
  layout->cell (into_cell).shapes (into_layer).insert (*mp_texts);
}

void
FlatTexts::insert (const db::Text &t)
{
  mp_texts->insert (t);
  invalidate_cache ();
}

void
FlatTexts::insert (const db::Shape &shape)
{
  if (shape.is_text ()) {

    db::Text t;
    shape.text (t);
    insert (t);

  }
}

}

