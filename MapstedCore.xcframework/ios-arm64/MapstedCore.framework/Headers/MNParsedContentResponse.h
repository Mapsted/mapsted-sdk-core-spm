//
//  MNParsedContentResponse.h
//  positioning
//
//  Created by Mapsted on 2019-09-23.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNParsedContentResponse_h
#define MNParsedContentResponse_h

typedef NS_ENUM(NSInteger, MNDataType);
typedef NS_ENUM(NSInteger, MNContentType);

/// Represents relevant marketing content
@interface MNParsedContentResponse : NSObject

/***************************************************************************/

/// A number identifying the marketing content data
@property (readonly) NSInteger dataId;

/// The type of data
@property (readonly) MNDataType dataType;

/// The type of content
@property (readonly) MNContentType contentType;


/// A number identifying the data version
@property (readonly) NSInteger dataVersion;

/// Represents a string specifying the license.
@property (readonly, nonnull) NSString *licenceId;

/// Represents the raw, unparsed data
@property (readonly, nullable) NSData *compressedData;


/***************************************************************************/

/// Creates an instance with the specified 'dataId', 'dataType', 'contentType', 'dataVersion', and 'compressedData'.
///
/// - Parameter dataId:  A number identifying the marketing data
/// - Parameter dataType:  The type of marketing data
/// - Parameter contentType:  The type of marketing content
/// - Parameter dataVersion:  The version of the marketing data
/// - Parameter licenceId: A string identifier for the license
/// - Parameter compressedData:  The unparsed, compressed version of the marketing data
/// - Returns: The new `MNParsedContentResponse` instance.

- (nonnull id)initWithDataId:(NSInteger)dataId dataType:(MNDataType)dataType contentType:(MNContentType)contentType dataVersion:(NSInteger)dataVersion licenceId:(nonnull NSString *)licenceId compressedData:(nullable NSData *)data;

/***************************************************************************/

@end

#endif /* MNParsedContentResponse_h */
