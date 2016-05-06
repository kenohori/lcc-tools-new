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

struct GMap_items_3 {
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
    typedef CGAL::cpp11::tuple<Attribute_with_point, Attribute, Attribute, Attribute> Attributes;
  };
};

template <unsigned int d>
struct GMap_items_d {
  template <class Map>
  struct Dart_wrapper {
    
    struct Attribute_with_id {
      int id;
    };
    
    struct Embedded_attribute_with_id : Attribute_with_id {
      CGAL::Cartesian_d<double> point;
    };
    
    typedef CGAL::GMap_dart<d, Map> Dart;
    typedef CGAL::Cell_attribute<Map, Embedded_attribute_with_id> Attribute_with_point;
    typedef CGAL::Cell_attribute<Map, Attribute_with_id> Attribute;
    
    template <unsigned int attributes_to_add, class Result = CGAL::cpp11::tuple<>>
    struct Attributes_so_far;
    
    template <unsigned int attributes_to_add, class ... Result>
    struct Attributes_so_far<attributes_to_add, CGAL::cpp11::tuple<Result ...> > {
      typedef typename Attributes_so_far<attributes_to_add-1, CGAL::cpp11::tuple<Attribute, Result ...> >::tuple tuple;
    };
    
    typedef typename Attributes_so_far<d>::tuple Attributes;
  };
};

typedef CGAL::Generalized_map<3, GMap_items_3> GMap_3;
//typedef CGAL::Generalized_map<3, GMap_items_d<3>> GMap_3;

int main(int argc, const char * argv[]) {
  
  GMap_3 gmap;
  
//  Embedded_generalized_map_with_ids<3> gmap_3;
  
  return 0;
}
