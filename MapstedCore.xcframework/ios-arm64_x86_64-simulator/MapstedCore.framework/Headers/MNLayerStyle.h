//
//  MNLayerStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2019-01-15.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNLayerStyle_h
#define MNLayerStyle_h

/// Represents the data type
typedef NS_ENUM(NSInteger, MNDataType);


/// Represents a layer style
@interface MNLayerStyle : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'layerIdx' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter layerId:  A number identifyingn the layer
/// - Returns: The new `MNLayerStyle` instance.

- (id)initWithPropertyId:(NSInteger)propertyId layerIdx:(NSInteger)layerIdx;

/***************************************************************************/

/// Creates an instance with the specified 'lat' and 'lng' values.
///
/// - Parameter buildingId:  A number identifyingn the building
/// - Parameter floorId:  A number identifying the floor within the building
/// - Parameter layerId:  A number identifying the layer

/// - Returns: The new `MNLayerStyle` instance.

- (id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId layerIdx:(NSInteger)layerIdx;

/***************************************************************************/
/*
/// The type of data
- (MNDataType)dataType;

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the floor
- (NSInteger)floorId;

/// A number identifying the layer
- (NSInteger)layerIdx;
*/
/// Whether or not this represents a spatial index layer on the map.
- (BOOL)isSpatialIndex;

/// Whether or not this represents an overlay layer on the map.
- (BOOL)isOverlay;

/// The minimum level of zoom
- (NSInteger)minZoom;

/// Represents the maximum level of zoom
- (NSInteger)maxZoom;
/*
/// The default opacity.
- (NSInteger)defaultOpacity;
*/
@end


#endif /* MNLayerStyle_h */
