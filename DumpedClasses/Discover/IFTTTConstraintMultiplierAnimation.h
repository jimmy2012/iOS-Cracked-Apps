//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTAnimation.h"

#import "IFTTTAnimatable.h"

@class NSLayoutConstraint, NSString, UIView;

@interface IFTTTConstraintMultiplierAnimation : IFTTTAnimation <IFTTTAnimatable>
{
    UIView *_superview;
    NSLayoutConstraint *_constraint;
    UIView *_referenceView;
    unsigned long long _attribute;
    double _constant;
}

+ (id)animationWithSuperview:(id)arg1 constraint:(id)arg2 attribute:(unsigned long long)arg3 referenceView:(id)arg4 constant:(double)arg5;
+ (id)animationWithSuperview:(id)arg1 constraint:(id)arg2 attribute:(unsigned long long)arg3 referenceView:(id)arg4;
@property(nonatomic) double constant; // @synthesize constant=_constant;
@property(nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(retain, nonatomic) NSLayoutConstraint *constraint; // @synthesize constraint=_constraint;
@property(retain, nonatomic) UIView *superview; // @synthesize superview=_superview;
- (void).cxx_destruct;
- (void)animate:(double)arg1;
- (void)addKeyframeForTime:(double)arg1 multiplier:(double)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)addKeyframeForTime:(double)arg1 multiplier:(double)arg2;
- (id)initWithSuperview:(id)arg1 constraint:(id)arg2 attribute:(unsigned long long)arg3 referenceView:(id)arg4 constant:(double)arg5;
- (id)initWithSuperview:(id)arg1 constraint:(id)arg2 attribute:(unsigned long long)arg3 referenceView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

