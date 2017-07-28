//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WatchHomePageParentViewController.h"

#import "KGTableViewDelegate.h"
#import "KGTextRollViewDelegate.h"
#import "MVViewCommentChangeDeleagate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "WatchHomeActivityBookBtnDelegate.h"
#import "WatchHomeAllSectionCellDelegate.h"
#import "WatchHomeSingerAdCellDelegate.h"
#import "WatchHomeTableFallCellDelegate.h"

@class FollowSingerVM, KGDefaultNetErrorView, KGTableView, KGThemeView, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NeeFileCache, RefreshControl, WatchHomeActivityView;

@interface WatchHomeRecommendViewController : WatchHomePageParentViewController <KGTableViewDelegate, UITableViewDataSource, RefreshControlDelegate, KGTextRollViewDelegate, WatchHomeTableFallCellDelegate, WatchHomeActivityBookBtnDelegate, WatchHomeAllSectionCellDelegate, MVViewCommentChangeDeleagate, WatchHomeSingerAdCellDelegate>
{
    long long _adIndex;
    _Bool _isAdScrollingHorizontal;
    _Bool _needToResetAdPosition;
    _Bool _isLoading;
    _Bool _isLoadingAd;
    _Bool _sendAMPOnce;
    _Bool _isRequestingAll;
    _Bool _isLoadingSingerAd;
    _Bool _isNoMoreData;
    _Bool _isWantToFollowSinger;
    int _mainMode;
    double _topViewHeight;
    KGTableView *_fallTableView;
    KGThemeView *_themeBgView;
    RefreshControl *_refreshControl;
    NSMutableArray *_adListArray;
    WatchHomeActivityView *_adactivityView;
    KGDefaultNetErrorView *_errorView;
    NSTimer *_adChangeTimer;
    NSTimer *_fxSongRequestTimer;
    NSDate *_requestDataTime;
    NSDate *_backTime;
    NSDate *_reqestSongDataTime;
    NSDate *_backSongTime;
    NSMutableDictionary *_typeToTabTitlesMap;
    NSMutableDictionary *_sectionisLoadingDic;
    NSMutableArray *_sectionArray;
    long long _pageIndexAll;
    NSMutableDictionary *_pageIndexDic;
    NSMutableArray *_singerAdModelList;
    long long _pageIndexSingerAd;
    long long _uniqueId;
    FollowSingerVM *_followSingerVM;
    NeeFileCache *_singerAdFileCache;
}

