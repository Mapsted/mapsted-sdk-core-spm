//
//  MNPropertyInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-19.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyInfo_h
#define MNPropertyInfo_h

@class MNBuildingInfo;
@class MNMercator;
@class MNHoursOfOperation;


/// An interface to represent a Property.

@interface MNPropertyInfo : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'propertyId'.
///
/// - Parameter propertyId:  A number identifying the property
/// - Returns: The new `Property` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId;


/***************************************************************************/
/// Unique identifying number for a Property.
- (NSInteger)propertyId;

/// Name of the Property.
- (nonnull NSString *)defaultName;

/// A combination of latitude and longitude to represent a property's location.
- (nonnull MNMercator *)centroid;

/// North east point of a property's location
- (nonnull MNMercator *)northEastMostPoint;

/// South west of a property's location
- (nonnull MNMercator *)southWestMostPoint;

/// TODO: Ask what this is
- (double)mapToReal;

///// TODO: Ask what this is
//- (double)fileSize;

/// A collection of building information objects
- (nonnull NSArray<MNBuildingInfo *> *)buildingInfos;

///// Very rough boundary defined by min/max latitude/longitude
//- (nonnull NSArray<MNMercator *>*)looseBoundary;

/***************************************************************************/

- (int) getPropertyDataMaxVersion;

- (int) getValidationType;

//- (bool) isDisplayMultipleBuildings;

- (int) defaultBuildingId;
@end


#endif /* MNPropertyInfo_h */
