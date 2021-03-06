//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, RCTValueAnimatedNode;

@interface RCTAnimationDriverNode : NSObject
{
    NSArray *_frames;
    double _toValue;
    double _fromValue;
    double _delay;
    double _animationStartTime;
    double _animationCurrentTime;
    RCTValueAnimatedNode *_valueNode;
    CDUnknownBlockType _callback;
    _Bool _animationHasBegun;
    _Bool _animationHasFinished;
    NSNumber *_animationId;
    NSNumber *_outputValue;
}

@property(readonly, nonatomic) _Bool animationHasFinished; // @synthesize animationHasFinished=_animationHasFinished;
@property(readonly, nonatomic) _Bool animationHasBegun; // @synthesize animationHasBegun=_animationHasBegun;
@property(readonly, nonatomic) NSNumber *outputValue; // @synthesize outputValue=_outputValue;
@property(readonly, nonatomic) NSNumber *animationId; // @synthesize animationId=_animationId;
- (void).cxx_destruct;
- (void)cleanupAnimationUpdate;
- (void)updateOutputWithFrameOutput:(double)arg1;
- (void)stepAnimation;
- (void)removeAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (id)init;
- (id)initWithId:(id)arg1 delay:(double)arg2 toValue:(double)arg3 frames:(id)arg4 forNode:(id)arg5 callBack:(CDUnknownBlockType)arg6;

@end