@property(nonatomic) _Bool isWantToFollowSinger; // @synthesize isWantToFollowSinger=_isWantToFollowSinger;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(retain, nonatomic) NeeFileCache *singerAdFileCache; // @synthesize singerAdFileCache=_singerAdFileCache;
@property(retain, nonatomic) FollowSingerVM *followSingerVM; // @synthesize followSingerVM=_followSingerVM;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long pageIndexSingerAd; // @synthesize pageIndexSingerAd=_pageIndexSingerAd;
@property(nonatomic) _Bool isLoadingSingerAd; // @synthesize isLoadingSingerAd=_isLoadingSingerAd;
@property(retain, nonatomic) NSMutableArray *singerAdModelList; // @synthesize singerAdModelList=_singerAdModelList;
@property(retain, nonatomic) NSMutableDictionary *pageIndexDic; // @synthesize pageIndexDic=_pageIndexDic;
@property(nonatomic) long long pageIndexAll; // @synthesize pageIndexAll=_pageIndexAll;
@property(nonatomic) _Bool isRequestingAll; // @synthesize isRequestingAll=_isRequestingAll;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) NSMutableDictionary *sectionisLoadingDic; // @synthesize sectionisLoadingDic=_sectionisLoadingDic;
@property(retain, nonatomic) NSMutableDictionary *typeToTabTitlesMap; // @synthesize typeToTabTitlesMap=_typeToTabTitlesMap;
@property(nonatomic) _Bool sendAMPOnce; // @synthesize sendAMPOnce=_sendAMPOnce;
@property(nonatomic) int mainMode; // @synthesize mainMode=_mainMode;
@property(nonatomic) _Bool isLoadingAd; // @synthesize isLoadingAd=_isLoadingAd;
@property(retain, nonatomic) NSDate *backSongTime; // @synthesize backSongTime=_backSongTime;
@property(retain, nonatomic) NSDate *reqestSongDataTime; // @synthesize reqestSongDataTime=_reqestSongDataTime;
@property(retain, nonatomic) NSDate *backTime; // @synthesize backTime=_backTime;
@property(retain, nonatomic) NSDate *requestDataTime; // @synthesize requestDataTime=_requestDataTime;
@property(retain, nonatomic) NSTimer *fxSongRequestTimer; // @synthesize fxSongRequestTimer=_fxSongRequestTimer;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSTimer *adChangeTimer; // @synthesize adChangeTimer=_adChangeTimer;
@property(nonatomic) _Bool needToResetAdPosition; // @synthesize needToResetAdPosition=_needToResetAdPosition;
@property(nonatomic) _Bool isAdScrollingHorizontal; // @synthesize isAdScrollingHorizontal=_isAdScrollingHorizontal;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) WatchHomeActivityView *adactivityView; // @synthesize adactivityView=_adactivityView;
@property(retain, nonatomic) NSMutableArray *adListArray; // @synthesize adListArray=_adListArray;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGThemeView *themeBgView; // @synthesize themeBgView=_themeBgView;
@property(retain, nonatomic) KGTableView *fallTableView; // @synthesize fallTableView=_fallTableView;
- (void)setTopViewHeight:(double)arg1;
- (double)topViewHeight;
- (void).cxx_destruct;
- (void)sendIntoLiveRoomEvent;
- (void)jumpToUserLoginViewController;
- (void)reloadTableRowWithUniqueId:(long long)arg1;
- (void)unFollowSinger:(long long)arg1 AndUniqueId:(long long)arg2;
- (void)WatchHomeSingerAdCellonCoverImageClickWithUniqueId:(id)arg1;
- (void)WatchHomeSingerAdCellonFollowBtnClickWithUniqueId:(id)arg1;
- (void)WatchHomeSingerAdCellonCloseBtnClick:(id)arg1;
- (void)changeCommentsNumWithMvHash:(id)arg1 AndCommentsNum:(long long)arg2;
- (void)actionLiveInfoCache;
- (void)refreshFinished;
- (void)sendBIWithA:(int)arg1 b:(id)arg2 r:(id)arg3 fo:(id)arg4 ft:(id)arg5 fs:(id)arg6 sh:(id)arg7 other:(id)arg8;
- (void)setPageIndex:(long long)arg1 andUniqueId:(long long)arg2;
- (long long)getPageIndexWithUniqueId:(long long)arg1;
- (id)getExidsWithUniqueId:(long long)arg1;
- (id)getSingerAdInfoModelWithUniqueId:(long long)arg1;
- (void)checkComment:(long long)arg1;
- (void)checkFollowInfo:(long long)arg1;
- (void)requestSingerAd;
- (void)requestMVWithUniqueId:(long long)arg1 andTagId:(long long)arg2 andIsTop:(_Bool)arg3;
- (void)requestShortVideoWithUniqueId:(long long)arg1 andTagId:(long long)arg2 andIsTop:(_Bool)arg3;
- (void)requestRecommendPrammeWithUniqueId:(long long)arg1 andIsTop:(_Bool)arg2;
- (void)requestLiveClassifyWithUniqueId:(long long)arg1 andTagId:(long long)arg2 andIsTop:(_Bool)arg3;
- (void)requestRecommendFxWithUniqueId:(long long)arg1 andIsTop:(_Bool)arg2;
- (id)getRecommendInfoModelWithUniqueId:(long long)arg1;
- (long long)getIndexOfModelInfoWithUniqueId:(long long)arg1;
- (void)requestRecommendHotWithUniqueId:(long long)arg1 andIsTop:(_Bool)arg2;
- (void)requestAllDataFailedWithError:(id)arg1;
- (void)requestAllDataSuccessedWithData:(id)arg1 isCache:(_Bool)arg2;
- (void)requestAllContentWithLoading:(_Bool)arg1;
- (void)watchHomeAllSectionCell:(id)arg1 moreBtnDidClicked:(id)arg2;
- (void)watchHomeAllSectionCell:(id)arg1 changeBtnDidClicked:(id)arg2;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)openH5Page:(id)arg1;
- (void)WatchHomeTableFallCellClick:(id)arg1 section:(long long)arg2;
- (id)createSingerAdView:(id)arg1;
- (id)createSectionCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textRollViewDidStopRunning:(id)arg1;
- (void)textRollViewDidPauseRunning:(id)arg1;
- (void)goToUnicomHtml;
- (void)switchToInnerPage:(id)arg1;
- (id)jiexi:(id)arg1 webaddress:(id)arg2;
- (void)didPressActivity:(id)arg1;
- (void)WatchHomeActivityBookBtnlick;
- (void)showErrorViewWithNoData;
- (void)interruptAdScrolling;
- (void)stopTimer;
- (_Bool)shouldAdAutoScrollOnHorizontal:(id)arg1;
- (void)changeAd;
- (void)startTimer;
- (void)startToShowAd;
- (void)kg_retryButtonClick:(id)arg1;
- (void)fillAdContent;
- (void)requestSingingSongData;
- (void)sendAPMWithError:(id)arg1;
- (void)kgFetchDataFinished:(id)arg1;
- (void)autoRefreshTop;
- (void)checkNeedRequestDataWhenBackToPage;
- (void)updateSingerAdFileWithDic:(id)arg1;
- (id)getDicFromSingerAdFile;
- (id)fanxingDataArray;
- (void)followActionNotification:(id)arg1;
- (void)getCacheData;
- (void)retryFxSongRequest;
- (void)requsetFxSongFromOtherWay;
- (void)stopFxSongTimer;
- (void)startFxSongTimer;
- (void)logoutHandler;
- (void)loginHandler;
- (void)MainModeChange:(id)arg1;
- (void)OnBecomeActive:(id)arg1;
- (void)OnEnterBack:(id)arg1;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewDidInitialize;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)addNotification;
- (void)initView;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)playManualPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
