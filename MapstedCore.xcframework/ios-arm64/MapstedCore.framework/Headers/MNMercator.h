//
//  MNMercatorBridge.h
//  nav
//
//  Created by Tianyun Shan on 4/2/17.
//  Copyright © 2017 Maspted. All rights reserved.
//

#ifndef MNMercatorBridge_h
#define MNMercatorBridge_h

#import <CoreLocation/CoreLocation.h>

/// A Mercator object to represent a specific location.

@interface MNMercator : NSObject<NSCoding>

/***************************************************************************/

/// Mercator coordinate on the x axis
@property (readonly) double x;

/// Mercator coordinate on the y axis
@property (readonly) double y;

/// Mercator coordinate on the z axis
@property (readonly) double z;

/***************************************************************************/
/// Creates an instance with the specified 'x' and 'y' positions.
///
/// - Parameter x:  The location coordinate on the x-axis
/// - Parameter y:  The location coordinate on the y-axis
/// - Parameter z:  The location coordinate on the z-axis
/// - Returns: The new `MNMercator` instance.

- (nonnull id)initWithX:(double)x y:(double)y z:(double)z;

/***************************************************************************/

/// Creates an instance with the specified 'lat' and 'lng' values.
///
/// - Parameter lat:  The latitude of the location
/// - Parameter lng:  The longitude of the location
/// - Returns: The new `MNMercator` instance.

- (nonnull id)initWithLat:(double)lat lng:(double)lng;

/***************************************************************************/

/// Creates an instance from a specified 'mercator' object.
///
/// - Parameter mercator:  A mercator instance. Cannot be null
/// - Returns: The new `MNMercator` instance.

- (nonnull id)initWithMercator:(nonnull MNMercator *)mercator;


/***************************************************************************/

+ (CLLocationCoordinate2D) latLongFromMercator:(nonnull MNMercator *)mercator;
@end



#endif /* MNMercatorBridge_h */
