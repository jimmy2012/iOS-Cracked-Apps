//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVAudioPlayerDelegate.h"
#import "TBStoryMusicListViewDelegate.h"
#import "TBStoryMusicOperationDelegate.h"
#import "TBStoryWebViewControllerDelegate.h"

@class NSArray, NSString, NSTimer, QQHttpClientSession, QQRichTinyVideoClips, TBStoryMusicListView, TBStoryMusicModel, TBStoryMusicOperationView, UIViewController;

@interface TBStoryMusicView : UIView <TBStoryMusicListViewDelegate, TBStoryMusicOperationDelegate, TBStoryWebViewControllerDelegate, AVAudioPlayerDelegate>
{
    TBStoryMusicOperationView *_musicOperationView;
    TBStoryMusicListView *_musicListView;
    UIView *_blankView;
    UIView *_confirmView;
    _Bool isCancel;
    QQHttpClientSession *_session;
    float _videoDuration;
    float _videoPlayRate;
    NSArray *_dataList;
    QQRichTinyVideoClips *_videoInfo;
    TBStoryMusicModel *_musicModel;
    id <TBStoryMusicViewPlayDelegate> _playDelegate;
    id <TBStoryMusicViewShowDelegate> _showDelegate;
    unsigned long long _mediaType;
    UIViewController *_modelSuperViewController;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIViewController *modelSuperViewController; // @synthesize modelSuperViewController=_modelSuperViewController;
@property(nonatomic) float videoPlayRate; // @synthesize videoPlayRate=_videoPlayRate;
@property(nonatomic) float videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <TBStoryMusicViewShowDelegate> showDelegate; // @synthesize showDelegate=_showDelegate;
@property(nonatomic) __weak id <TBStoryMusicViewPlayDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
@property(retain, nonatomic) TBStoryMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(retain, nonatomic) QQRichTinyVideoClips *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)clickCancel:(id)arg1;
- (void)clickOK:(id)arg1;
- (void)updateMusicIcon:(unsigned long long)arg1;
- (void)setVideoMute:(_Bool)arg1;
- (void)videoStartPlay;
- (void)videoStopPlay;
- (void)audioStartPlay;
- (void)audioStopPlay;
- (void)storyMusicTryToConnectNetwork:(id)arg1 Type:(_Bool)arg2;
- (void)TBStoryWebViewDismiss;
- (void)storyDidEndDragging:(float)arg1 offset:(struct CGPoint)arg2;
- (void)storySeek:(float)arg1 offset:(struct CGPoint)arg2;
- (double)getVideoDuration:(id)arg1;
- (id)showTime:(long long)arg1;
- (void)storyModelDelete;
- (void)setVideoOriginalSound;
- (void)setVideoMusicMute;
- (void)stopPlay;
- (void)dealloc;
- (void)setMusicTabTitle:(id)arg1;
- (void)initAudioPlay:(id)arg1;
- (void)dataSourceUpdateCancelPlay;
- (void)downloadMusic:(id)arg1 web:(_Bool)arg2;
- (void)recommendMusic:(long long)arg1;
- (void)didSelectMusic:(id)arg1;
- (void)dismissMusicWebview;
- (void)selectMusic;
- (void)ItemSelect:(long long)arg1 cellType:(unsigned long long)arg2;
- (void)reloadData:(_Bool)arg1;
- (void)tapBlankView:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

