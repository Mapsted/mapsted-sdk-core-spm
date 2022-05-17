//
//  MNIconStyle.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNIconStyle_h
#define MNIconStyle_h

@class MNMercator;

@interface MNIconStyle : NSObject

@property (readonly) NSInteger layerIdx;
@property (readonly) NSString * _Nonnull imageId;
@property (readonly) float iconSize;
@property (readonly, nullable) MNMercator *iconLocation;

- (nonnull id)initWithLayerIdx:(NSInteger)layerIdx imageId:(NSString *_Nonnull)imageId iconSize:(float)iconSize iconLocation:(nullable MNMercator *)iconLocation;

@end


#endif /* MNIconStyle_h */
