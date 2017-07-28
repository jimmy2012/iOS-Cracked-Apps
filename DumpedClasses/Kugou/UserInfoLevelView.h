//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FXSGetUserInfo, KtvProgress, UIImageView, UILabel;

@interface UserInfoLevelView : UIView
{
    FXSGetUserInfo *_userInfo;
    KtvProgress *_treasureSlider;
    KtvProgress *_starSlider;
    UIImageView *_starLeftImageView;
    UIImageView *_starRightImageView;
    UIImageView *_treasureLeftImageView;
    UIImageView *_treasureRightImageView;
    UILabel *_treasureLbl;
    UILabel *_starLbl;
}

@property(retain, nonatomic) UILabel *starLbl; // @synthesize starLbl=_starLbl;
@property(retain, nonatomic) UILabel *treasureLbl; // @synthesize treasureLbl=_treasureLbl;
@property(retain, nonatomic) UIImageView *treasureRightImageView; // @synthesize treasureRightImageView=_treasureRightImageView;
@property(retain, nonatomic) UIImageView *treasureLeftImageView; // @synthesize treasureLeftImageView=_treasureLeftImageView;
@property(retain, nonatomic) UIImageView *starRightImageView; // @synthesize starRightImageView=_starRightImageView;
@property(retain, nonatomic) UIImageView *starLeftImageView; // @synthesize starLeftImageView=_starLeftImageView;
@property(retain, nonatomic) KtvProgress *starSlider; // @synthesize starSlider=_starSlider;
@property(retain, nonatomic) KtvProgress *treasureSlider; // @synthesize treasureSlider=_treasureSlider;
@property(retain, nonatomic) FXSGetUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
