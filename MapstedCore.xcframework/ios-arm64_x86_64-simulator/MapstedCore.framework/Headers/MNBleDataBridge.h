//
//  MNBleDataBridge.h
//  nav
//
//  Created by Tianyun Shan on 2017-04-18.
//  Copyright © 2017 Maspted. All rights reserved.
//

#ifndef MNBleDataBridge_h
#define MNBleDataBridge_h

/// Represents a data bridge for Bluetooth Low Energy
@interface MNBleDataBridge : NSObject


/***************************************************************************/

/// The service set access point dentifier
@property NSString *bssid;

/// The service set identifier
@property NSString *ssid;

/// Average received signal strength
@property double rssMean;

/// Unique identifier for beacons
@property NSString *proximityUUID;

/// Major identifier for groups of beacons
@property NSInteger major;

/// Minor identifier for groups of beacons with the same UUID and major
@property NSInteger minor;

/// Timestamp for when the data is captured.
@property long long timestamp;

/***************************************************************************/

/// Creates an instance with the specified 'ssid, ' and 'lng' values.
///
/// - Parameter bssid:  The basic service identifier
/// - Parameter ssid:  The service identifier
/// - Parameter rssMean:  The mean reeceived signal strength
/// - Parameter timestamp:  The timestamp
/// - Returns: The new `MNBleDataBridge` instance.

- (id)initWithBssid:(NSString *)bssid ssid:(NSString *)ssid rssMean:(double)rssMean timestamp:(long long)timestamp;

/***************************************************************************/

/// Creates an instance with the specified 'uuid', 'major', 'minor' and 'rssMean' values.
///
/// - Parameter uuid:  The unique identifier for beacons
/// - Parameter major:  The major identifier for groups of beacons
/// - Parameter minor:  The minor identifier for groups of beacons with the same UUID and major
/// - Parameter rssMean:  The mean reeceived signal strength
/// - Returns: The new `MNBleDataBridge` instance.

- (id)initWithProximityUUID: (NSString *)uuid major:(NSInteger)major minor:(NSInteger)minor rssMean:(double)rssMean;


/***************************************************************************/

/// Creates an instance with the specified 'bssid', 'ssid', 'rssMean', 'proximityUUID', 'major' and 'minor' values.
///
/// - Parameter bssid:  The basic service identifier
/// - Parameter ssid:  The service identifier
/// - Parameter rssMean:  The mean reeceived signal strength
/// - Parameter proximityUUID:  Theunique identifier for beacons
/// - Parameter major:  The major identifier for groups of beacons
/// - Parameter minor:  The minor identifier for groups of beacons with the same UUID and major
/// - Returns: The new `MNBleDataBridge` instance.


- (id)initWithBssid:(NSString *)bssid ssid:(NSString *)ssid rssMean:(double)rssMean proximityUUID:(NSString *)uuid major:(NSInteger)major minor:(NSInteger)minor;

/***************************************************************************/

@end


#endif /* MNBleDataBridge_h */
