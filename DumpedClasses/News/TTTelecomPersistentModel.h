//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTTelecomGetPhoneConditionDelegate.h"

@class NSString;

@interface TTTelecomPersistentModel : NSObject <TTTelecomGetPhoneConditionDelegate>
{
}

+ (void)getTelecomAuthMobile;
+ (id)telecomAuthPhone;
+ (void)setTelecomAuthPhone:(id)arg1;
+ (void)setGettingPhoneEnabled:(_Bool)arg1;
+ (_Bool)gettingPhoneEnabled;
+ (_Bool)needGettingPhone;
+ (void)setNeedGettingPhone:(_Bool)arg1;
+ (void)setForceToGetPhoneEnabledForValue:(_Bool)arg1;
+ (_Bool)forceToGetPhoneEnabled;
+ (void)setGettingPhoneDelay:(double)arg1;
+ (void)parseGettingPhoneConfigsFromSettings:(id)arg1;
- (void)telecomGetPhoneDidReceiveNotification:(id)arg1;
- (_Bool)meetRequirementOfService:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

