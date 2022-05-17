//
//  MNBuildingPoints.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingPoints_h
#define MNBuildingPoints_h

@class MNMapPoint;

/// Represents the points associated with the map of a building
@interface MNBuildingPoints : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Returns: The new `MNBuildingPoints` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Creates an instance with the specified 'floorId' and 'pointId' values.
///
/// - Parameter floorId:  A number identifying the floor
/// - Parameter pointId:  A number identifying the point
/// - Returns: The new `MNMapPoint` instance.

- (nullable MNMapPoint *)pointWithFloorId:(NSInteger)floorId pointId:(NSInteger)pointId;

/***************************************************************************/

/// Returns a collection of Map Points associated with a floor id
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns: An array collection of 'MNMapPoint' map point objects for the given floor

- (nullable NSArray<MNMapPoint *> *)pointsWithFloorId:(NSInteger)floorId;

/***************************************************************************/

@end


#endif /* MNBuildingPoints_h */
