//
//  MNRoute.h
//  positioning
//
//  Created by Mapsted on 2019-04-11.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNRouteSegment.h"

@class MNRouteNode;

/***************************************************************************/

/// Represents a mapping route
@interface MNRoute : NSObject

/***************************************************************************/

/// Segments of the mapping route
@property (readonly, nonnull) NSArray<MNRouteSegment *> *segments;

/***************************************************************************/

/// Name of entity at starting point
@property (readonly, nullable) MNRouteNode *startNode;

/***************************************************************************/

/// Name of entity at starting point
@property (readonly, nullable) MNRouteNode *destinationNode;

/***************************************************************************/

/// The estimated distance covered and estimated time required to cover the route
@property (readonly, nonnull) MNRouteDistanceTime *distTime;

/***************************************************************************/

/// The estimated distance covered and estimated time as a result of a detour
@property (readonly, nonnull) MNRouteDistanceTime *detourDistanceTime;

/***************************************************************************/
	/// Alerts on the route
@property (readonly, nonnull) NSArray<NSString *> *alertIds;


/// Number identifying the destination floor
- (NSInteger)floorId;

/***************************************************************************/

/// Number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Number identifying the property
- (NSInteger)propertyId;

/***************************************************************************/

/// Number identifying the entity at the starting point of the route
- (NSInteger)startEntityId;

/***************************************************************************/

/// Number identifying the destination point of the route
- (NSInteger)destinationEntityId;


/***************************************************************************/



/// Creates an instance of 'MNRoute' with the specified route 'segments' beginning at 'startNode' and ending at
/// 'destinationNode' which is expected to take distance and time specified by 'distTimeEstimate'.
///
/// - Parameter segments:  The segments of the route
/// - Parameter startNode:  The route node at the starting point
/// - Parameter destinationNode:  The route node at the ending point
/// - Parameter distTimeEstimate:  The estimated distance covered and time required for the route.
/// - Returns: The new `MNRoute` instance.


/***************************************************************************/

- (nonnull id)initWithRoute:(nonnull NSArray<MNRouteSegment *> *)segments startNode:(nullable MNRouteNode *)statNode destinationNode:(nullable MNRouteNode *)destinationNode distTimeEstimate:(nullable MNRouteDistanceTime *)distanceTime alertIds: (nonnull NSArray<NSString*> *) alertIds detourDistanceTime:(nullable MNRouteDistanceTime *)detourDistanceTime;

@end

