//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APScanViewConfig, NSDictionary, NSString;

@protocol APScanDelegate <NSObject>
- (void)didFind:(NSDictionary *)arg1;

@optional
- (void)onTabSelected:(APScanViewConfig *)arg1;
- (void)scanUserTrack:(NSString *)arg1 args:(NSDictionary *)arg2;
- (void)exitScan;
@end

