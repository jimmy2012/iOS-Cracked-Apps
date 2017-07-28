//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, TuSDKTween;

@interface TuSDKTSAnimation : NSObject
{
    NSTimer *_timer;
    double _current;
    TuSDKTween *_tween;
    double _interval;
    double _duration;
    CDUnknownBlockType _block;
}

+ (id)animWithDuration:(double)arg1 tween:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)animWithDuration:(double)arg1 block:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)destory;
- (void)stop;
- (void)animateWithTimer;
- (void)start;
@property(retain, nonatomic) TuSDKTween *tween; // @synthesize tween=_tween;
- (id)init;

@end
