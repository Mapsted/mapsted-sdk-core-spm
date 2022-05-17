//
//  MNParsedPropertyDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedPropertyDataItem_h
#define MNParsedPropertyDataItem_h

#import "MNParsedDataItem.h"

/**
 Represents the parsed version of data item associated withh a property
 */

@interface MNParsedPropertyDataItem : MNParsedDataItem

/***************************************************************************/

/**
   Creates an instance of the 'MNParsedPropertyDataItem' class with the specified properties
 
 - Parameter buildingId: A number to identify the building
 - Parameter dataType: The type of data contained.
 - Parameter compressedData: The unparsed, compressed version of the property data
 - Returns: The new instance with the specified parameters
 */


- (nonnull id)initWithPropertyId:(NSInteger)buildingId dataType:(NSInteger)dataType dataVersion:(NSInteger)dataVersion compressedData:(nonnull NSData *)data;

/***************************************************************************/


@end


#endif /* MNParsedPropertyDataItem_h */
