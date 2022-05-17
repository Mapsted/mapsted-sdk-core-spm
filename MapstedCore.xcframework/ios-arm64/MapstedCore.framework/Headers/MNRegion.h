//
//  MNRegion.h
//  positioning
//
//  Created by Mapsted on 2019-04-12.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Represents a region with minimum and maximum coordinates

@interface MNRegion : NSObject

/***************************************************************************/

/// The minimum position coordinate on the horizontal x-axis
@property double minX;

/// The minimum position coordinate on the vertical y-axis
@property double minY;

/// The maximum position coordinate on the horizontal x-axis
@property double maxX;

/// The maximum position coordinate on the vertical y-axis
@property double maxY;


/***************************************************************************/

/// Creates an instance with the specified minimum and maximum positional values in the vertical and horizontal directions
///
/// - Parameter minX:  The minimum position along the horizontal x-axis
/// - Parameter minY:  The minimum position along the vertical y-axis
/// - Parameter maxX:  The maximum position along the horizontal x-axis
/// - Parameter maxY:  The maximum position along the vertical y-axis
/// - Returns: The new `MNRegion` instance.

- (nonnull id)initWithMinX:(double)minX minY:(double)minY maxX:(double)maxX maxY:(double)maxY;

/***************************************************************************/

@end

