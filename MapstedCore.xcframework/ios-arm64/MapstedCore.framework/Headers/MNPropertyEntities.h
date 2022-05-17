//
//  MNPropertyEntities.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-20.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyEntities_h
#define MNPropertyEntities_h

@class MNMapEntity;


/// Represents property entites
@interface MNPropertyEntities : NSObject


/***************************************************************************/

/**
    Creates an instance of 'MNPropertyEntities' with the specified 'propertyId'.
    - Parameter propertyId:  A number identifying the property
    - Returns: The new `MNPropertyEntities` instance.
*/

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/


/**
    Creates an instance of 'MMMapEntity' for the specified 'entityId'.
    - Parameter entityId:  A number identifying the property
    - Returns: The new `MMMapEntity` instance.
*/

- (nullable MNMapEntity *)entityWithEntityId:(NSInteger)entityId;

/***************************************************************************/

/**
    Returns a list of all entities associated with the current property
    - Parameter entityId:  A number identifying the property
    - Returns: The new `MMMapEntity` instance.
 */

- (nonnull NSArray<MNMapEntity *> *)entities;

/***************************************************************************/


@end

#endif /* MNPropertyEntities_h */
