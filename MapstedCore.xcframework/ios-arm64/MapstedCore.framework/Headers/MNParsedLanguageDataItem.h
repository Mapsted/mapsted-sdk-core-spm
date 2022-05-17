//
//  MNParsedLanguageDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedLanguageDataItem_h
#define MNParsedLanguageDataItem_h


/// Represents parsed location-specific content in a given language
@interface MNParsedLanguageDataItem : NSObject

/***************************************************************************/

/// A number identifying the data
@property (readonly) NSInteger dataId;

/// A number identifying the language
@property (readonly) NSInteger languageId;

/// A number identifying the version of the data
@property (readonly) NSInteger dataVersion;

/// The unparsed, compressed data
@property (readonly, nonnull) NSData *compressedData;

/***************************************************************************/

/// Creates an instance with the specified 'dataId', 'languageId', 'dataVersion', 'compressedData'' 
///
/// - Parameter dataId:  A number identifying the data
/// - Parameter languageId: A number identifying the language used
/// - Parameter dataVersion: A number specifying the version of the data
/// - Parameter compressedData: The unparsed, compressed data
/// - Returns: The new `MNParsedLanguageDataItem` instance.

- (nonnull id)initWithDataId:(NSInteger)dataId languageId:(NSInteger)languageId dataVersion:(NSInteger)dataVersion compressedData:(nonnull NSData *)data;

/***************************************************************************/

@end


#endif /* MNParsedLanguageDataItem_h */
