//
//  RFRateMe.h
//  RFRateMeDemo
//
//  Created by Ricardo Funk on 1/2/14.
//  Copyright (c) 2014 Ricardo Funk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RFRateMe : NSObject

+ (void)showRateAlertForAppStoreUrl:(NSString *)appStoreUrl;
+ (void)showRateAlertForAppStoreUrl:(NSString *)appStoreUrl afterTimesOpened:(int)times;
+ (void)showRateAlertForAppStoreUrl:(NSString *)appStoreUrl afterDays:(int)times;

@end
