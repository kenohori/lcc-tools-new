//
//  Embedded_generalized_map_with_ids.hpp
//  lcc-tools-new
//
//  Created by Ken Arroyo Ohori on 04/05/16.
//  Copyright © 2016 Ken Arroyo Ohori. All rights reserved.
//

#ifndef Embedded_generalized_map_with_ids_hpp
#define Embedded_generalized_map_with_ids_hpp

#include <CGAL/GMap_dart.h>
#include <CGAL/Generalized_map.h>
#include <CGAL/Cell_attribute.h>
#include <CGAL/Cell_attribute_with_point.h>

//template <unsigned int d>
//struct Embedded_generalized_map_items_with_id {
//  template <class Map>
//  struct Dart_wrapper {
//    typedef CGAL::Cell_attribute_with_point<Map, int> Point_attribute_with_id;
//    typedef CGAL::Cell_attribute<Map, int> Attribute_with_id;
//    
//    template <unsigned int attributes_to_add, class Result = std::tuple<> >
//    struct Embedded_generalized_map_items_with_id_attributes;
//    
//    template <class ... Result>
//    struct Embedded_generalized_map_items_with_id_attributes<0, std::tuple<Result ...> > {
//      typedef std::tuple<Point_attribute_with_id, Result ...> tuple;
//    };
//
//    template <unsigned int attributes_to_add, class ... Result>
//    struct Embedded_generalized_map_items_with_id_attributes<attributes_to_add, std::tuple<Result ...> > {
//      typedef typename Embedded_generalized_map_items_with_id_attributes<attributes_to_add-1, std::tuple<Attribute_with_id, Result ...> >::tuple tuple;
//    };
//    
//    typedef CGAL::GMap_dart<d, Map> Dart;
//    typedef typename Embedded_generalized_map_items_with_id_attributes<d>::tuple Attributes;
//  };
//};
//
//
//
//template <unsigned int d>
//class Embedded_generalized_map_with_ids : public CGAL::Generalized_map<d, Embedded_generalized_map_items_with_id<d>> {
//  
//};

#endif /* Embedded_generalized_map_with_ids_hpp */
