//
//  MNRouteDistanceTime.h
//  positioning
//
//  Created by Mapsted on 2019-07-29.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>

/***************************************************************************/

/// Represents distance covered and time taken during a route

@interface MNRouteDistanceTime : NSObject

/***************************************************************************/

/// The distance covered in meteres
@property (readonly) double distanceInMeters;

/// The time elapsed in minutes
@property (readonly) double timeInMinutes;

/***************************************************************************/

/// Creates an instance with the specified 'distance' and 'time' values.
///
/// - Parameter distance:  The distance covered during the route
/// - Parameter time:  The time elapsed during the route
/// - Returns: The new `MNRouteDistanceTime` instance.

- (instancetype)initWithDistance:(double)distance time:(double)time;

/***************************************************************************/

@end

