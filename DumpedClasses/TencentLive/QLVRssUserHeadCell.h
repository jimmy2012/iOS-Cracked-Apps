//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLImageLoadDelegate.h"

@class NSString, QLJCEONAVRSSHeadPoster, QLSBlurEffectImageView, QLSImageView, UIButton, UILabel;

@interface QLVRssUserHeadCell : QLBaseTabelViewCell <QLImageLoadDelegate>
{
    _Bool _isErrorPage;
    UILabel *_titleLbl;
    UILabel *_countLbl;
    UILabel *_descLbl;
    UIButton *_descLblBtn;
    UIButton *_goBtn;
    UIButton *_bookBtn;
    QLSImageView *_headView;
    QLSBlurEffectImageView *_headerBgView;
    unsigned long long _bookCount;
    unsigned long long _videoCount;
    unsigned long long _coverCount;
    unsigned long long _playCount;
    NSString *_introText;
    QLJCEONAVRSSHeadPoster *_poster;
}

+ (double)heightForPoster:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) QLJCEONAVRSSHeadPoster *poster; // @synthesize poster=_poster;
@property(nonatomic) _Bool isErrorPage; // @synthesize isErrorPage=_isErrorPage;
@property(retain, nonatomic) NSString *introText; // @synthesize introText=_introText;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long coverCount; // @synthesize coverCount=_coverCount;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long bookCount; // @synthesize bookCount=_bookCount;
@property(retain, nonatomic) QLSBlurEffectImageView *headerBgView; // @synthesize headerBgView=_headerBgView;
@property(retain, nonatomic) QLSImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIButton *bookBtn; // @synthesize bookBtn=_bookBtn;
@property(retain, nonatomic) UIButton *goBtn; // @synthesize goBtn=_goBtn;
@property(retain, nonatomic) UIButton *descLblBtn; // @synthesize descLblBtn=_descLblBtn;
@property(retain, nonatomic) UILabel *descLbl; // @synthesize descLbl=_descLbl;
@property(retain, nonatomic) UILabel *countLbl; // @synthesize countLbl=_countLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)vRssSubscribeEngineFireSubscribe:(id)arg1;
- (void)didTapBookBtn:(id)arg1;
- (void)didTapGesture;
- (void)didTapGoBtn:(id)arg1;
- (void)loadHeaderBgView;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
