//
//  MNTextStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNTextStyle_h
#define MNTextStyle_h

@class MNColour;
@class MNMercator;

@interface MNTextStyle : NSObject

@property (readonly) NSInteger layerIdx;
@property (readonly) float textSize;
@property (readonly, nullable) MNColour *textColour;
@property (readonly, nullable) MNMercator *textLocation;

- (nonnull id)initWithTextColour:(nullable MNColour *)colour textSize:(float)textSize textLocation:(nullable MNMercator *)textLocation layerIdx:(NSInteger)layerIdx;

@end


#endif /* MNTextStyle_h */
