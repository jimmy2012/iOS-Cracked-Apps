//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WatchHomePageParentViewController.h"

#import "GDMapBLLDelegate.h"
#import "KGTableViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"

@class GDMapBLL, KGCityEntity, KGConcertHeaderView, KGConcertOtherCityView, KGDefaultNetErrorView, KGTableView, KGThemeButton, KGThemeLabel, KGThemeLine, NSArray, NSString, RefreshControl;

@interface KGConcertViewController : WatchHomePageParentViewController <KGTableViewDelegate, UITableViewDataSource, GDMapBLLDelegate, RefreshControlDelegate>
{
    KGCityEntity *_currentCity;
    _Bool _locationError;
    _Bool _showSinger;
    _Bool _sendAMPOnce;
    KGTableView *_concertTableview;
    NSArray *_concertList;
    KGConcertHeaderView *_headView;
    KGThemeButton *_titleBtn;
    GDMapBLL *_gdMapBll;
    KGConcertOtherCityView *_otherCityView;
    RefreshControl *_refreshControl;
    KGThemeLabel *_cityLabel;
    KGThemeLine *_cityLine;
    KGDefaultNetErrorView *_netErrorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(nonatomic) _Bool sendAMPOnce; // @synthesize sendAMPOnce=_sendAMPOnce;
@property(nonatomic) _Bool showSinger; // @synthesize showSinger=_showSinger;
@property(retain, nonatomic) KGThemeLine *cityLine; // @synthesize cityLine=_cityLine;
@property(retain, nonatomic) KGThemeLabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGConcertOtherCityView *otherCityView; // @synthesize otherCityView=_otherCityView;
@property(retain, nonatomic) GDMapBLL *gdMapBll; // @synthesize gdMapBll=_gdMapBll;
@property(retain, nonatomic) KGThemeButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) KGConcertHeaderView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSArray *concertList; // @synthesize concertList=_concertList;
@property(retain, nonatomic) KGTableView *concertTableview; // @synthesize concertTableview=_concertTableview;
- (void).cxx_destruct;
- (void)endAPMForLocationQuery:(id)arg1;
- (void)startAPMForLocationQuery;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)GDMapBLLCallBackWithError:(id)arg1;
- (void)GDMapBLLCallBackWithLocationEntity:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)reConnectEvent;
- (void)viewDidLoad;
- (long long)pGetCitySingerCount:(id)arg1;
- (void)pSetDefaultCityIsKugouLoading:(_Bool)arg1;
- (void)pShowCityData;
- (void)pShowEmptyCityData;
- (void)pShowCityNetError;
- (void)closeCityNetError;
- (void)pPushCityListVC;
- (void)pSelectCity:(id)arg1;
- (void)pUpdateCity:(id)arg1 isKugouLoading:(_Bool)arg2;
- (void)pOtherCityDataWithProvince:(id)arg1 isKugouLoading:(_Bool)arg2;
- (void)pSetNaviTitleWithCity:(id)arg1;
- (void)sendAPMWithError:(id)arg1;
- (void)kgFetchDataFinished:(id)arg1;
- (void)pGetDataWithCity:(id)arg1 isKugouLoading:(_Bool)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

