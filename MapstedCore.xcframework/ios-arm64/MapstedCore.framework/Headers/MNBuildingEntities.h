//
//  MNBuildingEntities.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingEntities_h
#define MNBuildingEntities_h

@class MNMapEntity;

/// Represents entities contained within a building

@interface MNBuildingEntities : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the buliding
/// - Returns: The new `MNBuildingEntities` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Creates a map entity instance for the specified 'entityId'.
///
/// - Parameter entityId: An number identifying thhe entity
/// - Returns: The new `MNMapEntity` instance.

- (nullable MNMapEntity *)mapEntityWithEntityId:(NSInteger)entityId;


/***************************************************************************/

/// Returns an array collection of 'MNMapEntity' objects

- (nullable NSArray<MNMapEntity *> *)mapEntities;

/***************************************************************************/

@end


#endif /* MNBuildingEntities_h */
