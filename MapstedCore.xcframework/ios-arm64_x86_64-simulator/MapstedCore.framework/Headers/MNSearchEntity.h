//
//  MNSearchEntity.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNSearchEntity_h
#define MNSearchEntity_h
#import "Searchable.h"

typedef NS_ENUM(NSInteger, MNDataType);

@class MNMercator;
@class MNZoneLabel;
@class MNEntityZone;
@class MapstedSearchEntity;
@class CMSEntityInfo;

/// Represents a search entity
@interface MNSearchEntity : NSObject<Searchable>

/***************************************************************************/

/// Represents the type of data (Building, property, etc)
@property (readonly) MNDataType dataType;

/***************************************************************************/

/// Represents the text to show as subtitle of searched keywords
@property (nullable) NSString *searchkeyword;

/// Represents the text to show as subtitle of searched keywords
@property (nullable) MNZoneLabel *searchZoneLabel;

@property (nullable) MNEntityZone *searchEntityZone;



- (nullable CMSEntityInfo *) getCMSEntity;

- (void) setCMSEntity: (nullable CMSEntityInfo *) entityInfo;


/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'searchEntityId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter searchEntityId:  A number identifying the search entity
/// - Returns: The new `MNSearchEntity` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId searchEntityId:(NSInteger)searchEntityId;

/***************************************************************************/

/// Creates an instance with the specified 'buildingId' and 'searchEntityId' values.
///
/// - Parameter buildingId:  A number identifying the property
/// - Parameter searchEntityId:  A number identifying the search entity
/// - Returns: The new `MNSearchEntity` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId searchEntityId:(NSInteger)searchEntityId;


- (nullable MapstedSearchEntity *) searchEntity;
/**
 * Returns a list of entity zones, which enables identification of nearby landmarks
 * @return list of entity zones
 */
- (nullable NSArray<MNEntityZone *> *)entityZones;

/***************************************************************************/
/// A number identifying the search entity
- (NSInteger)searchEntityId;

/// Represents the type of data (Building, property, etc)
- (MNDataType)dataType;

/***************************************************************************/

/// Returns the centroid for a given entity
///
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The centroid of a matching entity as mercator.

- (nonnull MNMercator *)getCentroid:(NSInteger)entityId;

/***************************************************************************/

/// Returns an array collectionn of all zone labels relevant to the search entity

- (nullable NSArray<MNZoneLabel *> *)zoneLabels;

/***************************************************************************/

- (nullable MNSearchEntity* )uniqueSearchEntityClone:(NSInteger)entityId;

@end

#endif /* MNSearchEntity_h */
