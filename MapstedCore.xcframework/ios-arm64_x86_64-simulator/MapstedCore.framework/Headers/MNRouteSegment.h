//
//  MNRouteSegment.h
//  positioning
//
//  Created by Mapsted on 2019-04-10.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MNRouteNode.h"
#import "MNRegion.h"
#import "MNMercator.h"
/***************************************************************************/

/// Represents the type of a route segment
typedef NS_ENUM(int, MapstedRouteSegmentType);

/***************************************************************************/

/// Represents the type of a route transition
typedef NS_ENUM(int, RouteTransitionType) {
    eUNKNOWN_TRANSITION = 0,
    eENTRANCE_EXIT_TYPE = 10,
    eSTAIRS_TYPE = 20,
    eESCALATOR_TYPE = 30,
    eELEVATOR_TYPE = 40,
    eSUBWAY_STATION_TYPE = 50,
    eTRAIN_STATION_TYPE = 60,
    eBUS_STOP_TYPE = 70,
    eSHUTTLE_TYPE = 80,
    eGATE_TYPE = 90,
    eACCESSIBLE_RAMP_TYPE = 100,
    eCONVEYOR_BELT_TYPE = 110,
    eSTEPS_TYPE = 120
};

/***************************************************************************/

/// Represents a route segment

@interface MNRouteSegment : NSObject


/***************************************************************************/

/// The type of route segment
@property (readonly) MapstedRouteSegmentType segmentType;

/// A list of route nodes
@property (readonly, nonnull) NSArray<MNRouteNode *> *routeNodes;

/// A list of route nodes
@property (readonly, nonnull) NSMutableDictionary* keyPointDistanceTimes;

/// A list of smooth route nodes
@property (readonly, nonnull) NSArray<MNMercator *> *smoothedRouteNodes;

/// The route transition type
@property (readonly) RouteTransitionType transitionType;

/// A number identifying thhe floor
- (NSInteger)floorId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the property
- (NSInteger)propertyId;

/// The starting node
- (nullable MNRouteNode *)startNode;

/// The ending node
- (nullable MNRouteNode *)endNode;

/// The bounds of the route segment
- (nonnull MNRegion *)bounds;

/***************************************************************************/

/// Creates an instance with the specified 'routeNodes', 'segmentType', and 'transitionType'.
///
/// - Parameter routeNodes:  A collection of route nodes that form a route segment
/// - Parameter segmentType:  The type of the route segment
/// - Parameter transitionType:  The type of transition for the route segment

/// - Returns: The new `MNRouteSegment` instance.

- (nonnull id)initWithRouteNodes:(nonnull NSArray<MNRouteNode *> *)routeNodes smoothedRouteNodes:(nonnull NSArray<MNMercator *> *)smoothedRouteNodes segmentType:(MapstedRouteSegmentType)segmentType transitionType:(RouteTransitionType)transitionType;

/***************************************************************************/

@end

