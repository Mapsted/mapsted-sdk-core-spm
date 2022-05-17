//
//  MNPbZone.h
//  positioning
//
//  Created by Tianyun Shan on 2019-02-26.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNPbZone_h
#define MNPbZone_h

typedef NS_ENUM(NSInteger, MNZoneType);

/***************************************************************************/

///Represents a property / building zone
@interface MNPbZone : NSObject


/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// The zone type
- (MNZoneType)type;

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'buildingId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Returns: The new `MNPbZone` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId buildingId:(NSInteger)buildingId;


/***************************************************************************/

/// Compares the current zone with another zone
///
/// - Parameter zomne:  The zone to compare with the current zone
/// - Returns: true if the current zone matches the given zone.

- (BOOL)isEqual:(nonnull MNPbZone *)zone;


/***************************************************************************/

@end


#endif /* MNPbZone_h */
