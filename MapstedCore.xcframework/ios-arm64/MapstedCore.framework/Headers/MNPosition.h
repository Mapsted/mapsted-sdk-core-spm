//
//  MNPosition.h
//  positioning
//
//  Created by Tianyun Shan on 2019-01-04.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNPosition_h
#define MNPosition_h

@class MNZone;
@class MNMercator;

/***************************************************************************/
/// Represents a locationing position
@interface MNPosition : NSObject


/***************************************************************************/

/// The zone
@property (readonly, nonnull) MNZone *zone;

/// The mercator location
@property (readonly, nonnull) MNMercator *loc;

/// The level of accuracy of the position
@property (readonly) double accuracy;

/// The varX of the position
@property (nonatomic) float varX;
/// The varY of the position
@property (nonatomic) float varY;
/// The covXY of the position
@property (nonatomic) float covXY;

/// The time stamp of when the position was captured
@property (readonly) double timestamp;

/***************************************************************************/

/// Creates an instance with the specified 'zone' and 'loc' values.
///
/// - Parameter zone:  The zone of the location
/// - Parameter loc:  The mercator of the location
/// - Returns: The new `MNPosition` instance.

- (nonnull id)initWithZone:(nonnull MNZone *)zone loc:(nonnull MNMercator *)loc;

/***************************************************************************/

/// Creates an instance with the specified 'zone', 'loc', 'accuracy' and 'timestamp' values.
///
/// - Parameter zone:  The zone of the location
/// - Parameter loc:  The mercator of the location
/// - Parameter accuracy:  The accuracy of the positioning information
/// - Parameter timestamp:  The timestamp for when the position is captured
/// - Returns: The new `MNPosition` instance.

- (nonnull id)initWithZone:(nonnull MNZone *)zone loc:(nonnull MNMercator *)loc accuracy:(double)accuracy timestamp:(double)timestamp;


/***************************************************************************/

/// Creates an instance from another 'position'
///
/// - Parameter position: A position from which a new instance will be created
/// - Returns: The new `MNPosition` instance.


- (nonnull id)initWithPosition:(nonnull MNPosition *)position;

/***************************************************************************/

@end


#endif /* MNPosition_h */
