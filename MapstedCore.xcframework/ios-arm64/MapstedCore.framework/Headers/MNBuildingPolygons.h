//
//  MNBuildingPolygons.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingPolygons_h
#define MNBuildingPolygons_h

@class MNMapPolygon;
@class MNMercator;

/// Represents building polygons
@interface MNBuildingPolygons : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Returns: The new `MNMapPolygon` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// Returns a number identifying the property
- (NSInteger)propertyId;

/// Returns a number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Creates an instance with the specified 'floorId' and 'polygonId' values.
///
/// - Parameter floorId:  A number identifying the floor
/// - Parameter polygonId:  A number identifying the polygon

/// - Returns: The new `MNMapPolygon` instance.

- (nullable MNMapPolygon *)polygonWithFloorId:(NSInteger)floorId polygonId:(NSInteger)polygonId;

/***************************************************************************/

/// Returns map floor polygons matching the floor specified by 'floorId'
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns an array collection of 'MNMapPolygon' map polygons

- (nullable NSArray<MNMapPolygon *> *)floorPolygonsWithFloorId:(NSInteger)floorId;

/***************************************************************************/
- (bool)isPointInBuildingBoundary: (nonnull MNMercator *)mercator;

/***************************************************************************/

/// Returns the polygon that forms the building boundary

- (nullable MNMapPolygon *)boundingPolygon;

/// Returns building boundary polygon
///
/// - Returns: A new instance of `MNMapPolygon`
- (nullable MNMapPolygon *)buildingBoundary;

/***************************************************************************/
/// Returns floor boundary polygon
///
/// - Returns: An array instance of `MNMapPolygon`
- (nullable NSArray<MNMapPolygon *> *)floorBoundary:(NSInteger)floorId;

/***************************************************************************/

/// Check the given point is inside building boundary or not.
///
/// - Parameter pt:  An object of `MNMercator`
/// - Returns: true, the point is inside building; false - the point is not inside buidling.
- (BOOL)isPointInsideBuilding:(nullable MNMercator *)pt;

/***************************************************************************/

/// Check the given point is inside floor boundary or not.
///
/// - Parameter pt:  An object of `MNMercator`
/// - Parameter fllorId: A number to identify floor
/// - Returns: true, the point is inside building; false - the point is not inside buidling.

- (BOOL)isPoint:(nullable MNMercator *)pt insideFloor:(NSInteger)floorId;

/***************************************************************************/

@end

#endif /* MNBuildingPolygons_h */
