//
//  MNMapPoint.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMapPoint_h
#define MNMapPoint_h

typedef NS_ENUM(NSInteger, MNDataType);
@class MNMercator;
@class MNPointStyle;


/// Represents a point on the map
@interface MNMapPoint : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'pointId' values.
///
/// - Parameter propertyId:  A number specifying the property
/// - Parameter pointId:  A number specifying thhe point
/// - Returns: The new `MNMapPoint` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId pointId:(NSInteger)pointId;

/***************************************************************************/

/// Creates an instance with the specified 'buildingId', 'floorId' and 'pointId' values.
///
/// - Parameter buildingId:  A number specifying the building
/// - Parameter floorId:  A number specifying the floor
/// - Parameter pointId:  A number specifying the point

/// - Returns: The new `MNMapPoint` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId floorId:(NSInteger)floorId pointId:(NSInteger)pointId;

/***************************************************************************/

/// A number specifyinng the property
- (NSInteger)propertyId;

/// A number specifying the building
- (NSInteger)buildingId;

/// A number specifying the floor
- (NSInteger)floorId;

/// A number specifying the point
- (NSInteger)pointId;

/// A number specifying the entity
- (NSInteger)entityId;

/// The type of data which the map represents (Building, Property, etc.)
- (MNDataType)dataType;

/// The mercator coordinates of the point
- (nonnull MNMercator *)point;

/// The style to use in drawing the point (Specifying the icon, text, etc)
- (nullable MNPointStyle *)pointStyle;

/***************************************************************************/

@end

#endif /* MNMapPoint_h */
