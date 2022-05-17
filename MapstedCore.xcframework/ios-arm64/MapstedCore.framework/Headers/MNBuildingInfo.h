//
//  MNBuildingInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingInfo_h
#define MNBuildingInfo_h


/// Represents an enumeration of routing instruction types
typedef NS_ENUM(int, MapstedBuildingCurrentStatus) {
    eStatusUnknown = -1,
    eStatusInactive = 0,
    eStatusActive = 1,
    eStatusCalibration = 2,
    eStatusTesting = 3
};


@class MNFloorInfo;
/***************************************************************************/

/// Represents information about a building

@interface MNBuildingInfo: NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
// - Returns: The new `MNBuildingInfo` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/
- (nonnull NSString*) defaultName;

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building
- (NSInteger)buildingId;

/// Represents the center mercator point for the building
- (nonnull MNMercator *)centroid;

/// Represents a number identifying the default floor in a building
- (NSInteger)defaultFloorId;

/// Represents the current status of the building.
//- (CurrentStatus) currentStatus;

/***************************************************************************/

/// Creates a floor information object instance with the specified 'floorId'.
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns: The new `MNFloorInfo` instance.

- (nullable MNFloorInfo *)floorInfoWithFloorId: (NSInteger)floorId;

/***************************************************************************/

/// Returns a list of all floors associated with the building
- (nonnull NSArray<MNFloorInfo *> *)floorInfos;

/// Returns a list of all floors ids associated with the building
- (nonnull NSArray<NSNumber *> *)floorIds;

/***************************************************************************/

- (int) getBuildingDataMaxVersion;

- (int) getValidationType;

@end


#endif /* MNBuildingInfo_h */
