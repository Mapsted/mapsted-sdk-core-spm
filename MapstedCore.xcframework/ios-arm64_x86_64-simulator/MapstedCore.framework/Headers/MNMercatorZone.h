//
//  MNMercatorZone.h
//  positioning
//
//  Created by Daniel on 2020-05-06.
//  Copyright © 2020 Mapsted. All rights reserved.
//

#ifndef MNMercatorZoneBridge_h
#define MNMercatorZoneBridge_h

#import "MNZone.h"
#import "MNMercator.h"

/// Represents an MNMercatorZone object with a specific MNMercator, accuracy, and timestamp.
@interface MNMercatorZone : NSObject

/***************************************************************************/

/// Represents the property
@property (readonly) long propertyId;

/***************************************************************************/

/// Represents the building
@property (readonly) long buildingId;

/***************************************************************************/

/// Represents the floor
@property (readonly) long floorId;

/***************************************************************************/

/// Represents the timestamp
@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double z;

/***************************************************************************/

/// Creates an instance with a specified 'propertyId', 'buildingid' , 'floorId', 'x coordinate', and 'y coordinate'.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter x:  The x coordinate of the mercator's location
/// - Parameter y:  The y coordinate of the mercator's location/
/// - Returns: The new `MNMercatorZone` instance.

- (nonnull id)initWithPropertyId:(int)propertyId  buildingId:(int)buildingId  floorId:(int)floorId  x:(double)x  y:(double)y;

/***************************************************************************/

/// Creates an instance with a specified 'propertyId', 'buildingid' , 'floorId', 'x coordinate', and 'y coordinate' and 'z' coordinate
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter x:  The x coordinate of the mercator's location
/// - Parameter y:  The y coordinate of the mercator's location/
/// - Parameter z:  The z coordinate of the mercator's location/
/// - Returns: The new `MNMercatorZone` instance.

- (nonnull id)initWithPropertyId:(int)propertyId  buildingId:(int)buildingId  floorId:(int)floorId x:(double)x y:(double)y z:(double)z;

/***************************************************************************/

/// Creates an instance from the specified 'MNZone' zone , and 'MNMercator' mercator
/// - Parameter zone:  The  zone with information about property, building and floor.
/// - Parameter mercator: The mercator holding coordinates
/// - Returns: The new `MNMercatorZone` instance.

- (nonnull id)initWithZone:(nonnull MNZone*)zone andMercator: (nonnull MNMercator*) mercator;
@end



#endif /* MNMercatorZone_h */
