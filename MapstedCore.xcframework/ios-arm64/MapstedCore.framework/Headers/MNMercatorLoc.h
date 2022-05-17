//
//  MNMercatorLoc.h
//  positioning
//
//  Created by Tianyun Shan on 2018-05-28.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMercatorLoc_h
#define MNMercatorLoc_h

@class MNMercator;

/// Represents an MNMercatorLoc object with a specific MNMercator, accuracy, and timestamp.
@interface MNMercatorLoc : NSObject

/***************************************************************************/

/// Represents the Mercator
@property MNMercator * mercator;

/***************************************************************************/

/// Represents the accuracy level
@property double accuracy;

/***************************************************************************/

/// Represents the timestamp
@property double timestamp;

/***************************************************************************/

/// Creates an instance with a specified 'mercator', 'boundary' and 'timestamp'.
///
/// - Parameter mercator:  An MNMercator object representing a location
/// - Parameter accuracy:  Accuracy level of the location
/// - Parameter timestamp:  A timestamp representing when the location is captured
///
/// - Returns: The new `MNMercatorLoc` instance.

- (id)initWithMercator:(MNMercator *)mercator accuracy:(double)accuracy timestamp:(double)timestamp;

/***************************************************************************/

@end


#endif /* MNMercatorLoc_h */
