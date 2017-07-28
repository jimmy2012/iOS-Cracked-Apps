//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KGLiveGiftNumContentViewDelegate.h"

@class FXSKGLiveGiftInfo, KGLiveGiftNumContentView, KGThemeButton, KGThemeLabel, NSString, UIButton, UIImageView, UILabel;

@interface KGLiveGiftNumView : UIView <KGLiveGiftNumContentViewDelegate>
{
    int _defaultSelectNum;
    id <KGLiveGiftNumViewDelegate> _delegate;
    UIView *_contentView;
    NSString *_selectGiftUrl;
    UILabel *_coinNumLabel;
    UIButton *_backBtn;
    KGThemeButton *_chargeBtn;
    UIImageView *_coinImgView;
    UILabel *_accountLabel;
    KGThemeLabel *_toSendNameLabel;
    UIImageView *_giftImgView;
    UILabel *_giftAndNumLabel;
    UIButton *_sendBtn;
    UIImageView *_bottomCoinImgView;
    KGLiveGiftNumContentView *_giftNumContentView;
    UIButton *_cancelBtn;
    FXSKGLiveGiftInfo *_giftInfo;
}

@property(nonatomic) int defaultSelectNum; // @synthesize defaultSelectNum=_defaultSelectNum;
@property(copy, nonatomic) FXSKGLiveGiftInfo *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) KGLiveGiftNumContentView *giftNumContentView; // @synthesize giftNumContentView=_giftNumContentView;
@property(retain, nonatomic) UIImageView *bottomCoinImgView; // @synthesize bottomCoinImgView=_bottomCoinImgView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *giftAndNumLabel; // @synthesize giftAndNumLabel=_giftAndNumLabel;
@property(retain, nonatomic) UIImageView *giftImgView; // @synthesize giftImgView=_giftImgView;
@property(retain, nonatomic) KGThemeLabel *toSendNameLabel; // @synthesize toSendNameLabel=_toSendNameLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain, nonatomic) UIImageView *coinImgView; // @synthesize coinImgView=_coinImgView;
@property(retain, nonatomic) KGThemeButton *chargeBtn; // @synthesize chargeBtn=_chargeBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *coinNumLabel; // @synthesize coinNumLabel=_coinNumLabel;
@property(retain, nonatomic) NSString *selectGiftUrl; // @synthesize selectGiftUrl=_selectGiftUrl;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <KGLiveGiftNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectNum:(int)arg1;
- (void)setSelectGift:(id)arg1 withToSendName:(id)arg2 withSelectNum:(int)arg3;
- (void)setCoinNum:(id)arg1;
- (void)goToChargeVC;
- (void)sendGift;
- (void)back;
- (void)dismiss;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
