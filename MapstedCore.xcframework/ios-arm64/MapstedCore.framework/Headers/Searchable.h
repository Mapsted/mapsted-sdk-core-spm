//
//  Searchable.h
//  positioning
//
//  Created by Mapsted on 2019-08-20.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef Searchable_h
#define Searchable_h

#import <Foundation/Foundation.h>

@class MNMercator;
@class MNMercatorZone;
@class MNEntityZone;

/// Represents a blueprint for searchable objects. The fields correspond to possible search filters
@protocol Searchable <NSObject>

- (NSInteger)propertyId;
- (NSInteger)buildingId;

- (NSString *)name;
- (NSString *)categoryName;

- (MNMercator *)location;

- (NSSet<NSString *> *) categoryTags;
- (NSString *)categoryUid;
- (NSSet<NSString *> *) categoryTagUids;
- (NSArray<MNMercatorZone *> *)locations;

- (NSString *)matchWord;

- (BOOL)isSearchEntity;



- (NSInteger)floorId;
- (NSArray<MNEntityZone *> *)entityZones;
- (NSInteger)identifier;
- (NSString*)idString;

@end

#endif

