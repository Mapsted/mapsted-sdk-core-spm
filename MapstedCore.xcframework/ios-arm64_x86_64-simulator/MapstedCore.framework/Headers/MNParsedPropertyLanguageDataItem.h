//
//  MNParsedPropertyLanguageDataItem.h
//  positioning
//
//  Created by Tianyun Shan on 2018-12-31.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNParsedPropertyLanguageDataItem_h
#define MNParsedPropertyLanguageDataItem_h

#import "MNParsedLanguageDataItem.h"


/// Represents a data item containing property information in a specific language.
@interface MNParsedPropertyLanguageDataItem : MNParsedLanguageDataItem

/***************************************************************************/

/**
 Creates an instance of the 'MNParsedPropertyLanguageDataItem' class with the specified parameters.
 
 - Parameter propertyId: A number identifying the property
 - Parameter languageId: A number identifying the language used
 - Parameter dataVersion: A number identifying the version of the data contained
 - Parameter compressedData: The raw, unparsed data
 
 - Returns: The new instance with thhe specified parameters
 
 
 */

- (nonnull id)initWithPropertyId:(NSInteger)propertyId languageId:(NSInteger)languageId dataVersion:(NSInteger)dataVersion compressedData:(nonnull NSData *)data;


/***************************************************************************/

@end


#endif /* MNParsedPropertyLanguageDataItem_h */
