//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LongLinkService : NSObject
{
    NSString *_longLinkNotifyUserInfoKey;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *longLinkNotifyUserInfoKey; // @synthesize longLinkNotifyUserInfoKey=_longLinkNotifyUserInfoKey;
- (void).cxx_destruct;
- (id)longLinkNotifyWithAppId:(id)arg1;
- (void)initData;

@end
