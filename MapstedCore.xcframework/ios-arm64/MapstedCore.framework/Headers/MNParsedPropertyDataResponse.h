//
//  MNParsedPropertyDataResponse.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedPropertyDataResponse_h
#define MNParsedPropertyDataResponse_h

#import <Foundation/Foundation.h>
#import "MNParsedDataResponse.h"


/**
 
Represents the parsed version of the data package containing information about the property
 */
@interface MNParsedPropertyDataResponse : MNParsedDataResponse

/***************************************************************************/

/**
 Creates an instance of the class with the specified 'propertyId', 'version', 'dataItems', languageDataItems', parameters.
 
 - Parameter propertyid: A number that identifies the property
 - Parameter version: A number that identifies the version of the data contained
 - Parameter dataItems: An narray collection of items containing parsed data
 - Parameter languageDataItem: An narray collection of items containing parsed data items in a specific language
 
 - Returns: The nnew instance created with the specified parameters.
 */

- (nonnull id)initWithPropertyId:(NSInteger)propertyId version:(NSInteger)version dataItems:(nonnull NSArray<MNParsedDataItem  *> *)dataItems;

/***************************************************************************/


@end


#endif /* MNParsedPropertyDataResponse_h */
