//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCEInteractionInfo : JceObjectV2
{
    int jcev2_p_7_o_transValue;
    NSString *jcev2_p_0_o_type;
    NSString *jcev2_p_1_o_id;
    NSString *jcev2_p_2_o_title;
    NSString *jcev2_p_3_o_desc;
    NSString *jcev2_p_4_o_pic;
    QLJCEAction *jcev2_p_5_o_action;
    NSString *jcev2_p_8_o_feedBorderColor;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_feedBorderColor, setter=setJce_feedBorderColor:) NSString *jcev2_p_8_o_feedBorderColor; // @synthesize jcev2_p_8_o_feedBorderColor;
@property(nonatomic, getter=jce_transValue, setter=setJce_transValue:) int jcev2_p_7_o_transValue; // @synthesize jcev2_p_7_o_transValue;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_5_o_action; // @synthesize jcev2_p_5_o_action;
@property(retain, nonatomic, getter=jce_pic, setter=setJce_pic:) NSString *jcev2_p_4_o_pic; // @synthesize jcev2_p_4_o_pic;
@property(retain, nonatomic, getter=jce_desc, setter=setJce_desc:) NSString *jcev2_p_3_o_desc; // @synthesize jcev2_p_3_o_desc;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_2_o_title; // @synthesize jcev2_p_2_o_title;
@property(retain, nonatomic, getter=jce_id, setter=setJce_id:) NSString *jcev2_p_1_o_id; // @synthesize jcev2_p_1_o_id;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_0_o_type; // @synthesize jcev2_p_0_o_type;
- (void).cxx_destruct;
- (id)init;

@end
