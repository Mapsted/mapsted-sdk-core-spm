//
//  MNDailyBusinessHour.h
//  positioning
//
//  Created by Mapsted on 2019-03-01.
//  Copyright © 2019 Maspted. All rights reserved.
//

#ifndef MNDailyBusinessHour_h
#define MNDailyBusinessHour_h

/***************************************************************************/

/// An enumeration representing each day of the week by number, starting with Sunday.

typedef NS_ENUM(NSInteger, MNDayOfWeek) {
  MNDayOfWeekSunday = 0,
  MNDayOfWeekMonday = 1,
  MNDayOfWeekTuesday = 2,
  MNDayOfWeekWednesday = 3,
  MNDayOfWeekThursday = 4,
  MNDayOfWeekFriday = 5,
  MNDayOfWeekSaturday = 6
};


/***************************************************************************/

/// Represents the daily hours of operation for a specified day of the week.

@interface MNDailyBusinessHour : NSObject

/***************************************************************************/

/// The day of the week
@property MNDayOfWeek dayOpens;

/// Time of opening
@property NSInteger hourOpens;
@property NSInteger minuteOpens;

/***************************************************************************/

/// True if open on thihs day of the week
@property Boolean open;

/***************************************************************************/

/// The day of the week
@property MNDayOfWeek dayCloses;

/// Time of closing
@property NSInteger hourCloses;
@property NSInteger minuteCloses;

@property Boolean allDay;

/***************************************************************************/

@end


#endif /* MNDailyBusinessHour_h */
