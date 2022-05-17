//
//  MNFloorInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-27.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNFloorInfo_h
#define MNFloorInfo_h

#import <UIKit/UIKit.h>

/// Represents information about a floor in a building
@interface MNFloorInfo : NSObject

/***************************************************************************/

/// Creates an instance for the specified 'buildingId' with the specified 'floorId'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Returns: The new `MNFloorInfo` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building
- (NSInteger)buildingId;

/// Represents an id for the floor
- (NSInteger)floorId;

/// Represents a floor number to be assigned to a floor layer
- (NSInteger)floorNumber;


/// Represents the string to be used as a short name for the floor
- (nonnull NSString *)floorNameCode;

/// Represents the floor's height off the ground.
- (float) height;

/***************************************************************************/

@end


#endif /* MNFloorInfo_h */
