//
//  MNSDKPermissions.h
//  positioning
//
//  Created by Tianyun Shan on 2018-06-29.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNSDKPermissions_h
#define MNSDKPermissions_h


/// Represents the status of software usage licenses.
typedef NS_ENUM(NSInteger, MNLicenceStatus) {
  MNLicenceStatusVerified = 0,
  MNLicenceStatusAwaitingVerification = 1,
  MNLicenceStatusErrInvalid = 2,
  MNLicenceStatusErrExpired = 3,
  MNLicenceStatusErrSyncRequired = 4,
  MNLicenceStatusErrInsufficientInfo = 5,
  MNLicenceStatusErrIncorrectFormat = 6,
  MNLicenceStatusErrIncorrectLicenceFile = 7
};

/***************************************************************************/


/// Represents the set of SDK usage permissions associated with the status of available license.
@interface MNSDKPermissions : NSObject

/***************************************************************************/

/**
 Creates an instance of the 'MNSDKPermissions class with the specified license status.
 
 - Parameter licenceStatus: The status of the usage license.
 - Returns: The new instance with the license status
 */

- (id _Nullable)initWithLicenceStatus:(MNLicenceStatus)licenceStatus;

/***************************************************************************/

/// Returns true if access to Positioning SDK is available with the current license
@property (readonly) bool positioning;

/// Returns true if access to Map SDK is available with the current license
@property (readonly) bool map;

/// Returns true if customizing map is allowed under the current license
@property (readonly) bool mapCustomization;

/// Returns true if routing is available with the current license
@property (readonly) bool routing;

/// Returns true if calibration is available with the current license
@property (readonly) bool calibration;

/// Returns true if this is a license provided for development purposes
@property (readonly) bool developer;

/// The license associated with the current set of SDK permissions.
@property (readonly) MNLicenceStatus licenceStatus;

/// Returns a descriptive string containing the errors encountered.
- (NSString * _Nullable) getError;

/***************************************************************************/

@end



#endif /* MNSDKPermissions_h */
