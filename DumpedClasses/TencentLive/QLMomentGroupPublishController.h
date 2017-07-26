//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentTableViewController.h"

#import "MKHorizMenuDataSource.h"
#import "MKHorizMenuDelegate.h"
#import "P_QLDragToRefresh.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLMomentPersonPageNaviBarDelegate.h"
#import "QLMomentSuccessLabelProtocol.h"
#import "QLPageViewNavigatorDatasource.h"
#import "QLPageViewNavigatorDelegate.h"
#import "UIWXLoginViewButtonDelegate.h"

@class MKHorizMenu, NSError, NSMutableArray, NSMutableDictionary, NSString, QLMomentCoverCell, QLMomentPersonNaviBar, QLNewMessageLabel, QLPageViewNavigator, QLWXLoginShowPopView, UIImageView;

@interface QLMomentGroupPublishController : QLMomentTableViewController <QLPageViewNavigatorDelegate, QLPageViewNavigatorDatasource, MKHorizMenuDataSource, MKHorizMenuDelegate, QLMomentPersonPageNaviBarDelegate, P_QLDragToRefresh, QLMomentSuccessLabelProtocol, UIWXLoginViewButtonDelegate, QLJumpObjectOpenUrlDelegate>
{
    _Bool _canLoadMore;
    UIImageView *_imgHeadShadow;
    _Bool _hasMoreData;
    UIImageView *_imgHeadAnimate;
    double _prevCallOffset;
    _Bool _scrollingToTop;
    _Bool _hasNewFeedsOrMsg;
    _Bool _canLoadMoreHot;
    _Bool _hotCacheOnly;
    _Bool _hasSwitchedTab2Once;
    _Bool _isPresent;
    _Bool _isLogining;
    _Bool _isHorizMenuAtNaviBar;
    _Bool _topActivityShowned;
    _Bool _isRefreshed;
    unsigned char _errorFlag;
    unsigned char _emptyFlag;
    unsigned char _loadingFlag;
    NSMutableArray *_userDataArray;
    QLNewMessageLabel *_newMessageLabel;
    NSMutableArray *_hotDataArray;
    double _hotRefreshTime;
    NSMutableDictionary *_qlctg_selCache;
    QLPageViewNavigator *_pageNavi;
    QLMomentPersonNaviBar *_navigationBar;
    QLMomentCoverCell *_coverCell;
    MKHorizMenu *_horizMenu;
    QLWXLoginShowPopView *_wxLoginLable;
    NSMutableDictionary *_messageDic;
    NSError *_tableError1;
    NSError *_tableError2;
}

