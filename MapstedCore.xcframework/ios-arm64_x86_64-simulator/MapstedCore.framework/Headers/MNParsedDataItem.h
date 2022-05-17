//
//  MNParsedDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedDataItem2_h
#define MNParsedDataItem2_h

#import <Foundation/Foundation.h>


/// Represents a parsed data item
@interface MNParsedDataItem : NSObject


/***************************************************************************/

/// A number identifying the data
@property (readonly) NSInteger dataId;

/// A number identifying the type of data
@property (readonly) NSInteger dataType;

/// A number identifying the version of the data
@property (readonly) NSInteger dataVersion;

/// Raw data in compressed form
@property (readonly, nullable) NSData *compressedData;

/***************************************************************************/

/// Creates an instance with the specified 'dataId', 'dataType', 'dataVersionn', and 'data' values.
///
/// - Parameter dataId:  The identifying number for the data
/// - Parameter dataType:  A number identifying the type of the data
/// - Parameter dataVersion:  A number identifying the version of the data
/// - Parameter compressedData: A compressed version of the data.

/// - Returns: The new `MNParsedDataItem` instance.

- (nonnull id)initWithDataId:(NSInteger)dataId dataType:(NSInteger)dataType dataVersion:(NSInteger)dataVersion compressedData:(nullable NSData *)data;

/***************************************************************************/

@end


#endif /* MNParsedDataItem_h */
