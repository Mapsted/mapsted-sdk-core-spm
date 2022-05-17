//
//  MNCategory.h
//  positioning
//
//  Created by Mapsted on 2019-08-12.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNCategory_h
#define MNCategory_h

@class MNCategoryTree;
@class CMSPropertyInfo;


/***************************************************************************/

/// Represents a category for an entity
@interface MNCategory : NSObject

/***************************************************MNCategory***********/

/// Creates an MNCategory instance with the specified 'key'.
///
/// - Parameter key:  A guid string identifying the category
/// - Returns: The new `MNCategory` instance.

- (nullable id)initWithGuid:(nonnull NSString *)key;

/***************************************************************************/

/// Creates an MNCategory instance with the specified 'key' for a specified 'propertyId'.
///
/// - Parameter propertyId:  An identifying of the associated property
/// - Parameter key:  The guid identifying the category
/// - Returns: The new `MNCategory` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId Guid:(nonnull NSString *)key;

/***************************************************************************/


@end

#endif /* MNCategory_h */
