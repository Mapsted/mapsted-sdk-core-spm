//
//  MNPolygonHighlight.h
//  positioning
//
//  Created by Tianyun Shan on 2018-05-28.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPolygonHighlight_h
#define MNPolygonHighlight_h

@class MNMercatorBoundary;

@interface MNPolygonHighlight : NSObject

@property (readonly) MNMercatorBoundary * primary;
@property (readonly) NSArray<MNMercatorBoundary *>* secondary;

- (id)initWithMercatorBoundary:(MNMercatorBoundary *)primary secondary: (NSArray<MNMercatorBoundary *> *)secondary;

@end


#endif /* MNPolygonHighlight_h */
