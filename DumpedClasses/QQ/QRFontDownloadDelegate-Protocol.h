//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol QRFontDownloadDelegate <NSObject>
- (void)fontDownloadProcessWithFontID:(NSString *)arg1 withProcess:(double)arg2 andUserInfo:(NSDictionary *)arg3;
- (void)fontDownloadFailedWithFontID:(NSString *)arg1 withFontURL:(NSString *)arg2 andUserInfo:(NSDictionary *)arg3;
- (void)fontDownloadSuccessWithFontID:(NSString *)arg1 withFontURL:(NSString *)arg2 andUserInfo:(NSDictionary *)arg3;
@end
