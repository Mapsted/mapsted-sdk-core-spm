//
//  MNPolygonStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPolygonStyle_h
#define MNPolygonStyle_h

@class MNColour;
@class MNLineStyle;
@class MNTextStyle;
@class MNIconStyle;

/// Represents the style of map polygon
@interface MNPolygonStyle : NSObject

/**
     Creates an instance of the class with the specified parametrs.
     
     - Parameter propertyId: A number identifying the property
     - Parameter polygonId: A number identifying the polygon
*/
- (nullable id)initWithPropertyId:(NSInteger)propertyId polygonId:(NSInteger)polygonId;

/***************************************************************************/

/**
     Creates an instance of the class with the specified parametrs.
     
     - Parameter buildingId: A number identifying the building
     - Parameter floorId: A number identifying the floor
     - Parameter polygonId: A number identifying the polygon
*/
- (nullable id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId polygonId:(NSInteger)polygonId;

/***************************************************************************/

/// Represents a number identifying the layer
- (NSInteger)layerIdx;

/// Represents the color used for the fill of the polygon
- (nullable MNColour *)fillColour;

/// Represents the style of the lines used to draw the polygon
- (nullable MNLineStyle *)line;

/// Represents the style used to draw the text (size, color, etc)
- (nullable MNTextStyle *)text;

/// Represnets the style used to draw the icon
- (nullable MNIconStyle *)icon;

/// A number identifying the layer when in selected state
- (NSInteger)selectedLayerIdx;

/// Represents the color used to fill the polyon when in selected state
- (nullable MNColour *)selectedFillColour;

/// Represents the color used to draw the polygon lines when in selected state
- (nullable MNLineStyle *)selectedLine;

/// Represents the style to used to draw text when in selected state
- (nullable MNTextStyle *)selectedText;

/// Represents the icon to use for the polygon when in selected state
- (nullable MNIconStyle *)selectedIcon;

@end

#endif /* MNPolygonStyle_h */
