//
//  MNColour.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-21.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNColour_h
#define MNColour_h

@interface MNColour : NSObject

@property (readonly) UInt8 r;
@property (readonly) UInt8 g;
@property (readonly) UInt8 b;
@property (readonly) UInt8 a;

- (id)initWithR:(UInt8)r G:(UInt8)g B:(UInt8)b A:(UInt8)a;

@end


#endif /* MNColour_h */
