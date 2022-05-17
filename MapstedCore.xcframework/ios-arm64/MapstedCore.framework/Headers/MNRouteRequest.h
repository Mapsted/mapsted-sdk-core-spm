//
//  MNRouteRequest.h
//  positioning
//
//  Created by Tianyun Shan on 2019-04-05.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNRouteRequest_h
#define MNRouteRequest_h

@protocol Searchable;
@class MNRouteOptions;

/***************************************************************************/

/// Represents a route request

@interface MNRouteRequest : NSObject

/***************************************************************************/

/// Options for the route
@property (readonly, nonnull) MNRouteOptions *routeOptions;

/// A list of destinations for the route
@property (readonly, nonnull) NSArray<Searchable> *destinations;

/// An identifier for the entity at the starting point
@property (nonnull, readonly) id<Searchable> startEntity;

/// Should the routing start from the current location
@property (readonly) BOOL fromCurrentLocation;

/***************************************************************************/

/// Creates an instance of 'MNRouteRequest' with the specified 'routeOptions', possibly 'fromCurrentLocation', towards possibly multiple 'destinations' beginning from location specified by 'startEntity'
///
/// - Parameter routeOptions:  What options to use in creating the route
/// - Parameter fromCurrentLocation: Whether or not the routing should start from present location
/// - Parameter destinations: One or more destinations for the route
/// - Parameter startEntity: The entity from which the route will begin

/// - Returns: The new `MNMercator` instance.

- (nonnull id)initWithRouteOptions:(nonnull MNRouteOptions *)routeOptions destinations:(nonnull NSArray<Searchable> *)destinations startEntity:(nullable id<Searchable>)startEntity;
@end

/***************************************************************************/

#endif /* MNRouteRequest_h */
