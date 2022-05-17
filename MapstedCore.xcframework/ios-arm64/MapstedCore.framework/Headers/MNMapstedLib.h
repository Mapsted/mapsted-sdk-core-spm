//
//  NSObject+MNMapstedLib.h
//  nav
//
//  Created by Tianyun Shan on 2017-01-17.
//  Copyright © 2017 Maspted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Searchable.h"
//#import "MNSwiftImport.h"
@class MNGPSLoc;
@class MNUserPosition;
@class MNWifiDataBridge;
@class MNBleDataBridge;
@class MNPropertyInfo;
@class MNRouteRequest;
@class MNMapstedRoutingRequestback;
@class MNObjcUnitUtils;
@class MNMercator;
@class MNSDKPermissions;
@class MNLatLng;
@class MNParsedPropertyListAndCategoryResponse;
@class MNParsedBuildingDataResponse;
@class MNParsedPropertyDataResponse;
@class MNParsedContentResponse;
@class MNPosition;
@class MNRouteDistanceTime;
@class MNSearchEntity;
@class MNRouteOptions;
@class MNCategoryTree;
@class MNMapstedLibCppProperties;
@class AnalyticsSessionInfo;
@class MNTag;
@class MNMercatorZone;
@class MNZone;
@class MNAnalyticsBundle;

typedef NS_ENUM(NSInteger, MapstedMarketingEventType);

typedef NS_ENUM(NSInteger, MNLanguageType);

typedef NS_ENUM(NSInteger, MapstedMarketingInteractionType);

typedef NS_ENUM(NSInteger, MapstedMapAnalyticsActionType);

typedef NS_ENUM(NSInteger, EnumSdkMode);

/// A library of useful properties and functions available in the API of the Mapsted SDK
@interface MNMapstedLib : NSObject

/***************************************************************************/

/// Returns the shared MNMapstedLib singleton instance.
+ (nonnull instancetype)sharedInstance;

/***************************************************************************/

	//MARK: - SETUP
///returns the sdk mode
- (EnumSdkMode)getSdkMode;

/// Performs various functions to set up the MNMapstedLib for use.
- (void)setup:(MNLanguageType)languageType calibrationMode:(BOOL)calibrationMode;

/***************************************************************************/

/// Enables or disables an indicator to be shown when the app makes use of continuous background location updates
/// - Parameter 'enable':  If true, the background indicator will be shown.
///
/// NOTES: Only applies to apps withh "Always" authorization. Those with "WhenInUse" authoriization will always see the indicator.

- (void)enableBackgroundIndicator:(BOOL)enable;

/***************************************************************************/
	//MARK: - DATA / SENSORS
/// Adds sensor data of type 'type' with the specified 'values' and the specified 'accuracy'
///
/// - Parameter 'type':  The type of sensor data
/// - Parameter 'values':  The sensor data values to add.
/// - accuracy: the level of accuracy of the sensor data

- (void)addSensorData:(int)type values:(nonnull NSArray *)values accuracy:(int)accuracy;

- (nonnull NSArray <NSString*> *) getMissingSensors;

/***************************************************************************/

/// Adds wifi data with a collection of wifi Data Vectors
///
/// - Parameter 'wifiDataVector':  A collection of 'MNWifiDataBridge' objects

- (void)addWifiData:(nonnull NSArray<MNWifiDataBridge *> *)wifiDataVector;

/***************************************************************************/

/// Adds Cellular GPS data from a the specified 'loc'
///
/// - Parameter 'loc':  A location with latitude and longitude

- (void)addGpsCellularData:(nonnull MNGPSLoc *)loc;
- (void)addGpsCellularData:(nonnull MNGPSLoc *)loc floorNumber:(nullable NSNumber *)floorNumber;

/***************************************************************************/

/// Adds BLE data from a collection of 'beacons'
///
/// - Parameter 'beacons':  A collection MNBleDataBridge objects

- (void)addBleData:(nonnull NSArray<MNBleDataBridge *> *)beacons;

/***************************************************************************/

/// Function to handle state changes in wifi connectivity.
///
/// - Parameter 'connected':  Indicates whether the wifi is connected
/// - Parameter 'bssid': The basic service identifier representing the access point
/// - Parameter 'ssid': The service identifier of the network

- (void)onWifiConnectivityStateChange:(BOOL)connected bssid:(nonnull NSString *)bssid ssid:(nonnull NSString *)ssid;

/***************************************************************************/

/// Function to deserialize property infos from the serialized data.
///
/// - Parameter 'data':  The serialized data from which PropertyInfos are to be deserialized.
///
/// - Returns: A parsed version of the serialized data.

