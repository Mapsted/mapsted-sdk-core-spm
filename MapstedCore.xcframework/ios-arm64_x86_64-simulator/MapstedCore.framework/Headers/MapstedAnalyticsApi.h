//
//  MapstedAnalyticsApi.h
//  positioning
//
//  Created by Mapsted on 2019-09-25.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MapstedAnalyticsApi_h
#define MapstedAnalyticsApi_h

#import <Foundation/Foundation.h>

@class MNAnalyticsBundle;
@class MapstedWaypoint;

@protocol Searchable;

// Views
typedef NS_ENUM(NSInteger, MapstedMarketingEventType) {
    UNKNOWN_EVENT = 0,
    POP_UP = 10,
    PUSH_NOTIFICATION = 20,
    FEED = 30,
};

// Clicks
typedef NS_ENUM(NSInteger, MapstedMarketingInteractionType) {
    UNKNOWN_INTERACTION = 0,
    NOT_DISPLAYED = 10, // event was triggered but not displayed to user
    DISMISSED = 20,
    CLICK_VIEW_DETAILS = 30,
    CLICK_VIEW_ROUTE_PREVIEW = 40, //Request Route
    CLICK_VIEW_MAP = 50,
    CLICK_VIEW_WEBSITE = 60,
    CLICK_VIEW_FEED = 70,
    LIKE = 80,
    SHARE = 90,
    VIEW_NO_ACTION = 100,
};

// Actions on map
typedef NS_ENUM(NSInteger, MapstedMapAnalyticsActionType) {
    UNKNOWN_ACTION_TYPE = 0,
    SELECTED = 10,
    EDIT = 20,
    ADD_TO_ITINERARY = 40,
    NAVIGATE = 60,
    DESELECTED = 80,
    PLACE_TAG = 100,
};

@interface MapstedAnalyticsApi : NSObject
+ (MapstedAnalyticsApi *)shared;
- (void)updateScreen:(NSString *)currentScreen;
- (void)updateScreen:(NSString *) currentScreen bundleContent: (MNAnalyticsBundle *) bundleContent;
- (void)addSearchEvent:(NSString *)searchBarId searchString:(NSString *)searchString selectedString:(NSString *)selectedString bundle:(MNAnalyticsBundle *)bundleContent;
- (void)addMarketingAnalyticsEvent:(MapstedMarketingEventType)eventType feedUID:(NSString *)feedUID  interactionType:(MapstedMarketingInteractionType)interactionType;
- (void)addMapAnalyticsEvent:(MapstedMapAnalyticsActionType)eventType waypoint: (id<Searchable>)waypoint;
@end

#endif /* MapstedAnalyticsApi_h */
