
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

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


#include "tlUnitTest.h"
#include "tlStream.h"
#include "dbLayoutToNetlist.h"
#include "dbTestSupport.h"
#include "dbReader.h"
#include "dbWriter.h"
#include "dbCommonReader.h"
#include "dbHierProcessor.h"

// @@@
#include "dbLocalOperationUtils.h"

static unsigned int define_layer (db::Layout &ly, db::LayerMap &lmap, int gds_layer, int gds_datatype = 0)
{
  unsigned int lid = ly.insert_layer (db::LayerProperties (gds_layer, gds_datatype));
  lmap.map (ly.get_properties (lid), lid);
  return lid;
}

TEST(0_Develop)
{
  db::Layout ly;
  db::DeepShapeStore dss;
  // @@@ dss.set_subcircuit_hierarchy_for_nets (true);
  db::LayerMap lmap;

  unsigned int poly       = define_layer (ly, lmap, 7);
  unsigned int cont       = define_layer (ly, lmap, 14);
  unsigned int metal1     = define_layer (ly, lmap, 15);
  unsigned int via1       = define_layer (ly, lmap, 16);
  unsigned int metal2     = define_layer (ly, lmap, 17);
  unsigned int via2       = define_layer (ly, lmap, 18);
  unsigned int metal3     = define_layer (ly, lmap, 19);
  unsigned int via3       = define_layer (ly, lmap, 20);
  unsigned int metal4     = define_layer (ly, lmap, 21);

  {
    db::LoadLayoutOptions options;
    options.get_options<db::CommonReaderOptions> ().layer_map = lmap;
    options.get_options<db::CommonReaderOptions> ().create_other_layers = false;

    // @@@ std::string fn (tl::testdata ());
    // @@@ fn = tl::combine_path (fn, "algo");
    // @@@ fn = tl::combine_path (fn, "device_extract_l1.gds");

    std::string fn ("/home/matthias/klayout/testdata/laurent_ANA_DRIVE7/ANA_DRIVE7.gds"); // @@@

    tl::InputStream stream (fn);
    db::Reader reader (stream);
    reader.read (ly, options);
  }

  db::Cell &tc = ly.cell (*ly.begin_top_down ());

  db::Region rpoly (db::RecursiveShapeIterator (ly, tc, poly), dss);
  db::Region rcont (db::RecursiveShapeIterator (ly, tc, cont), dss);
  db::Region rmetal1 (db::RecursiveShapeIterator (ly, tc, metal1), dss);
  db::Region rvia1 (db::RecursiveShapeIterator (ly, tc, via1), dss);
  db::Region rmetal2 (db::RecursiveShapeIterator (ly, tc, metal2), dss);
  db::Region rvia2 (db::RecursiveShapeIterator (ly, tc, via2), dss);
  db::Region rmetal3 (db::RecursiveShapeIterator (ly, tc, metal3), dss);
  db::Region rvia3 (db::RecursiveShapeIterator (ly, tc, via3), dss);
  db::Region rmetal4 (db::RecursiveShapeIterator (ly, tc, metal4), dss);

  std::unique_ptr<db::LayoutToNetlist> l2n (new db::LayoutToNetlist (&dss));
  EXPECT_EQ (dss.has_net_builder_for (0, l2n.get ()), false);

  //  net extraction

  //  Intra-layer
  l2n->connect (rpoly);
  l2n->connect (rcont);
  l2n->connect (rmetal1);
  l2n->connect (rvia1);
  l2n->connect (rmetal2);
  l2n->connect (rvia2);
  l2n->connect (rmetal3);
  l2n->connect (rvia3);
  l2n->connect (rmetal4);
  //  Inter-layer
  l2n->connect (rpoly,      rcont);
  l2n->connect (rcont,      rmetal1);
  l2n->connect (rmetal1,    rvia1);
  l2n->connect (rvia1,      rmetal2);
  l2n->connect (rmetal2,    rvia2);
  l2n->connect (rvia2,      rmetal3);
  l2n->connect (rmetal3,    rvia3);
  l2n->connect (rvia3,      rmetal4);

printf("@@@ extraction\n"); fflush(stdout);
  l2n->extract_netlist ();

printf("@@@ cells1=%d\n", int(dss.layout ().cells())); fflush(stdout);
  db::Region rmetal1_nets = rmetal1.nets (*l2n, db::NPM_NetNameAndIDOnly, tl::Variant (1));
  EXPECT_EQ (dss.has_net_builder_for (0, l2n.get ()), true);
printf("@@@ cells2=%d\n", int(dss.layout ().cells())); fflush(stdout);
  db::Region rmetal2_nets = rmetal2.nets (*l2n, db::NPM_NetNameAndIDOnly, tl::Variant (1));
printf("@@@ cells3=%d\n", int(dss.layout ().cells())); fflush(stdout);
  db::Region rmetal1_nets_more = rmetal1.nets (*l2n, db::NPM_NetNameAndIDOnly, tl::Variant (1));
printf("@@@ cells4=%d\n", int(dss.layout ().cells())); fflush(stdout);

// @@@
dss.layout().set_properties(rpoly.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(7, 0));
dss.layout().set_properties(rcont.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(14, 0));
dss.layout().set_properties(rmetal1.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(15, 0));
dss.layout().set_properties(rvia1.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(16, 0));
dss.layout().set_properties(rmetal2.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(17, 0));
dss.layout().set_properties(rmetal1_nets.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(115, 0));
dss.layout().set_properties(rmetal2_nets.delegate ()->deep ()->deep_layer ().layer (), db::LayerProperties(117, 0));
{
  db::SaveLayoutOptions options;
  std::string fn ("net_outx.gds"); // @@@
  tl::OutputStream stream (fn);
  db::Writer writer (options);
  writer.write (dss.layout(), stream);
}
// @@@

  db::Region res1 = rmetal1_nets.bool_and (rmetal2_nets, db::SamePropertiesConstraint);
printf("@@@2\n"); fflush(stdout);
  db::Region res2 = rmetal1_nets.bool_and (rmetal2_nets, db::DifferentPropertiesConstraint);
printf("@@@3\n"); fflush(stdout);
  db::Region res3 = rmetal1_nets.bool_and (rmetal2_nets, db::NoPropertyConstraint);
printf("@@@4\n"); fflush(stdout);

  rmetal1_nets.insert_into (&ly, tc.cell_index (), ly.insert_layer (db::LayerProperties (100, 0)));
  rmetal2_nets.insert_into (&ly, tc.cell_index (), ly.insert_layer (db::LayerProperties (101, 0)));

  res1.insert_into (&ly, tc.cell_index (), ly.insert_layer (db::LayerProperties (1000, 0)));
  res2.insert_into (&ly, tc.cell_index (), ly.insert_layer (db::LayerProperties (1001, 0)));
  res3.insert_into (&ly, tc.cell_index (), ly.insert_layer (db::LayerProperties (1002, 0)));
printf("@@@5\n"); fflush(stdout);

  //  Test auto-unregistration
  l2n.reset (0);
  EXPECT_EQ (dss.has_net_builder_for (0, l2n.get ()), false);

  {
    db::SaveLayoutOptions options;

    std::string fn (dss.subcircuit_hierarchy_for_nets () ? "net_outh.gds" : "net_out.gds"); // @@@

    tl::OutputStream stream (fn);
    db::Writer writer (options);
    writer.write (ly, stream);
  }
}