- (nonnull NSDictionary *)deserializePropertyInfosResponseSync:(nonnull NSData *)data;

/***************************************************************************/

/// - Returns true if Property info was deserizalied and the data contains at least one item.
- (BOOL)deserializePropertyInfosSync;

/***************************************************************************/


/// Function to return a list of all available property infos.
///
/// - Returns: A list of property info objects.

- (nonnull NSArray<MNPropertyInfo *> *)getPropertyInfos;

/***************************************************************************/


/// Function to deserialize property data from the serialized version.
///
/// - Parameter 'data':  The serialized form of marketing data to be deserialized.
///
/// - Returns: A parsed version of the serialized  data.

- (nullable MNParsedPropertyDataResponse *)deserializePropertyDataResponseSync:(nonnull NSData *)data;

/***************************************************************************/

/// Function to deserialize property data for the specified property Id.
///
/// - Parameter 'propertyId':  The identifier of the property whose data is to be deserialized.
///
/// - Returns: A parsed version of the serialized property data.

- (BOOL)deserializePropertyDataSync:(NSInteger)propertyId;

/***************************************************************************/

/// Function to unload property data corresponding to the specified 'propertyId'.
///
/// - Parameter 'propertyId':  The identifier of the property whose data will be unloaded

- (void)unloadPropertyData:(NSInteger)propertyId;

/***************************************************************************/

/// Function to deserialize building data from the serialized version.
///
/// - Parameter 'data':  The serialized data from which building data is to be deserialized.
///
/// - Returns: A parsed version of the serialized building data.

- (nullable MNParsedBuildingDataResponse *)deserializeBuildingDataResponseSync:(nonnull NSData *)data;

/***************************************************************************/

/// Function to deserialize data and fetch corresponding images for a building specified with a 'buildingId'
///
/// - Parameter 'buildingId':  The identifier of the building whohse data is to be deserialized.
///
/// - Returns: true if successfully deserialized.

- (BOOL)deserializeBuildingDataSync:(NSInteger)buildingId;

/***************************************************************************/

/// Function to unload building data for the specified 'buildingId'.
///
/// - Parameter 'buildingId':  The identifier of the building whose data will be unloaded

- (void)unloadBuildingData:(NSInteger)buildingId;

/***************************************************************************/

/// - Returns : the encrypted position of the user, nil if none available

- (nullable MNPosition *)getEncryptedPosition;

/***************************************************************************/

/// - Returns : the gps location of the user
- (nullable MNGPSLoc *)getGpsLocation;


- (void)onSelectedCurrentLocation:(nonnull MNMercatorZone*)location;

/***************************************************************************/

/// Function to create a route request based on properties specified by 'routeRequest'
///
/// - Parameter 'routeRequest':  An object representing route locations and options.

- (void)requestRoute:(nonnull MNRouteRequest *)routeRequest;

/***************************************************************************/

/// Starts navigation based on a route request
- (void)startNavigation;

/***************************************************************************/

/// Stops navigation that was started previously based on a route request.
- (void)stopNavigation;

/***************************************************************************/

/// Function to get an estimated distance time for a route with options 'routeOptions' towards an entity within a building
///
/// - Parameter 'searchEntity':  The entity towards which the routing will be requested.
/// - Parameter 'routeOptions': Options for the routing
/// - Parameter 'buildingId': The building containing the entity searched for.
///
/// - Returns: an estimated distance time for a route, nil if invalid

- (nullable MNRouteDistanceTime *)requestDistanceTimeEstimate:(nonnull MNSearchEntity *)searchEntity routeOptions:(nonnull MNRouteOptions *)routeOptions;

- (nullable MNRouteDistanceTime *)requestDistanceTimeEstimate:(nonnull MNSearchEntity *)start destination:(nonnull MNSearchEntity *)destination routeOptions:(nonnull MNRouteOptions *)routeOptions;


/***************************************************************************/

// Bluetoothx
/// TODO: Pending Documentation
- (void)onBleAdHocDataReady:(nonnull NSString *)bssid txPower:(NSInteger)txPower rxPower:(NSInteger)rxPower data:(nonnull NSData *)data;

/***************************************************************************/

// Analytics
/// TODO: Pending Documentation
- (void)setAnalyticsConfiguration:(nonnull NSData *)data;

/***************************************************************************/

// MARK:- Assisted Positioning

