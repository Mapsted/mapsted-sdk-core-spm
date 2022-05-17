//
//  MNZoneLabel.h
//  positioning
//
//  Created by Mapsted on 2019-08-28.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNZoneLabel_h
#define MNZoneLabel_h

@class MNZone;

/// Represents a label corresponding to a map zone
@interface MNZoneLabel : MNZone


/***************************************************************************/

/// Creates an instance with the specified 'propertyId', 'floorId', 'longLabel' and 'shortLabel' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter longLabel:  The long format name to display for the zone
/// - Parameter shortLabel:  The short format name to display for the zone
/// - Returns: The new `MNZoneLabel` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId buildingId:(NSInteger)buildingId floorId:(NSInteger)floorId longLabel:longName shortLabel:shortName;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building

- (NSInteger)buildingId;

/// Represents a number identifying the floor
- (NSInteger)floorId;

/// Represents the display name for zone label in long form
- (nonnull NSString *)longName;

/// Represents the display name for zone label in short form
- (nonnull NSString *)shortName;

@end
#endif /* MNZoneLabel_h */
