//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCardBaseViewController.h"

#import "CCardUpdateProtocol.h"
#import "CPopMenuManagerDelegate.h"

@class CCardUpdateManager, CLDetailShareManeger, CPopMenuManager, DTRpcAsyncCaller, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface CCardFeedBaseVC : CCardBaseViewController <CCardUpdateProtocol, CPopMenuManagerDelegate>
{
    NSDictionary *_lanunchOptions;
    DTRpcAsyncCaller *_requestAsyncCaller;
    NSMutableArray *_cacheNeedCardList;
    CPopMenuManager *_menuManger;
    NSString *_clubId;
    NSMutableDictionary *_feedUseridDic;
    NSMutableDictionary *_feedRecommendTypeDic;
    double _lastOffset;
    _Bool _willDisappear;
    _Bool _didAppear;
    CCardUpdateManager *_cardUpdateManager;
    CLDetailShareManeger *_detaiShareManager;
}

@property(retain, nonatomic) CLDetailShareManeger *detaiShareManager; // @synthesize detaiShareManager=_detaiShareManager;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) _Bool willDisappear; // @synthesize willDisappear=_willDisappear;
@property(retain, nonatomic) CCardUpdateManager *cardUpdateManager; // @synthesize cardUpdateManager=_cardUpdateManager;
- (void).cxx_destruct;
- (void)updateCardOriginBizData:(id)arg1;
- (id)logBizs;
- (id)pageType;
- (id)complainSubScene;
- (id)functionHook;
- (void)cardDataUpdate:(id)arg1 isPublishCard:(_Bool)arg2;
- (void)doCardDataUpdate:(id)arg1;
- (void)doCardDataReplace:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)popMenuManager:(id)arg1 didSelectAtIndex:(unsigned long long)arg2 withPopMenuItem:(id)arg3;
- (void)publishCardDidUpdate;
- (void)requestMore;
- (void)removeCardForFeedId:(id)arg1;
- (void)doCardDataRemoveNotification:(id)arg1;
- (void)doFeedOptionChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (id)assemblePublishListForClubId:(id)arg1 topicId:(id)arg2 cardList:(id)arg3 isJohn:(_Bool)arg4 makeDataType:(int)arg5;
- (id)transferForCardModelAndUpdateOptions:(id)arg1;
- (id)doRepeatObjects:(id)arg1 inCardList:(id)arg2;
- (void)loadMoreCardList:(id)arg1;
- (void)refreshCardWithList:(id)arg1;
- (void)delayUntilViewDidAppear:(CDUnknownBlockType)arg1;
- (void)doAlertWithMsg:(id)arg1;
- (void)doPublishTipNotification:(id)arg1;
- (void)viewWillDestroy;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