- (void)onZoneChangeConfirmation:(nonnull MNZone *)zone expired:(BOOL)expired;
- (nonnull NSArray *)getSelectNearbyEntityList:(int)buildingId;
- (void)setZoneChangeConfirmation:(nonnull MNZone *)zone expired:(BOOL)expired;
- (void)setSelectedFloorEvent:(NSInteger)floorId;
- (void)setSelectedNearbyEntity:(NSInteger)propertyId buildingId:(NSInteger)buildingId floorId:(NSInteger)floorId entity:(NSInteger)entityId;

/***************************************************************************/

// Called to resume Bluetooth Low-Energy services if required.

- (void)resumeBleIfNeeded;

/***************************************************************************/

/// - Returns: the permissions associated with the available license
- (nullable MNSDKPermissions *)getSDKPermissions;

/***************************************************************************/

/// - Returns: the licensing information for maps
- (nullable NSString *)getMapLicence;

/***************************************************************************/

/// - Returns: the license ID
- (nullable NSString *)getLicenceId;

/***************************************************************************/

/// Function to get the distance between two locations that are specified with a locator
///
/// - Parameter 'm1':  The first location
/// - Parameter 'm2': The second location
///
/// - Returns: the distance between the two specified locations

- (double)getDistance:(nonnull MNMercator *)m1 pos2:(nonnull MNMercator *)m2;

/***************************************************************************/

/// Function to get the distance between two locations that are specified with a latitude and longitude combination
///
/// - Parameter 'm1':  The first location with latitude and longitude values
/// - Parameter 'm2': The second location with latitude and longitude values
///
/// - Returns: the distance between the two specified locations

- (double)getDistance:(nonnull MNLatLng *)l1 loc2:(nonnull MNLatLng *)l2;

/***************************************************************************/

/// Function to get tcurrent timestamp
///
/// - Returns: the current timestamp in milliseconds.

- (double)getTimestampMs;

/***************************************************************************/

// Pauses when application goes to background to save battery
- (void)pause;

/***************************************************************************/

///Called to resume activites when application returns to foreground
- (void)resume;

- (nonnull NSString *)getClibVersion;
/***************************************************************************/

/// Function to find custom region category matching a 'buildingId' and 'entityId'
///
/// - Parameter 'buildingId':  The identifier of a building
/// - Parameter 'entityId': The second location with latitude and longitude values
///
/// - Returns: a number identifying the custom region category matching a building and entity.

- (NSInteger)findCustomRegionCategory:(NSInteger)buildingId entityId:(NSInteger)entityId;

/***************************************************************************/

- (void)setAnalyticsSessionInfo:(nonnull AnalyticsSessionInfo *)sessionInfo;

- (void)setAnalyticsLoginEmail:(nonnull NSString*) loginEmail;

- (BOOL)startCalibration:(nonnull MNTag *)position;

- (void)stopCalibration;

- (void)clearCalibrationMode;

-(void)processData;

- (void)setGroundTruth:(nonnull NSArray<MNPosition *> *) groundTruths;

- (void)addDescription:(nonnull NSString *)description;

- (nullable MNZone* )findPropertyAndBuilding:(nonnull MNMercator*)point;

// Analytics interface

- (void)updateScreen:( NSString * _Nonnull )currentScreen;
- (void)updateScreen:(NSString * _Nonnull) currentScreen bundleContent: ( MNAnalyticsBundle * _Nonnull) bundleContent;
- (void)addSearchEvent:(NSString * _Nonnull)searchBarId searchString:(NSString * _Nonnull)searchString selectedString:(NSString * _Nonnull)selectedString bundle:( MNAnalyticsBundle * _Nonnull)bundleContent;
- (void)addMarketingAnalyticsEvent:(MapstedMarketingEventType)eventType feedUID:(NSString * _Nonnull)feedUID  interactionType:(MapstedMarketingInteractionType)interactionType;
-(void)addMapAnalyticsEvent:(MapstedMapAnalyticsActionType)eventType waypoint:( id<Searchable> _Nonnull)waypoint;


// CMS Alerts
- (void) addAlert: (nonnull NSString *) json;
- (void) deleteAlert: (int)propertyId alertId: (nonnull NSString *)alertId;
- (void) deleteAlerts: (int)propertyId;

-(nullable NSSet<NSNumber *>*) getCachedPropertyIds;
- (BOOL)isPoint:(nonnull MNMercator*)point inPolygon:(nonnull NSArray<MNMercator *>*) polygon;
- (double)getDistanceFromPoint:(nonnull MNMercator*)point toPolygon:(nonnull NSArray<MNMercator *>*) polygon;
@end
