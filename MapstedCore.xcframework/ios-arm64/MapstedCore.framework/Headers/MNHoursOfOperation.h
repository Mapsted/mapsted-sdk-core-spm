//
//  MNHoursOfOperation.h
//  positioning
//
//  Created by Mapsted on 2019-03-01.
//  Copyright © 2019 Maspted. All rights reserved.
//

#ifndef MNHoursOfOperation_h
#define MNHoursOfOperation_h


@class MNDailyBusinessHour;

/***************************************************************************/

/// Represents the daily hours of operation

@interface MNHoursOfOperation : NSObject

/***************************************************************************/

/// A collection of the hours of operation for each day;

@property NSArray<MNDailyBusinessHour *> *daysOfOperation;


/***************************************************************************/

/// Creates an instance with 'daysOfOperation'
///
/// - Parameter daysOfOperation:  A collection of the daily business hours
/// - Returns: A new `MNDailyBusinessHour` instance with its daily hours of operation.

- (id)initWithArray:(NSArray<MNDailyBusinessHour *> *)daysOfOperation;

@end


#endif /* MNHoursOfOperation_h */
