//
//  MNSearchFilter.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNSearchFilter_h
#define MNSearchFilter_h

typedef NS_ENUM(NSInteger, MNDataType);




/***************************************************************************/

/// Represents search filters for properties
@interface MNPropertySearchFilters : NSObject

/***************************************************************************/

/// The type of data
@property (readonly) MNDataType dataType;

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' value
///
/// - Parameter propertyId:  A number identifying the property to search
/// - Returns: An identifier for the property to search.

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/

/// A number identifying a property
- (NSInteger)propertyId;


/// A list of numbers by which the search filter data will be displayed.
- (nonnull NSArray<NSNumber *> *)searchFilterDisplayOrder;

/***************************************************************************/

@end

#endif /* MNSearchFilter_h */