+ (_Bool)jumpToMomentView:(id)arg1 jumpMoment:(id)arg2;
+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) NSError *tableError2; // @synthesize tableError2=_tableError2;
@property(retain, nonatomic) NSError *tableError1; // @synthesize tableError1=_tableError1;
@property(nonatomic) unsigned char loadingFlag; // @synthesize loadingFlag=_loadingFlag;
@property(nonatomic) unsigned char emptyFlag; // @synthesize emptyFlag=_emptyFlag;
@property(nonatomic) unsigned char errorFlag; // @synthesize errorFlag=_errorFlag;
@property(nonatomic) _Bool isRefreshed; // @synthesize isRefreshed=_isRefreshed;
@property(nonatomic) _Bool topActivityShowned; // @synthesize topActivityShowned=_topActivityShowned;
@property(retain, nonatomic) NSMutableDictionary *messageDic; // @synthesize messageDic=_messageDic;
@property(nonatomic) _Bool isHorizMenuAtNaviBar; // @synthesize isHorizMenuAtNaviBar=_isHorizMenuAtNaviBar;
@property(nonatomic) _Bool isLogining; // @synthesize isLogining=_isLogining;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) _Bool hasSwitchedTab2Once; // @synthesize hasSwitchedTab2Once=_hasSwitchedTab2Once;
@property(nonatomic) _Bool hotCacheOnly; // @synthesize hotCacheOnly=_hotCacheOnly;
@property(nonatomic) _Bool canLoadMoreHot; // @synthesize canLoadMoreHot=_canLoadMoreHot;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(nonatomic) _Bool hasNewFeedsOrMsg; // @synthesize hasNewFeedsOrMsg=_hasNewFeedsOrMsg;
@property(retain, nonatomic) QLWXLoginShowPopView *wxLoginLable; // @synthesize wxLoginLable=_wxLoginLable;
@property(retain, nonatomic) MKHorizMenu *horizMenu; // @synthesize horizMenu=_horizMenu;
@property(retain, nonatomic) QLMomentCoverCell *coverCell; // @synthesize coverCell=_coverCell;
@property(retain, nonatomic) QLMomentPersonNaviBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) QLPageViewNavigator *pageNavi; // @synthesize pageNavi=_pageNavi;
@property(retain, nonatomic) NSMutableDictionary *qlctg_selCache; // @synthesize qlctg_selCache=_qlctg_selCache;
@property(nonatomic) double hotRefreshTime; // @synthesize hotRefreshTime=_hotRefreshTime;
@property(retain, nonatomic) NSMutableArray *hotDataArray; // @synthesize hotDataArray=_hotDataArray;
@property(retain, nonatomic) NSMutableArray *userDataArray; // @synthesize userDataArray=_userDataArray;
- (void).cxx_destruct;
- (id)pathStrForRemark;
- (void)showHeaderViewBottomShadow:(_Bool)arg1;
- (void)resetHeaderLocation:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestModelDidStartLoad:(id)arg1;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)onShowTipsTimeout;
- (void)showTipsWithMovieItem:(id)arg1;
- (void)handlePressTips:(id)arg1;
- (void)increaseTipsCount;
- (_Bool)shouldShowTips;
- (void)ClickWXLogin:(id)arg1;
- (void)reloadDataByClientkey:(id)arg1;
- (void)continuePublishToWeiXin:(id)arg1;
- (void)deletePublishButton;
- (void)cunstomControllerBar;
- (id)customNavigationBar;
- (_Bool)navigationBarHidden;
- (id)subtitleForEmpty;
- (id)titleForEmpty;
- (id)imageForEmpty;
- (void)pushToNewMessageController;
- (void)showError:(_Bool)arg1 error:(id)arg2;
- (void)showEmpty:(_Bool)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)checkAndShowLoading;
- (void)engineDidFailed:(id)arg1;
- (void)engineDidFinishLoad:(id)arg1;
- (void)showLoading:(_Bool)arg1 withTabIndex:(long long)arg2;
- (_Bool)hasDoubleTable;
- (_Bool)isTableFirstData:(id)arg1;
- (void)showTopActivity:(_Bool)arg1;
- (long long)footerDragRefreshStyle;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (long long)headerDragRefreshStyle;
- (id)dragRefreshView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)personPageNavibarDidClickMsgBtn:(id)arg1;
- (void)hometimelineClickUserHeader:(id)arg1;
- (void)personPageNavibarDidClickTitleBtn:(id)arg1;
- (void)personPageNavibarDidClickBackBtn:(id)arg1;
- (long long)headerViewHeight;
- (void)resetCurrentTopMargin;
- (void)resetHorizMenuLocation;
- (void)resetCurrentTopView;
- (void)showNewMessageLabelWithMsgDic;
- (void)setRefreshStatus:(int)arg1;
- (void)scrollToTop;
- (void)scrollToTop:(id)arg1;
- (void)delayResetHorizMenu:(id)arg1;
- (id)itemWithClientKey:(id)arg1;
- (id)itemWithPublishId:(id)arg1;
- (void)mergeFakeItemToTimeLine;
- (void)deleteMomentCell:(id)arg1;
- (void)requestMoreData;
- (void)reloadMomentCell:(id)arg1 needSetContentOffset:(_Bool)arg2 animated:(_Bool)arg3;
- (void)updateMomentCell:(id)arg1;
- (id)indexPathWithObject:(id)arg1;
- (void)retryDown:(id)arg1;
- (void)RequestData:(int)arg1;
- (void)dragReload:(_Bool)arg1;
- (void)delaySuperFinished:(id)arg1;
- (void)delayLoadData:(id)arg1;
- (void)loadTimeLineData:(_Bool)arg1 withTabType:(unsigned long long)arg2;
- (struct CGRect)frameOfPageStatusView;
- (void)reloadDataForViewDelay;
- (void)refreshTimeLineDataDelay;
- (void)clearNewFeedHint;
- (void)didPressRightButtonAction:(id)arg1;
- (id)dataListWithTableView:(id)arg1;
- (id)currentDataList:(_Bool)arg1;
- (id)pageDescription;
- (void)didReceiveMemoryWarning;
- (void)setHorizTabIndex:(unsigned long long)arg1;
- (void)horizMenuSelectedTab;
- (_Bool)isRightModel:(id)arg1;
- (void)displayEmptyAndError;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic, getter=getNewMessageLabel) QLNewMessageLabel *newMessageLabel; // @synthesize newMessageLabel=_newMessageLabel;
- (void)pageNavigatorDidEndDragging:(id)arg1;
- (void)pageNavigatorWillBeginDragging:(id)arg1;
- (void)pageNavigatorDidScroll:(id)arg1;
- (void)pageNavigator:(id)arg1 didNaviToIndex:(long long)arg2;
- (_Bool)pageNavigator:(id)arg1 pageExsistAtIndex:(long long)arg2;
- (id)pageNavigator:(id)arg1 viewForIndex:(long long)arg2;
- (long long)numberOfPagesInNavigator:(id)arg1;
- (void)qlctg_resetHeaderLocation:(_Bool)arg1;
- (void)qlctg_displayEmptyAndError;
- (void)qlctg_resetCurrentTopMargin;
- (void)qlctg_loadTimeLineData:(_Bool)arg1 withTabType:(unsigned long long)arg2;
- (void)qlctg_checkAndShowLoading;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (_Bool)needDoubleTable;
- (void)syncTabState:(unsigned long long)arg1;
- (void)moveToTop:(long long)arg1;
- (void)horizMenu:(id)arg1 itemTapAtIndex:(unsigned long long)arg2;
- (void)horizScrollViewDidScroll:(id)arg1;
- (void)horizMenu:(id)arg1 itemDoubleClickAtIndex:(unsigned long long)arg2;
- (void)horizMenu:(id)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (unsigned long long)itemCountOfCenterForHorizMenu:(id)arg1;
- (unsigned long long)eachItemWidthForMenu:(id)arg1;
- (id)horizMenu:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(id)arg1;
- (id)backgroundColorForMenu:(id)arg1;
- (id)selectedItemImageForMenu:(id)arg1;
- (id)getTabNameByIndex:(unsigned long long)arg1;
- (void)qlctg_delayLoadData:(id)arg1;
- (void)qlctg_resetCurrentTopView;
- (void)qlctg_loadTimeLineData:(_Bool)arg1 withTabType:(unsigned long long)arg2;
- (id)qlctg_itemWithClientKey:(id)arg1;
- (id)qlctg_itemWithPublishId:(id)arg1;
- (void)qlctg_showNewMessageLabelWithMsgDic;
- (void)qlctg_showSendingMessageLabel:(_Bool)arg1;
- (void)qlctg_scrollToTop:(id)arg1;
- (void)qlctg_setHorizTabIndex:(unsigned long long)arg1;
- (void)deleteMomentItemNotification:(id)arg1;
- (void)momentDidUpdateInfo:(id)arg1;
- (void)momentDidLogoutSuccess:(id)arg1;
- (void)momentDidLoginSuccess:(id)arg1;
- (void)momentDidLoginFailed:(id)arg1;
- (void)momentDidLoginStart:(id)arg1;
- (void)privacyDidChangeNotification:(id)arg1;
- (void)handlePutCommentSucess:(id)arg1;
- (void)handleNewCommentIconURL:(id)arg1;
- (void)handleFeedNeedUpdate:(id)arg1;
- (void)handleNewMessage:(id)arg1;
- (void)handlePublishFailed:(id)arg1;
- (void)handlePictureFailed:(id)arg1;
- (void)handlePutCommentFailed:(id)arg1;
- (void)handlePublishSucess:(id)arg1;
- (void)handlePublishDid:(id)arg1;
- (void)executeCategorySelector:(SEL)arg1;
- (id)standardSelectorForCtgSelector:(SEL)arg1;
- (SEL)queryAndUpdateCategorySelCacheIfNeeded:(SEL)arg1 canExecute:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
