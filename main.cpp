//
//  main.cpp
//  lcc-tools-new
//
//  Created by Ken Arroyo Ohori on 22/04/16.
//  Copyright © 2016 Ken Arroyo Ohori. All rights reserved.
//

//#include "Embedded_generalized_map_with_ids.hpp"

#include <CGAL/Cartesian_d.h>
#include <CGAL/Generalized_map.h>
#include <CGAL/Cell_attribute.h>

struct GMap_items {
  template <class Map>
  struct Dart_wrapper {
    
    struct Attribute_with_id {
      int id;
    };
    
    struct Embedded_attribute_with_id : Attribute_with_id {
      CGAL::Cartesian_d<double> point;
    };
    
    typedef CGAL::GMap_dart<3, Map> Dart;
    typedef CGAL::Cell_attribute<Map, Embedded_attribute_with_id> Attribute_with_point;
    typedef CGAL::Cell_attribute<Map, Attribute_with_id> Attribute;
    typedef CGAL::cpp0x::tuple<Attribute_with_point,Attribute,Attribute> Attributes;
  };
};

typedef CGAL::Generalized_map<3, GMap_items> GMap_3;

int main(int argc, const char * argv[]) {
  
  GMap_3 gmap;
  
//  Embedded_generalized_map_with_ids<3> gmap_3;
  
  return 0;
}
