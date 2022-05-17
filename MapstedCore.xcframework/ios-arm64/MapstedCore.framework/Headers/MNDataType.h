//
//  MNDataType.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNDataType_h
#define MNDataType_h


/// Represents data types (Property, Building, etc)
typedef NS_ENUM(NSInteger, MNDataType) {
  MNDataTypeUnknown = 0,
  MNDataTypeProperty = 1,
  MNDataTypeBuilding = 2,
  MNDataTypeTag = 3,
  MNDataTypeCategory = 4
};

#endif /* MNDataType_h */
