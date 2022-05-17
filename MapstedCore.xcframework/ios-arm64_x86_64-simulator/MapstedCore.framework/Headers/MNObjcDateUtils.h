//
//  MNObjcDateUtils.h
//  nav
//
//  Created by Tianyun Shan on 2017-08-31.
//  Copyright © 2017 Maspted. All rights reserved.
//

#ifndef MNObjcDateUtils_h
#define MNObjcDateUtils_h

@interface MNObjcDateUtils: NSObject

+ (NSDate *)getDate:(NSString *)dateString formatString:(NSString *)formatString timeZone: (NSTimeZone *)timeZone;

@end


#endif /* MNObjcDateUtils_h */
