//
//  MNPropertySearchEntities.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-27.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertySearchEntities_h
#define MNPropertySearchEntities_h

@class MNSearchEntity;
@class PropertySearchEntities;

/**
 An interface to retrieve search entities corresponding to a specified property.
 */

@interface MNPropertySearchEntities : NSObject
/**
   Function to instantiate a property search object.
   - Parameter propertyId: a number identifying the property to search.
 
 */

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/**
  Unique identifying number for a Property.
 */

- (NSInteger)propertyId;

- (nullable PropertySearchEntities *) propertySearchEntities;


@end


#endif /* MNPropertySearchEntities_h */
