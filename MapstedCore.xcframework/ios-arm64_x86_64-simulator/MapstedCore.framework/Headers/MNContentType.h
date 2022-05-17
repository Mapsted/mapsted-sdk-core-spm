//
//  MNContentType.h
//  positioning
//
//  Created by Mapsted on 2019-09-24.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNContentType_h
#define MNContentType_h


/// Represents type of marketing content (Geofence, trigger, event, etc)
typedef NS_ENUM(NSInteger, MNContentType) {
    MNContentTypeUnknown = 0,
    MNContentTypeGeofence = 100,
    MNContentTypeTrigger = 200,
    MNContentTypeEvent = 300
};

#endif /* MNContentType_h */
