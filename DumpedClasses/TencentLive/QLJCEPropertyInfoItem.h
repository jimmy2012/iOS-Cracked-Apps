//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEPropertyInfoItem : JceObjectV2
{
    int jcev2_p_0_r_iPropertyType;
    NSString *jcev2_p_1_r_strPropertyName;
    long long jcev2_p_2_r_ldPropertyCount;
    NSString *jcev2_p_3_o_strPropertyActivity;
    NSString *jcev2_p_4_o_strPropertyUrl;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strPropertyUrl, setter=setJce_strPropertyUrl:) NSString *jcev2_p_4_o_strPropertyUrl; // @synthesize jcev2_p_4_o_strPropertyUrl;
@property(retain, nonatomic, getter=jce_strPropertyActivity, setter=setJce_strPropertyActivity:) NSString *jcev2_p_3_o_strPropertyActivity; // @synthesize jcev2_p_3_o_strPropertyActivity;
@property(nonatomic, getter=jce_ldPropertyCount, setter=setJce_ldPropertyCount:) long long jcev2_p_2_r_ldPropertyCount; // @synthesize jcev2_p_2_r_ldPropertyCount;
@property(retain, nonatomic, getter=jce_strPropertyName, setter=setJce_strPropertyName:) NSString *jcev2_p_1_r_strPropertyName; // @synthesize jcev2_p_1_r_strPropertyName;
@property(nonatomic, getter=jce_iPropertyType, setter=setJce_iPropertyType:) int jcev2_p_0_r_iPropertyType; // @synthesize jcev2_p_0_r_iPropertyType;
- (void).cxx_destruct;
- (id)init;

@end
