//
//  EnumSdkMode.h
//  positioning
//
//  Created by Daniel on 2022-01-07.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef EnumSdkMode_h
#define EnumSdkMode_h

	/// Represents the current mode of the SDK
typedef NS_ENUM(NSInteger, EnumSdkMode) {
	NAVIGATION      = 1,
	CALIBRATION     = 2,
	KIOSK           = 3, // Expects position to be fixed, will broadcast BLE
	DATA_CAPTURE    = 4, // Runs full positioning using data captured data
	SANDBOX         = 5,
};
#endif /* EnumSdkMode_h */
