//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FAMobileLiveContinueSendGiftProgressView, NSTimer, UIButton, UIImageView, UILabel;

@interface FAMobileLiveContinueSendGiftView : UIView
{
    float _animationDuration;
    CDUnknownBlockType _sendStarBlock;
    CDUnknownBlockType _progressEndBlock;
    UIButton *_sendBtn;
    FAMobileLiveContinueSendGiftProgressView *_progressView;
    NSTimer *_progressTimer;
    UILabel *_giftCountLab;
    UIImageView *_giftImageView;
    UIView *_heartBeatAnimationView1;
    UIView *_heartBeatAnimationView2;
}

@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIView *heartBeatAnimationView2; // @synthesize heartBeatAnimationView2=_heartBeatAnimationView2;
@property(retain, nonatomic) UIView *heartBeatAnimationView1; // @synthesize heartBeatAnimationView1=_heartBeatAnimationView1;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UILabel *giftCountLab; // @synthesize giftCountLab=_giftCountLab;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) FAMobileLiveContinueSendGiftProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(copy, nonatomic) CDUnknownBlockType progressEndBlock; // @synthesize progressEndBlock=_progressEndBlock;
@property(copy, nonatomic) CDUnknownBlockType sendStarBlock; // @synthesize sendStarBlock=_sendStarBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopHearBeatAnimation;
- (void)configHearBeat2AnimationWithDuration:(double)arg1 zoomInOutValues:(id)arg2 zoomInOutKeyTimes:(id)arg3 opacityValues:(id)arg4 opacityKeyTimes:(id)arg5;
- (void)configHearBeat1AnimationWithDuration:(double)arg1 zoomInOutValues:(id)arg2 zoomInOutKeyTimes:(id)arg3 opacityValues:(id)arg4 opacityKeyTimes:(id)arg5;
- (void)doHeatBeatView2Animation;
- (void)doHeartBeatAnimation;
- (void)didBecomeForeground;
- (void)updateViewWithGiftImage:(id)arg1 giftNum:(long long)arg2;
- (void)updateViewWithGiftImageUrlStr:(id)arg1 giftNum:(long long)arg2;
- (float)roundFloat:(float)arg1;
- (void)updateGiftCount:(long long)arg1;
- (void)restartTimer;
- (void)endProgress;
- (void)sendBtnClick:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 animationDuration:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

