//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMapBeaconJceObjectV2.h"

@class NSString;

@interface TMapBeaconWupIpSource : TMapBeaconJceObjectV2
{
    _Bool _jcev2_p_3_r_isTest;
    int _jcev2_p_1_r_port;
    int _jcev2_p_2_r_protocolType;
    NSString *_jcev2_p_0_o_ip;
}

+ (id)jceType;
@property(nonatomic, getter=jce_isTest, setter=setJce_isTest:) _Bool jcev2_p_3_r_isTest; // @synthesize jcev2_p_3_r_isTest=_jcev2_p_3_r_isTest;
@property(nonatomic, getter=jce_protocolType, setter=setJce_protocolType:) int jcev2_p_2_r_protocolType; // @synthesize jcev2_p_2_r_protocolType=_jcev2_p_2_r_protocolType;
@property(nonatomic, getter=jce_port, setter=setJce_port:) int jcev2_p_1_r_port; // @synthesize jcev2_p_1_r_port=_jcev2_p_1_r_port;
@property(retain, nonatomic, getter=jce_ip, setter=setJce_ip:) NSString *jcev2_p_0_o_ip; // @synthesize jcev2_p_0_o_ip=_jcev2_p_0_o_ip;
- (void).cxx_destruct;
- (id)init;

@end

