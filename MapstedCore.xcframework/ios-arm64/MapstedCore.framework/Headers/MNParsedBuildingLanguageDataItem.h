//
//  MNParsedBuildingLanguageDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedBuildingLanguageDataItem_h
#define MNParsedBuildingLanguageDataItem_h

#import "MNParsedLanguageDataItem.h"

/// Represents the parsed version of building language data item
@interface MNParsedBuildingLanguageDataItem : MNParsedLanguageDataItem

/***************************************************************************/

/// Creates an instance with the specified 'buildingId', 'languageId', 'dataVersion' and 'compressedData'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Parameter languageId:  A number identifying the language
/// - Parameter dataVersion:  A number identifying the version of data contained
/// - Parameter compressedData:  The raw, uncompressed version of the data
/// - Returns: The new `MNParsedBuildingLanguageDataItem` instance.

- (nonnull id)initWithBuildingId:(NSInteger)buildingId languageId:(NSInteger)languageId dataVersion:(NSInteger)dataVersion compressedData:(nonnull NSData *)data;


/***************************************************************************/

@end


#endif /* MNParsedBuildingLanguageDataItem_h */
