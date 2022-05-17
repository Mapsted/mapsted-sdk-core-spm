//
//  MNEvent.h
//  positioning
//
//  Created by Mapsted on 2019-09-27.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNEvent_h
#define MNEvent_h

typedef NS_ENUM(NSInteger, MNEventType);

@interface MNEvent: NSObject

@property (readonly) MNEventType eventType;
@property (readonly, nonnull) NSString *eventUid;
@property (readonly, nonnull) NSArray<NSString *> *feedUids;

- (nullable id)initWithEventType:(MNEventType)eventType eventUid:(nonnull NSString *)eventUid feedUids:(nonnull NSArray<NSString *> *)feedUids;

@end

#endif /* MNEvent_h */
