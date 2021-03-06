//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, TADMediaLog, TADVideoAdPreloader;

@interface TADNonClickPicAdManager : NSObject
{
    _Bool _dp3Reported;
    NSMutableDictionary *_videoInfo;
    NSMutableDictionary *_userInfo;
    NSString *_adid;
    NSString *_duration;
    NSString *_soid;
    NSString *_mediaId;
    TADMediaLog *_mediaLog;
    NSString *_requestId;
    TADVideoAdPreloader *_preloader;
    NSMutableDictionary *_picAdMap;
}

@property(retain, nonatomic) NSMutableDictionary *picAdMap; // @synthesize picAdMap=_picAdMap;
@property(retain, nonatomic) TADVideoAdPreloader *preloader; // @synthesize preloader=_preloader;
@property(nonatomic) _Bool dp3Reported; // @synthesize dp3Reported=_dp3Reported;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) TADMediaLog *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *soid; // @synthesize soid=_soid;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)videoPlayFinished;
- (void)doExposurePing:(id)arg1;
- (id)getNonClickPicAdWithAdType:(long long)arg1;
- (void)loadAdWithVideoInfo:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

