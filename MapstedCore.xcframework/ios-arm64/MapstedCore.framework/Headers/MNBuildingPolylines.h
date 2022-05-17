//
//  MNBuildingPolylines.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingPolylines_h
#define MNBuildingPolylines_h

/// Represents Polylines associated with a building
@interface MNBuildingPolylines : NSObject


/***************************************************************************/

/// Creates an instance for the specified 'buildingId'
///
/// - Parameter buildingId:  A number identifying the buliding
/// - Returns: The new `MNBuildingPolylines` instance.

- (id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

@end


#endif /* MNBuildingPolylines_h */
