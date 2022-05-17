//
//  MNBuildingData.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingData_h
#define MNBuildingData_h

@class MNMapPolygon;
@class MNBuildingEntities;
@class MNBuildingPolygons;
@class MNBuildingPolylines;
@class MNBuildingPoints;
@class MNBuildingSearchFilters;
@class MNBuildingSearchEntities;
@class MNLayerStyle;

/// Represents data for a building
@interface MNBuildingData : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
/// - Parameter buildingId:  A number identifying the building in question
/// - Returns: The new `MNBuildingData` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building
- (NSInteger)buildingId;

/// Represents a number identifying the building
//- (NSInteger)version;

/***************************************************************************/

/// Returns a unique string identifying the category matching the specified entity
///
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The unique category id for the matching entity.
- (nonnull NSString *)entityCategoryUid:(NSInteger)entityId;

/***************************************************************************/

/// Returns a name string representing the category matching the specified entity
///
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The display name of the category for the matching entity.

- (nonnull NSString *)entityCategoryName:(NSInteger)entityId;

/***************************************************************************/

/// Returns the entities contained in the building
- (nullable MNBuildingEntities *)entities;

/// Returns the polygons contained in the building data
- (nullable MNBuildingPolygons *)polygons;

/// Returns the polylines contained in the building data
- (nullable MNBuildingPolylines *)polylines;

/// Returns the points conntained in the building data
- (nullable MNBuildingPoints *)points;

/// Returns the the building boundary as a polygon
- (nullable MNMapPolygon *)boundingPolygon;

/// Returns the building search entites associated with the building data
- (nullable MNBuildingSearchEntities *)searchEntities;

/***************************************************************************/

/// Returns an array collection of layer styles for a given floor specified by 'floorId'
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns: An array of layer styles.
- (nonnull NSArray<MNLayerStyle *> *)layerStyleWithFloorId:(NSInteger)floorId;

/***************************************************************************/

@end


#endif /* MNBuildingData_h */
