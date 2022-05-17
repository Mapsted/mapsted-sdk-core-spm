//
//  MNEntityZone.h
//  positioning
//
//  Created by Mapsted on 2019-08-28.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNEntityZone_h
#define MNEntityZone_h

#import "MNDataType.h"
#import "MNZone.h"

@class MNMercator;

/// Represents a label corresponding to a map zone
@interface MNEntityZone : MNZone

/// A number identifing the landmark referred to in the instruction
@property (nonnull) NSArray* landmarkEntityIds;

/// The type of map data : property, building, etc.
@property (nullable) NSString* nearbyLandmarkName;

/// The type of map data : property, building, etc.
@property (readonly) MNDataType mapDataType;

/***************************************************************************/

/// Creates an instance with the specified 'propertyId', 'floorId', 'longLabel' and 'shortLabel' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter longLabel:  The long format name to display for the zone
/// - Parameter shortLabel:  The short format name to display for the zone
/// - Returns: The new `MNEntityZone` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId buildingId:(NSInteger)buildingId floorId:(NSInteger)floorId entityId:(NSInteger)entityId;

- (nonnull id)initWithPropertyId:(NSInteger)propertyId
                      buildingId:(NSInteger)buildingId
                         floorId:(NSInteger)floorId
                        entityId:(NSInteger)entityId
                     mapDataType:(MNDataType) mapDataType;



- (nonnull id)initWithZone:(nonnull MNZone *)zone entityId:(NSInteger)entityId;



/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building

- (NSInteger)buildingId;

/// Represents a number identifying the floor
- (NSInteger)floorId;

- (NSInteger)entityId;

- (MNDataType)mapDataType;

- (void)setNewEntityId: (NSInteger) newEntityId;

- (void)getNearbyLandmarkIds;

- (nullable MNMercator *)getLocation;


@end
#endif /* MNEntityZone_h */
