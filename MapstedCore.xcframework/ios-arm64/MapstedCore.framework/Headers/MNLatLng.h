//
//  MNLatLng.h
//  positioning
//
//  Created by Tianyun Shan on 2018-07-18.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNLatLng_h
#define MNLatLng_h

/// Represents a combination of latitude and longitude
@interface MNLatLng: NSObject

/***************************************************************************/

/// The latitude
@property (readonly) double lat;

/***************************************************************************/


/// The longitude
@property (readonly) double lng;

/***************************************************************************/


/// Creates an instance with a specified 'lat' and 'lng'.
///
/// - Parameter lat:  The latitude
/// - Parameter lng:  The longitude
///
/// - Returns: The new `MNLatLng` instance.

- (id)initWithLat:(double)lat lng:(double)lng;

@end

#endif /* MNLatLng_h */


