//
//  MNParsedDataResponse.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedDataResponse_h
#define MNParsedDataResponse_h

#import <Foundation/Foundation.h>

@class MNParsedDataItem;
@class MNParsedLanguageDataItem;

/// Represents the parsed version of the response data
@interface MNParsedDataResponse : NSObject

/***************************************************************************/

/// A number identifying the data
@property (readonly) NSInteger dataId;

/// A number identifying the version of the data
@property (readonly) NSInteger version;

/// A list of parsed data items
@property (readonly, nonnull) NSArray<MNParsedDataItem *> *dataItems;



/***************************************************************************/

/// Creates an instance with the specified 'dataId', 'version', 'dataItems', and 'languageDataItems'
///
/// - Parameter dataId:  A number identifying the data
/// - Parameter version:  A number identifying the version
/// - Parameter dataItems: A list of parsed property and building data items.
/// - Parameter languageDataItems:  A list of language data items.


/// - Parameter lng:  The longitude of the location
/// - Returns: The new `MNParsedDataResponse` instance.
- (nonnull id)initWithDataId:(NSInteger)dataId version:(NSInteger)version dataItems:(nonnull NSArray<MNParsedDataItem  *> *)dataItems;

@end


#endif /* MNParsedDataResponse_h */
