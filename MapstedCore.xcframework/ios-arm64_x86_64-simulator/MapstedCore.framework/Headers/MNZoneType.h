//
//  MNZoneType.h
//  positioning
//
//  Created by Tianyun Shan on 2019-01-04.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNZoneType_h
#define MNZoneType_h


/// Represents the type of zones (Property, Building, etc)
typedef NS_ENUM(NSInteger, MNZoneType) {
  MNZoneTypeNone,
  MNZoneTypeProperty = 1,
  MNZoneTypeBuilding = 2
};

#endif /* MNZoneType_h */
