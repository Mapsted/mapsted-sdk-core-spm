//
//  MNTrajectory.h
//  positioning
//
//  Created by Tianyun Shan on 2018-05-28.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNTrajectory_h
#define MNTrajectory_h

@class MNPosition;

typedef NS_ENUM(NSInteger, MNDeveloperCommonTags) {
  MNDeveloperCommonTagsGpsLoc,
  MNDeveloperCommonTagsBleAdHocLoc,
  MNDeveloperCommonTagsAccessPointLoc,
  MNDeveloperCommonTagsUserPositionBufferLoc,
  MNDeveloperCommonTagsRssLoc,
  MNDeveloperCommonTagsBleProximityLoc,
  MNDeveloperCommonTagsBleAdHocPolygons,
  MNDeveloperCommonTagsInertialTraj,
  MNDeveloperCommonTagsViterbiMaxTraj,
  MNDeveloperCommonTagsViterbiResultantVectorTrag,
  MNDeveloperCommonTagsViterbiResultantToTargetTraj,
  MNDeveloperCommonTagsTrajectoryGraphTraj,
  MNDeveloperCommonTagsMapMatchingTraj,
  MNDeveloperCommonTagsMagFieldTraj,
  MNDeveloperCommonTagsViterbiAllTrajsListTraj,
  MNDeveloperCommonTagsViterbiSearchModeListTraj,
  MNDeveloperCommonTagsFingerprintLocsPts,
  MNDeveloperCommonTagsInitPtsLocsPts,
  MNDeveloperCommonTagsGeofenceMercators
};

@interface MNTrajectory : NSObject
@property (readonly) NSArray<MNPosition *>* userPositions;

- (id)initWithUserPositions: (NSArray<MNPosition *> *) userPositions;

@end


#endif /* MNTrajectory_h */
