//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KQGroupInfoBean : NSObject
{
    int _groupid;
    int _manager_top_limit;
    int _status;
    int _grade;
    int _experience;
    int _experience_top_limit;
    int _active;
    int _active_top_limit;
    int _today_exp_limit;
    int _all_count;
    int _online_count;
    int _member_status;
    NSString *_name;
    NSString *_img;
    NSString *_active_level;
    long long _djOnline;
    long long _djPlayStatus;
    long long _guestSwitch;
    long long _radioLiveStatus;
    long long _isVipGroup;
    unsigned long long _singBeansCount;
}

@property(nonatomic) unsigned long long singBeansCount; // @synthesize singBeansCount=_singBeansCount;
@property(nonatomic) long long isVipGroup; // @synthesize isVipGroup=_isVipGroup;
@property(nonatomic) long long radioLiveStatus; // @synthesize radioLiveStatus=_radioLiveStatus;
@property(nonatomic) long long guestSwitch; // @synthesize guestSwitch=_guestSwitch;
@property(nonatomic) long long djPlayStatus; // @synthesize djPlayStatus=_djPlayStatus;
@property(nonatomic) long long djOnline; // @synthesize djOnline=_djOnline;
@property(nonatomic) int member_status; // @synthesize member_status=_member_status;
@property(nonatomic) int online_count; // @synthesize online_count=_online_count;
@property(nonatomic) int all_count; // @synthesize all_count=_all_count;
@property(nonatomic) int today_exp_limit; // @synthesize today_exp_limit=_today_exp_limit;
@property(nonatomic) int active_top_limit; // @synthesize active_top_limit=_active_top_limit;
@property(nonatomic) int active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *active_level; // @synthesize active_level=_active_level;
@property(nonatomic) int experience_top_limit; // @synthesize experience_top_limit=_experience_top_limit;
@property(nonatomic) int experience; // @synthesize experience=_experience;
@property(nonatomic) int grade; // @synthesize grade=_grade;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int manager_top_limit; // @synthesize manager_top_limit=_manager_top_limit;
@property(nonatomic) int groupid; // @synthesize groupid=_groupid;
- (void).cxx_destruct;

@end

