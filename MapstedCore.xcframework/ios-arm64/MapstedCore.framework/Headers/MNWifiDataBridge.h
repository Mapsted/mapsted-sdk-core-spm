//
//  MNWifiDataBridge.h
//  
//
//  Created by Tianyun Shan on 4/7/17.
//
//

#ifndef MNWifiDataBridge_h
#define MNWifiDataBridge_h

/***************************************************************************/

/// Represents a data bridge for wifi
@interface MNWifiDataBridge : NSObject


/***************************************************************************/

/// The base service identifier
@property (readonly) NSString *bssid;

/// The service identifier
@property (readonly) NSString *ssid;

/// The mean received signal strength
@property (readonly) double rssMean;

/***************************************************************************/

/// Creates an instance with the specified 'bssid', 'ssid' and 'rssMean' values.
///
/// - Parameter bssid:  The base service identifier
/// - Parameter ssid:  The service identifier
/// - Parameter rssMean:  The mean value of received signal strength
/// - Returns: The new `MNWifiDataBridge` instance.

- (id)initWithBssid:(NSString *)bssid ssid:(NSString *)ssid rss:(double)rssMean;

/***************************************************************************/

@end


#endif /* MNWifiDataBridge_h */
