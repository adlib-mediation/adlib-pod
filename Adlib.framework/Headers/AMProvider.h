//
//  AMProvider.h
//  Adlib
//
//  Created by Peter Grates on 4/4/15.
//  Copyright (c) 2015 adlib. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AMNetworkConfiguration;
@class AMAdQuery;
@class AMDemographics;

@protocol AMProviderBannerAdapter;

typedef NS_ENUM(NSUInteger, AMProviderType) {
    AMProviderTypeAdlib = 0,
    AMProviderTypeInMobi = 1,
    AMProviderTypeAdMob = 2,
    AMProviderTypeGreystripe = 3,
    AMProviderTypeAppLovin = 4,
    AMProviderTypePhunware = 5,
    AMProviderTypeStartApp = 6
};
NSString *NSStringFromAMProviderType(AMProviderType providerType);
id<AMProviderBannerAdapter> AMAdProviderBannerAdapterFromAMProviderType(AMProviderType providerType);

typedef NS_ENUM(NSUInteger, AMProviderBannerType) {
    AMProviderBannerTypeBanner = 0,
    AMProviderBannerTypeVideo = 1,
    AMProviderBannerTypeBoth = 2
};
NSString *NSStringFromAMProviderBannerType(AMProviderBannerType bannerType);

AMProviderType AMProviderTypeForNetworkName(NSString *networkName);

@interface AMProvider : NSObject
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) AMProviderType type;
@property (nonatomic, readonly) AMProviderBannerType bannerType;

- (void)configure:(AMNetworkConfiguration *)networkConfiguration;
- (void)configureDemographics:(AMDemographics *)demographics;

- (id<AMProviderBannerAdapter>)bannerAdapterWithProvider;

- (BOOL)enabled;

@end
