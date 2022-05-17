//
//  MNPropertyPolygons.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyPolygons_h
#define MNPropertyPolygons_h

@class MNMapPolygon;
@class MNPolygonStyle;

/// Represents Property Polygons
@interface MNPropertyPolygons : NSObject

/***************************************************************************/

/// Creates an instance for the specified 'propertyId'.
///
/// - Parameter propertyId:  A number identifying the property
/// - Returns: The new `MNPropertyPolygons` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/

/// Returns a map polygon with the specifed polygon id
///
/// - Parameter polygonId:  A number to identify the polygon
/// - Returns: The matched `MNMapPolygon` instance.
- (nullable MNMapPolygon *)mapPolygonWithPolygonId:(NSInteger)PolygonId;

/***************************************************************************/

/// Returns a list of all MapPoylgons associated with the current property
- (nonnull NSArray<MNMapPolygon *> *)mapPolygons;

/***************************************************************************/

/// Returns the style of the polygon for the specified 'polygonId'
/// - Parameter polygonId: A number identifying the map polygon
- (nullable MNPolygonStyle *)polygonStyleWithPolygonId:(NSInteger)PolygonId;

/***************************************************************************/

/// Returns a list of mercators associated with the current property's boundary
- (nonnull NSArray<MNMercator *> *)propertyBoundary;

/***************************************************************************/

/// Returns the centre mercator associated with the current property's boundary
- (nonnull MNMercator *)propertyBoundaryCentroid;

/***************************************************************************/

@end


#endif /* MNPropertyPolygons_h */
