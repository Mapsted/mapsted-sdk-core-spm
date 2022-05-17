//
//  MNLineStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNLineStyle_h
#define MNLineStyle_h

@class MNColour;

@interface MNLineStyle : NSObject

@property (readonly) NSInteger layerIdx;
@property (readonly) float lineWidth;
@property (readonly, nullable) MNColour *lineColour;

- (nonnull id)initWithLineColour:(nullable MNColour *)colour layerIdx:(NSInteger)layerIdx lineWidth:(float)lineWidth;

@end

#endif /* MNLineStyle_h */
