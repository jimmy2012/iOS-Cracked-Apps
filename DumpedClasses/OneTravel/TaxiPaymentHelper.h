//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TaxiPaymentHelper : NSObject
{
}

+ (_Bool)isQuickPayForSelectChannel:(long long)arg1 configModel:(id)arg2;
+ (id)sChannelModelFromTaxiChannelModel:(id)arg1 configModel:(id)arg2;
+ (id)sBalanceChannel:(id)arg1;
+ (id)couponDescForCouponType:(unsigned long long)arg1 payModel:(id)arg2;
+ (unsigned long long)couponType:(id)arg1;
+ (id)dcqUseUrlWithDCQLink:(id)arg1 channelID:(long long)arg2;
+ (id)sConfigTitle;
+ (id)sConfigCustomPayButtonTitle:(id)arg1;
+ (id)sPayBillModelFromTaxiConfigModel:(id)arg1;
+ (id)payConfigFromTaxiConfigModel:(id)arg1;
+ (id)sPayChannelsFromTaxiConfigModel:(id)arg1 withSelectedChannel:(unsigned long long)arg2;
+ (long long)taxiChannel:(unsigned long long)arg1;
+ (unsigned long long)sPayChannel:(long long)arg1;

@end
