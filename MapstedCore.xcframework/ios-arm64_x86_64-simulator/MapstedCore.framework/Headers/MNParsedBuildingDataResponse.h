//
//  MNParsedBuildingDataResponse.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedBuildingDataResponse_h
#define MNParsedBuildingDataResponse_h

#import "MNParsedDataResponse.h"

/// Represents the parsed version of the building data response
@interface MNParsedBuildingDataResponse : MNParsedDataResponse


/***************************************************************************/

/// Creates an instance with the specified 'buildingId', 'version', 'dataItems', and 'languageDataItems'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Parameter version:  A number specifying the version
/// - Parameter dataItems:  An array collection of Parsed Data Item objects
/// - Parameter languageDataItem:  An array collection of Parsed Language Data Item objects
/// - Returns: The new `MNParsedBuildingDataResponse` instance.

- (nonnull id)initWithBuildingId:(NSInteger)buildingId version:(NSInteger)version dataItems:(nonnull NSArray<MNParsedDataItem  *> *)dataItems;

/***************************************************************************/

@end


#endif /* MNParsedBuildingDataResponse_h */
