//
//  EnumSensorType.h
//  positioning
//
//  Created by Daniel on 2022-01-06.
//  Copyright © 2022 Mapsted. All rights reserved.
//

#ifndef EnumSensorType_h
#define EnumSensorType_h
/// Represents the type of sensors
typedef NS_ENUM(NSInteger, EnumSensorType) {
	ACCELEROMETER   = 1,
	GYROSCOPE       = 2,
	MAGNETOMETER    = 3,
	BAROMETER       = 4,
	GRAVITY         = 5,
};

#endif /* EnumSensorType_h */
