//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMassBlessBaseViewController.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQLateralPagingViewDataSource.h"
#import "QQLateralPagingViewDelegate.h"
#import "QQRichViewPlayerDelegte.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSMutableArray, NSString, QQLateralPagingView, QQMassBlessSendPTVModule, QQPageControl, QQRichVideoPlayer, UIButton, UIImageView, UILabel, UIView;

@interface QQMassBlessModeSelectViewController : QQMassBlessBaseViewController <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate, QQLateralPagingViewDelegate, QQLateralPagingViewDataSource, UIViewControllerTransitioningDelegate>
{
    double _intervalScale;
    long long _pageNum;
    long long _currentPage;
    UIImageView *_bannerImageView;
    UIView *_mainPanel;
    UILabel *_friendLabel;
    QQLateralPagingView *_pagingView;
    QQPageControl *_pageControl;
    UIButton *_textButton;
    UIButton *_ptvButton;
    NSMutableArray *_friendInfoList;
    NSMutableArray *_selectedFriendViews;
    UIView *_mask;
    _Bool _needDisplayPtv;
    UIView *_ptvGuideMask1;
    UIView *_ptvGuideMask2;
    UIImageView *_ptvGuideImg;
    UIImageView *_wordingImageView;
    QQMassBlessSendPTVModule *_sendPtvModule;
    int _ssoSeq;
    UIView *_videoView;
    _Bool _firstPlay;
    UIView *_videoMask;
    UIButton *_videoCloseBtn;
    QQRichVideoPlayer *_videoPlayer;
}

@property(readonly, nonatomic) QQMassBlessSendPTVModule *sendPtvModule; // @synthesize sendPtvModule=_sendPtvModule;
@property(readonly, nonatomic) UIView *mask; // @synthesize mask=_mask;
- (void)onAudioSessionDeactive;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)setAudioSessionPlayback;
- (void)onPlayerWillStartPlay:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayer:(id)arg1 timeChange:(CDStruct_1b6d18a9)arg2;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)willEnterForeground;
- (void)onAVChatWindowShow;
- (void)initStartVideo;
- (void)initVideoMask;
- (void)closeVideo;
- (void)handleStartVideo;
- (void)handleTap:(id)arg1;
- (void)pagingView:(id)arg1 didScrollToPageAtIndex:(long long)arg2;
- (id)pagingView:(id)arg1 viewForPageAtIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)show:(int)arg1;
- (void)ptvButtonClicked:(id)arg1;
- (void)textButtonClicked:(id)arg1;
- (void)initButtons;
- (void)initWording;
- (void)initBanner;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (id)initWithFriendInfoList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

