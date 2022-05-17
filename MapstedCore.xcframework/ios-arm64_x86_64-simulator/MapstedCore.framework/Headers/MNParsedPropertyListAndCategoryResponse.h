//
//  MNParsedPropertyListAndCategoryResponse.h
//  positioning
//
//  Created by Mapsted on 2019-08-12.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNParsedPropertyListAndCategoryResponse_h
#define MNParsedPropertyListAndCategoryResponse_h
#import <Foundation/Foundation.h>

/***************************************************************************/

/// Represents the parsed response containing list of properties and categories
@interface MNParsedPropertyListAndCategoryResponse : NSObject

/***************************************************************************/

/// The unparsed properties data
@property (readonly, nullable) NSData *compressedProperties;

/***************************************************************************/

/// The unparsed categories data
@property (readonly, nullable) NSData *compressedCategories;

/***************************************************************************/

/// Creates an instance of 'MNParsedPropertyListAndCategoryResponse' with the specified 'compressedProperties' and 'compressedCategories' values.
///
/// - Parameter 'compressedProperties':  The unparsed property data
/// - Parameter 'compressedCategories'':  The unparsed category data
/// - Returns: The new `MNMercator` instance.

- (nonnull id)initWithCompressProperties:(nullable NSData *)data compressedCategories:(nullable NSData *)data;

/***************************************************************************/

@end

#endif /* MNParsedPropertyListAndCategoryResponse_h */
