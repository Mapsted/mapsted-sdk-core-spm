//
//  MNMapPolyline.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMapPolyline_h
#define MNMapPolyline_h

typedef NS_ENUM(NSInteger, MNDataType);
@class MNMercator;
@class MNLineStyle;

/// Represents a linear set of connected line segments on a map
/**
 Discussion: Lines are drawn on the map as a polyline. A polyline defines a linear overlay of connected line segments on the map. A Polyline object consists of an array of Latitude and Longitude locations, and creates a series of line segments that connect those locations in an ordered sequence.
*/
@interface MNMapPolyline : NSObject

/// Represents the type of data (Building, Property, etc)
@property (readonly) MNDataType dataType;

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'polylineId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter polylineId:  A number identifying the polyline
/// - Returns: The new `MNMapPolyline` instance.

- (id)initWithPropertyId:(NSInteger)propertyId polylineId:(NSInteger)polylineId;


/***************************************************************************/

/// Creates an instance with the specified 'buildingId', 'floorId' and 'polylineId' values.
///
/// - Parameter buildingId:  A nnumber identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter polylineId: A number identifying the polyline
/// - Returns: The new `MNMapPolyline` instance.

- (id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId polylineId:(NSInteger)polylineId;


/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the floor
- (NSInteger)floorId;

/// A Number identifying the polyline
- (NSInteger)polylineId;

/// A number identifying the entity
- (NSInteger)entityId;

/// A collection of mercator points
- (NSArray<MNMercator *> *)points;

/// The style used in drawing lines. Specifies, line width, color, etc.
- (MNLineStyle *)lineStyle;

@end


#endif /* MNMapPolyline_h */
