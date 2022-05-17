//
//  MNPointStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-28.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPointStyle_h
#define MNPointStyle_h

@class MNIconStyle;
@class MNTextStyle;

/// Represents the style for a map point
@interface MNPointStyle : NSObject

/***************************************************************************/

/**
     Creates an instance of the class with the specified 'propertyId' and 'pointId' parametrs.
     
     - Parameter propertyId: A number identifying the property
     - Parameter pointId: A number identifying the point
*/
- (nullable id)initWithPropertyId:(NSInteger)propertyId pointId:(NSInteger)pointId;

/***************************************************************************/

/**
     Creates an instance of the class with the specified 'buildinngId', 'floorId' and 'pointId' parametrs.
     
     - Parameter buildingId: A number identifying the Building
     - Parameter floorId: A number identifying the floor
     - Parameter pointId: A number identifying the point
*/
- (nullable id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId pointId:(NSInteger)pointId;


/***************************************************************************/

/// Represents the icon associated with the style
- (nullable MNIconStyle *)icon;

/// Represents the text associated with the style
- (nullable MNTextStyle *)text;

/***************************************************************************/

@end


#endif /* MNPointStyle_h */
