//
//  MNMapPolygon.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMapPolygon_h
#define MNMapPolygon_h


typedef NS_ENUM(NSInteger, MNDataType);
@class MNPolygonStyle;
@class MNMercator;
@class MNMapEntity;


/// Represents a polygon-shaped path on the map
/// Discussion: A polygon represents an area enclosed by a closed path which is defined by a series of coordinates. Polygons are drawn withh a stroke and a fill. Polygons can describe complex shapes such as multiple non-contiguous areas each defined by a single polygon, areas wit holes in them, and interesection of one or more areas. A complex shape can be defined by a polygon with multiple paths.

@interface MNMapPolygon : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'polygonId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter polygonId:  A number identifying the polygon
/// - Returns: The new `MNMapPolygon` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId polygonId:(NSInteger)polygonId;

/***************************************************************************/

/// Creates an instance with the specified 'buildingId' and 'floorId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter polygonId:  A number identifying the polygon
/// - Returns: The new `MNMapPolygon` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId polygonId:(NSInteger)polygonId;


- (nullable id)initWithBoundingPropertyId:(NSInteger)propertyId;
- (nullable id)initWithBoundingBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the floor
- (NSInteger)floorId;

/// A number identifying the polygon
- (NSInteger)polygonId;

/// A number identifying the entity
- (NSInteger)entityId;

/// A number identifying the type of data (Building, Property, etc)
- (MNDataType)dataType;

/// Specifies the stroke and fill styles with which the polygon will be drawn
- (nullable MNPolygonStyle *)style;

/// Represents an array collection of boundary points that define the map polygon
- (nonnull NSArray<MNMercator *> *)boundries;

/// Represents the holes available in the map polygon
- (nonnull NSArray<NSArray <MNMercator *>*> *)holes;

/// Represents the map entity associated with the Map Polygon
- (nullable MNMapEntity *)entity;

/// Represents the geometric center of the polygon.
- (nonnull MNMercator *)centroid;

/// Represents the height of a Polygon
- (float) height;

/// Returns the area of a Polygon
- (float) area;

/***************************************************************************/


@end

#endif /* MNMapPolygon_h */
