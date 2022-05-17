//
//  MNRouteOptions.h
//  positioning
//
//  Created by Tianyun Shan on 2019-04-05.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNRouteOptions_h
#define MNRouteOptions_h

/***************************************************************************/

/// Represents for an MNRoute
@interface MNRouteOptions : NSObject

/***************************************************************************/

/// Should the route include stairs
@property (readonly) BOOL includeStairs;

/// Should the route include escalators
@property (readonly) BOOL includeEscalators;

/// Should the route include elevators
@property (readonly) BOOL includeElevators;

/// Should the route start from the current location
@property (readonly) BOOL isFromCurrentLocation;

/// Should the route be optimized
@property (readonly) BOOL isRoutingOptimized;

//
@property (readonly) BOOL isAccessibilityEnabled;

/***************************************************************************/

/// Creates an MNRoute instance with the specified options to 'includeStairs', 'includeEscalators', 'includeElevators' as well as whether routing 'isFromCurrentLocation' and whether it 'isRouteOptimized'.
///
/// - Parameter includeStairs:  Should stairs be included in the routing
/// - Parameter includeEscalators:  Should escalators be included in the routing
/// - Parameter includeElevators:  Should elevators be included in the routing
/// - Parameter isFromCurrentLocation:  Should routing begin from the current location
/// - Parameter isRouteOptimized:  Should the routing be optimized.

/// - Returns: The new `MNRoute` instance.

- (nonnull id)init:(BOOL)includeStairs escalators:(BOOL)includeEscalators elevators:(BOOL)includeElevators current:(BOOL)isFromCurrentLocation optimized:(BOOL)isRouteOptimized;

- (void)setAccessibility:(BOOL)accessible;
@end

/***************************************************************************/


#endif /* MNRouteOptions_h */
