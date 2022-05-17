//
//  MNZone.h
//  positioning
//
//  Created by Tianyun Shan on 2019-01-04.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNZone_h
#define MNZone_h

typedef NS_ENUM(NSInteger, MNZoneType);

/// Represents a positioning zone
@interface MNZone : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId', 'buildingId' and 'floorId' values.
///
/// - Parameter propertyId:  A number identifying a property
/// - Parameter buildingId:  A number identifying a building
/// - Parameter floorId:  A number identifying a floor
/// - Returns: The new `MNZone` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId buildingId:(NSInteger)buildingId floorId:(NSInteger)floorId;


/***************************************************************************/

/// Creates an instance from the specified 'zone'.
///
/// - Parameter zone:  The zone from which a new zone will be created
/// - Returns: The new `MNZone` instance.

- (nonnull id)initWithZone:(nonnull MNZone *)zone;

/***************************************************************************/

/// A number identifying a property
- (NSInteger)propertyId;

/// A number identifying a building
- (NSInteger)buildingId;

/// A number identifying a floor
- (NSInteger)floorId;

/// Represents the type of zone
- (MNZoneType)type;

/***************************************************************************/

/// Checks whether the current zone is equal to another zone
///
/// - Parameter zone:  The zone to compare the current zone with
/// - Returns: True if the current zone is equal to the given zonne
- (BOOL)isEqual:(nullable MNZone *)zone;

/***************************************************************************/

@end


#endif /* MNZone_h */
