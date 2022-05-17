//
//  MNRouteResponse.h
//  positioning
//
//  Created by Mapsted on 2019-04-09.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNRouteResponse_h
#define MNRouteResponse_h

#import <Foundation/Foundation.h>
#import "MNRoute.h"


typedef NS_ENUM(NSInteger, MNRouteErrorType) {
    MNUnknownError,
    MNNoError,
    MNInvalidStartPt,
    MNInvalidDestination,
    MNOutsideProperty,
    MNMiscellaneous,
    MNUnknownUserPositionWayfinding,
    MNUnknownUserPositionPositioning,
	MNAlertBlockingRoute
};

/***************************************************************************/

/// Represents the raw reponse for the route request
@interface MNRouteResponse : NSObject

/***************************************************************************/

/// Whether the routing was successful

@property (readonly) BOOL isSuccessful;

/// Errors encountered in processing the route request
@property (readonly, nonnull) NSString *error;
@property (readonly) MNRouteErrorType errorType;

/// Identifier for the property associated with the route request
@property (readonly) NSInteger propertyId;

/// A list of routes for the request
@property (readonly, nonnull) NSArray<MNRoute *> *routes;

	/// Alerts on the route
@property (readonly, nonnull) NSArray<NSString *> *alertIds;



/***************************************************************************/

/// Creates an instance of 'MNRouteResponse' with a specified 'error' string
///
/// - Parameter error:  The error encountered while processing the route request
/// - Returns: The new `MNRouteResponse` instance.

- (nonnull id)initWithError:(nonnull NSString *)error type:(MNRouteErrorType)errorType alertIds:(nonnull NSArray<NSString *> *) alertIds;

/***************************************************************************/

/// Creates an instance of 'MNRouteResponse' with a specified 'propertyId' and a list of 'routes'
///
/// - Parameter propertyId:  A number identifying the property associated with the route request
/// - Parameter routes: A list of routes matching the request
/// - Returns: The new `MNRouteResponse` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId routes:(nonnull NSArray<MNRoute *> *)routes alertIds:(nonnull NSArray<NSString *> *) alertIds;

/***************************************************************************/

@end

#endif //MNRouteResponse_h
