//
//  MNParsedBuildingDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedBuildingDataItem_h
#define MNParsedBuildingDataItem_h

#import "MNParsedDataItem.h"

/// Represents the parsed version of building data item objects
@interface MNParsedBuildingDataItem : MNParsedDataItem


/***************************************************************************/

/// Creates an instance of parsed 'MNParsedBuildingDataItem' building data item object with the specified 'dataType'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Parameter dataVersion:  A number specifying the version number for the data
/// - Parameter dataType:  The type of data (Building, property, etc) contained in the data item
/// - Parameter compressedData: The raw unparsed data.
/// - Returns: The new `MNParsedBuildingDataItem` instance.

- (nonnull id)initWithBuildingId:(NSInteger)buildingId dataType:(NSInteger)dataType dataVersion:(NSInteger)dataVersion compressedData:(nonnull NSData *)data;

/***************************************************************************/

@end


#endif /* MNParsedBuildingDataItem_h */
