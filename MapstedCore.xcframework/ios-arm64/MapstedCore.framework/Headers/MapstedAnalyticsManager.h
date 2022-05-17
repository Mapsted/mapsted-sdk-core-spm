//
//  MapstedAnalyticsManager.h
//  positioning
//
//  Created by Mapsted on 2019-09-26.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MapstedAnalyticsManager_h
#define MapstedAnalyticsManager_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AnalyticsType){
    eAnalytics = 1,
    eAnalyticsSession,
    eMobileAnalytics,
    eDataCapture
};

@interface MapstedAnalyticsManager : NSObject
+ (id)shared;
- (void)saveAnalyticsData:(NSData *)data propertyId:(NSInteger)propertyId type:(NSInteger)type;
- (void)postAnalysticsData;
@end

#endif
