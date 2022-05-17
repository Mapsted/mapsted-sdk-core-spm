//
//  MNMercatorBoundary.h
//  positioning
//
//  Created by Tianyun Shan on 2018-05-28.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMercatorBoundary_h
#define MNMercatorBoundary_h

@class MNMercator;

/// Represents boundaries of a collection of MNMercator objects
@interface MNMercatorBoundary : NSObject

/***************************************************************************/

/// A list of mercator objects comprising an MNMercatorBoundary object.
@property NSArray<MNMercator *> *mercators;

/***************************************************************************/

/// Creates an instance from a list of specified 'mercators'.
///
/// - Parameter mercators:  An array of mercator objects
///
/// - Returns: The new `MNMercatorBoundary` instance.

- (id)initWithMercators: (NSArray<MNMercator *> *) mercators;

/***************************************************************************/

@end


#endif /* MNMercatorBoundary_h */
