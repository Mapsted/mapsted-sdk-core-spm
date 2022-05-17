//
//  MNPropertyPoints.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyPoints_h
#define MNPropertyPoints_h

@class MNMapPoint;

/// Represenets map points with a property
@interface MNPropertyPoints : NSObject

/**
    Creates an instance of 'MNPropertyPointns' for the property with the specified 'propertyId'
 
    - Parameter propertyId: A number identifyinng the property
    - Returns: the new 'MNPropertyPoints' instance
 */
- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/

/**
    Retrieves and returns a point with the specified 'pointId'
 
 - Parameter pointId: A number identifying the map point
 - Returns: The matching map point if any. nil otherwise.
 */
- (nullable MNMapPoint *)pointWithPointId:(NSInteger)pointId;

/***************************************************************************/

/**
 Returns all available map points in the current property
 */
- (nonnull NSArray<MNMapPoint *> *)points;

/***************************************************************************/

@end


#endif /* MNPropertyPoints_h */
