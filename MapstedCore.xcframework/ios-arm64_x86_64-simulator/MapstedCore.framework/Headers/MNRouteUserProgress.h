//
//  MNRouteUserProgress.h
//  positioning
//
//  Created by Mapsted on 2022-01-11.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef MNRouteUserProgress_h
#define MNRouteUserProgress_h

@class MNRoute;
@class MNRouteSegment;
@class MNMercator;
@class MNRouteDistanceTime;

@interface MNRouteUserProgress : NSObject

	//MARK: - PROPERTIES
	@property (readonly, nullable) MNRoute *route;

	@property (readonly) int routeSegmentProgressIndex; // index of route segment that the user is currently on (same segment as nextKeyPoint)

	@property (readonly) int smoothRouteProgressIndex; // index of last visited point on smooth route (same segment as nextKeyPoint)

	@property (readonly) int nextKeyNodeIndex; //

	@property (readonly, nonnull) MNRouteSegment* currentSegment;
	@property (readonly, nonnull) MNRouteDistanceTime* distanceTimeToNextKeyPoint;

	@property (readonly, nonnull) NSArray<MNMercator*> *visitedPathOfCurrentSegment;
	@property (readonly, nonnull) NSArray<MNMercator*> *upcomingPathOfCurrentSegment;


	//MARK: - METHODS
	- (int) getSmoothRouteProgressIndex;

	- (int) getRouteSegmentProgressIndex;

	- (MNRouteSegment* _Nonnull) getCurrentSegment;

	- (NSArray<MNMercator*> * _Nonnull) getVisitedPathOfCurrentSegment;
	- (NSArray<MNMercator*> * _Nonnull) getUpcomingPathOfCurrentSegment;
	- (MNRoute* _Nonnull) getCurrentRoute;
	- (MNRouteDistanceTime* _Nonnull) getDistanceTimeToNextKeyPoint;

@end

#endif /* MNRouteUserProgress_h */
