//
//  MNPropertyData.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-19.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyData_h
#define MNPropertyData_h

@class MNMapPolygon;
@class MNPropertyEntities;
@class MNPropertyPolygons;
@class MNPropertyPolylines;
@class MNPropertyPoints;
@class MNLayerStyle;
@class MNPropertySearchFilters;
@class MNPropertySearchEntities;

@interface MNPropertyData : NSObject

/***************************************************************************/


/// Creates an instance of 'MNPropertyData' with the specified 'propertyId'.
///
/// - Parameter propertyId: A number identifying the property
/// - Returns: The new `MNMercator` instance.
- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/


/// An identifying number for the property
- (NSInteger)propertyId;

/***************************************************************************/

/// - Returns: A list of all property entities
- (nullable MNPropertyEntities *)entities;

/// - Returns: A list of all polygons in the geometry of a property.
- (nullable MNPropertyPolygons *)polygons;

/// - Returns: A list of all polylines in the geometry of a property.
- (nullable MNPropertyPolylines *)polylines;

/// - Returns: A list of all points in the geometry of a property.
- (nullable MNPropertyPoints *)points;

/// - Returns: A list of all layer styles
- (nonnull NSArray<MNLayerStyle *> *)layerStyles;

/// - Returns: A list of all search entities.
- (nullable MNPropertySearchEntities *)searchEntities;

/// - Returns a list of property search filters
- (nonnull MNPropertySearchFilters *)propertySearchFilters;


/***************************************************************************/

/// Checks whether a point is inside the geometry of the property.
///
/// - Parameter pt:  The point whose location inside the property is to be checked.
/// - Returns: True if the point is located inside. False otherwise.
- (BOOL) isPointInsideProperty:(nonnull MNMercator *)pt;

/***************************************************************************/

/// Returns a list of local building identifiers near a specified 'pt' location.
///
/// - Parameter pt:  A point specified by an MNMercator point
/// - Returns: All available building ids near the specified pt
- (nonnull NSSet<NSNumber *> *) getLocalBuildingIds:(nonnull MNMercator *)pt;

/***************************************************************************/

/// Returns the the property boundary as a polygon
- (nullable MNMapPolygon *)boundingPolygon;

@end

#endif /* MNPropertyData_h */
