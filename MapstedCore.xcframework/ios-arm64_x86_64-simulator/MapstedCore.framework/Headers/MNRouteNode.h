//
//  MNRouteNode.h
//  positioning
//
//  Created by Mapsted on 2019-04-10.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNZone.h"
#import "MNEntityZone.h"
#import "MNRouteDistanceTime.h"
#import "MNDataType.h"


/// Represents an enumeration of routing instruction types
typedef NS_ENUM(int, MapstedRouteInstructionType) {
    eNoInstruction = 0,
    eRouteStart = 100,
    eRouteDestination = 200,
    eRouteContinue = 300,
    eRouteGoUp = 400,
    eElevatorUp = 410,
    eEscalatorUp = 420,
    eStairsUp = 430,
    eRouteGoDown = 500,
    eElevatorDown = 510,
    eEscalatorDown = 520,
    eStairsDown = 530,
    eRouteGoStraight = 600,
    eRouteTurnLeft = 700,
    eRouteTurnRight = 800,
    eRouteTurnAround = 900,
    eExitBuilding = 1000,
    eEnterBuilding = 1100,
};



/***************************************************************************/


/// Represents a routing node
@interface MNRouteNode : NSObject

/***************************************************************************/

/// A number identifying the node
@property (readonly) int nodeId;

/// The coordinate of the node along the horizontal x-axis
@property (readonly) double x;

/// The coordinate of the node along the verical y-axis
@property (readonly) double y;

/// The zone associated with the node
@property (readonly, nonnull) MNZone *zone;

/// The zone associated with the node
@property (readonly, nonnull) MNEntityZone *entityZone;

/// The instruction string
@property (readonly, nullable) NSString *entityName;

/// The type of map data : property, building, etc.
@property (readonly) MNDataType mapDataType;

/// A number identifing the landmark referred to in the instruction
@property (readonly) NSInteger landmarkEntityId;

/// A number identifing the landmark referred to in the instruction
@property (nonnull) NSArray* landmarkEntityIds;

/// The angle by which the map is (to be) rotated per the routing instruction
@property (readonly) NSInteger mapRotationAngle;

/// A number identifying the image that represents the current instruction
@property (readonly) NSInteger instructionImageId;

/// A number identifying the image that represents the current instruction
@property (readonly) NSInteger transitionDestinationFloorId;


/// If true, the current node is a key point
@property (readonly) bool isKeyPoint;

/// The specific type of current instruction
@property (readonly) MapstedRouteInstructionType instructionType;

/// The estimated distance covered and time taken to cover this node.
@property (readonly, nullable) MNRouteDistanceTime *distTime;

/***************************************************************************/

/// Creates an instance with the specified 'x' and 'y' coordinated, 'zone', 'nodeId', 'landmarkentityId', 'instruction' string, 'mapRotationAngle', 'isKeyPoint' indicator, 'instructionImageId', 'instructionType', and 'distanceTime' estimate
///
/// - Parameter x:  The coordinate of the node along the horizontal x-axis
/// - Parameter y:  The coordinate of the node along the vertical y-axis
/// - Parameter zone:  The zone associated with the node
/// - Parameter nodeId: A number identifying the node
/// - Parameter: landmarkEntityId: A number identifying a landmark associated with the node
/// - Parameter: instruction: A string specifying route node activity.
/// - Parameter: mapRotationAngle: A number representing the rotation angle of the map in question
/// - Parameter: isKeyPoint: If true, this node is a key point
/// - Parameter: instructionImageId: A number identifying the image used to illustrate the instruction
/// - Parameter: instructionType: The type of the current instruction
/// - Parameter: distanceTime: An estimate of the distance covered and time taken for the node instruction
/// - Returns: The new `MNRouteNode` instance.

- (nonnull id)initWithX: (double) x
                      y: (double) y
                   zone: (nonnull MNZone *) zone
                 nodeId: (int) nodeId
            mapDataType: (MNDataType) mapDataType
      landmarkEntityIds: (nonnull NSArray*) landmarkEntityIds
       mapRotationAngle: (NSInteger)mapRotationAngle
             isKeyPoint: (bool)isKeyPoint
        instructionType: (MapstedRouteInstructionType)instructionType
transitionDestinationFloorId: (int)  transitionDestinationFloorId
           distanceTime:(nullable MNRouteDistanceTime *)distTime;


- (nonnull id)initWithX: (double) x
                      y: (double) y
             entityZone: (nonnull MNEntityZone *) entityZone
                 nodeId: (int) nodeId
            mapDataType: (MNDataType) mapDataType
      landmarkEntityIds: (nonnull NSArray*) landmarkEntityIds
       mapRotationAngle: (NSInteger)mapRotationAngle
             isKeyPoint: (bool)isKeyPoint
        instructionType: (MapstedRouteInstructionType)instructionType
transitionDestinationFloorId: (int)  transitionDestinationFloorId
           distanceTime:(nullable MNRouteDistanceTime *)distTime;

- (nonnull id)initWithRouteNode: (nonnull MNRouteNode *)r;

/***************************************************************************/

@end

