//
//  ALBannerViewDelegate.h
//  Pods
//
//  Created by Peter Grates on 4/22/15.
//
//

#import <Foundation/Foundation.h>
#import "AMProvider.h"

@class AMBannerView;

@protocol AMBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(AMBannerView *)bannerView didReceiveBannerWithNetwork:(NSString *)networkName;
- (void)bannerViewFailedToLoadBanner:(AMBannerView *)bannerView error:(NSError *)error;
- (void)bannerView:(AMBannerView *)bannerView didTapBannerViewWithNetwork:(NSString *)networkName;

@end
