//
//  MNGPSLoc.h
//  nav
//
//  Created by Tianyun Shan on 2017-01-31.
//  Copyright © 2017 Maspted. All rights reserved.
//

#ifndef MNGPSLoc_h
#define MNGPSLoc_h

#define MAX_TIME_DELTA 120
#define MAX_ACCURACY_TH_IOS 50

#import <CoreLocation/CoreLocation.h>


/// Represents a GPS Location
@interface MNGPSLoc : NSObject


/***************************************************************************/

/// The longitudnal component of the GPS location
@property double longitude;

/// The latitudnal component of the GPS location
@property double latitude;

/// The level of accuracy associated with the location
@property double accuracy;

/// The timestamp of when the the GPS location was captured
@property double eventTimeStamp;

/// The absolute time of when the GPS location was captured
@property CFAbsoluteTime createdAt;

/// The mercator positional value along the horizontal x-axis
@property double mercatorX;

/// The mercator positional value along the vertical y-axis
@property double mercatorY;

@property NSNumber* _Nullable level;


/***************************************************************************/

/// Creates an MNGPSLoc instance from the specified 'location'.
///
/// - Parameter location:  The geographical location from which a GPS location will be created
/// - Returns: The new `MNGPSLoc` instance.
- (id)initWithLocation:(CLLocation *)location;

/***************************************************************************/

/// Creates an instance of with the specified 'mercatorX' and 'mercatorY' values.
///
/// - Parameter mercatorX:  The mercator value along the horizontal x-axis
/// - Parameter mercatorY:  The mercator value along the vertical y-axis
/// - Returns: The new `MNGPSLoc` instance.
- (id)initWithMercator:(double)mercatorX y:(double)mercatorY;

/***************************************************************************/

/// Creates an instance of with the specified 'latitude' and 'longitude' values with a given 'accuracy'.
///
/// - Parameter latitude:  The latitudnal value
/// - Parameter longitude:  The longitudnal value
/// - Returns: The new `MNGPSLoc` instance.

- (id)initWithLatLng:(double)latitude lng:(double)longitude acc:(double)accuracy;


/***************************************************************************/

@end

#endif /* MNGPSLoc_h */
