//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMADMoreSDKDeepLink : NSObject
{
}

+ (void)reportADMoreModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)reportIfNeeded;
+ (void)addReportURL:(id)arg1;
+ (_Bool)handleURL:(id)arg1;
+ (void)unRegisterReachabilityManagerListener;
+ (void)registerReachabilityManagerListener;
+ (void)load;

@end
