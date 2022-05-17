//
//  MNPropertyPolylines.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertyPolylines_h
#define MNPropertyPolylines_h

@class MNMapPolyline;

/// Represents Polylines associated with a property

@interface MNPropertyPolylines : NSObject


/***************************************************************************/

/// Creates an instance for the specified 'propertyId'
///
/// - Parameter propertyId:  A number identifying the property
/// - Returns: The new `MNPropertyPolylines` instance.

- (id)initWithPropertyId:(NSInteger)propertyId;

/***************************************************************************/

/// Returns a polyline matching the specified polylineId
///
/// - Parameter polylineId:  A number identifying the polyline
/// - Returns: The new `MNMapPolyline` instance matching the specified 'polylineId'.

- (MNMapPolyline *)polylineWithPolylineId:(NSInteger)polylineId;

/***************************************************************************/

/// Returns an array collection of all Map polyline objects associated with the property

- (NSArray<MNMapPolyline *> *)polylines;

/***************************************************************************/

@end


#endif /* MNPropertyPolylines_h */

