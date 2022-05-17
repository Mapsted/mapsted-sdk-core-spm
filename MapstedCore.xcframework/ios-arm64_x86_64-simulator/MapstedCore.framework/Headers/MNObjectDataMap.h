//
//  MNObjectDataMap.h
//  positioning
//
//  Created by Tianyun Shan on 2019-01-03.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNObjectDataMap_h
#define MNObjectDataMap_h


/// Represents an object data map
@interface MNObjectDataMap : NSObject


/***************************************************************************/

/// Creates an object data map instance from another 'dataMap'.
///
/// - Parameter dataMap:  The dataMap dictionary collection from which the new dataMap will be created
/// - Returns: The new `MNObjectDataMap` instance.
- (nonnull id)initWithDataMap:(nonnull NSDictionary<NSNumber *, NSData *> *)dataMap;

/***************************************************************************/

/// Returns the object data map as a dictionary of number-Data pairs.
- (nonnull NSDictionary<NSNumber *, NSData *> *)getDataMap;

@end


#endif /* MNObjectDataMap_h */
