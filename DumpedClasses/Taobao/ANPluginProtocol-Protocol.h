//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANError, ANRequest, ANResponse, NSDictionary;

@protocol ANPluginProtocol <NSObject>
- (ANError *)parseError:(id)arg1;
- (ANResponse *)parseResponse:(id)arg1 withRequest:(ANRequest *)arg2;
- (void)parseRequest:(ANRequest *)arg1;

@optional
- (void)parseConfig:(NSDictionary *)arg1;
@end
