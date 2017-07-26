//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CTFlightFullScreenMaskViewDelegate.h"
#import "CTFlightUseCarAddressViewControllerDelegate.h"
#import "CTFlightUseCarTimePickerToolBarDeleagte.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTFlightDetailBaseCacheBean, CTFlightFullScreenMaskView, CTFlightNavigationBar, CTFlightOrderConfirmBaseCacheBean, CTFlightOrderConfirmXProductViewModel, CTFlightPickerLabel, NSDate, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface CTFlightUseCarNewViewController : CTFlightRootViewController <UITableViewDelegate, UITableViewDataSource, CTFlightUseCarTimePickerToolBarDeleagte, CTFlightFullScreenMaskViewDelegate, CTFlightUseCarAddressViewControllerDelegate>
{
    _Bool isAnimationLoading;
    _Bool firstLoadView;
    NSMutableArray *displayCellList;
    NSMutableArray *useCarInfoList;
    int cfgs[5];
    CTFlightFullScreenMaskView *maskView;
    CTFlightPickerLabel *pickerLabel;
    _Bool fold[2];
    NSMutableArray *tmpVehicleModelList;
    CTFlightOrderConfirmBaseCacheBean *_confirmCacheBean;
    CTFlightDetailBaseCacheBean *_detailCacheBean;
    CTFlightOrderConfirmXProductViewModel *_xProductModel;
    long long _XProductCouponCount;
    CDUnknownBlockType _tapBackBlock;
    CDUnknownBlockType _completeBackBlock;
    NSMutableArray *_XProductCouponList;
    UITableView *_tableView;
    CTFlightNavigationBar *_flightNavigationBar;
    NSDate *_pickerDate;
    long long _currentSection;
    NSString *_uuid;
    NSString *_mutextAddressRequestToken;
    NSMutableArray *_duplicateXProductCouponList;
    UIView *_footerView;
    UILabel *_refuseLabel;
}

@property(retain, nonatomic) UILabel *refuseLabel; // @synthesize refuseLabel=_refuseLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *duplicateXProductCouponList; // @synthesize duplicateXProductCouponList=_duplicateXProductCouponList;
@property(copy, nonatomic) NSString *mutextAddressRequestToken; // @synthesize mutextAddressRequestToken=_mutextAddressRequestToken;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) NSDate *pickerDate; // @synthesize pickerDate=_pickerDate;
@property(retain, nonatomic) CTFlightNavigationBar *flightNavigationBar; // @synthesize flightNavigationBar=_flightNavigationBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *XProductCouponList; // @synthesize XProductCouponList=_XProductCouponList;
@property(copy, nonatomic) CDUnknownBlockType completeBackBlock; // @synthesize completeBackBlock=_completeBackBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBackBlock; // @synthesize tapBackBlock=_tapBackBlock;
@property(nonatomic) long long XProductCouponCount; // @synthesize XProductCouponCount=_XProductCouponCount;
@property(retain, nonatomic) CTFlightOrderConfirmXProductViewModel *xProductModel; // @synthesize xProductModel=_xProductModel;
@property(retain, nonatomic) CTFlightDetailBaseCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(retain, nonatomic) CTFlightOrderConfirmBaseCacheBean *confirmCacheBean; // @synthesize confirmCacheBean=_confirmCacheBean;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 displayCellForCouponSwitch:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForCouponSwitch:(id)arg2;
- (id)tableView:(id)arg1 cellForCouponSwitch:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowForTitle:(id)arg2;
- (void)tableView:(id)arg1 displayCellForTitle:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForTitle:(id)arg2;
- (id)tableView:(id)arg1 cellForTitle:(id)arg2;
- (void)addMoreSegment;
- (void)tableView:(id)arg1 didSelectRowForMore:(id)arg2;
- (void)tableView:(id)arg1 displayCellForMore:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForMore:(id)arg2;
- (id)tableView:(id)arg1 cellForMore:(id)arg2;
- (void)searchVehicleListWithUseCarSegmentModel:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (void)sendSearchVehicleListWithSection:(long long)arg1 needReloadTable:(_Bool)arg2;
- (void)tableView:(id)arg1 displayCellForCarType:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForCarType:(id)arg2;
- (id)tableView:(id)arg1 cellForCarType:(id)arg2;
- (void)searchAddressListWithKeyword:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (void)addressViewControllerDidSelectAddressModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowForAddress:(id)arg2;
- (void)tableView:(id)arg1 displayCellForAddress:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForAddress:(id)arg2;
- (id)tableView:(id)arg1 cellForAddress:(id)arg2;
- (void)onDatePickerChanged:(id)arg1;
- (void)setDatePickerWithConfig:(id)arg1 useCarDate:(id)arg2 flightDate:(id)arg3;
- (void)onConfirmTimePicker;
- (void)onCancelTimePicker;
- (void)flightMaskViewWillRemoveFromSuperView:(id)arg1 gestureRecognizer:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowForTime:(id)arg2;
- (id)setupTimeIconImage;
- (id)setupTimeLabel:(id)arg1;
- (void)tableView:(id)arg1 displayCellForTime:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForTime:(id)arg2;
- (id)tableView:(id)arg1 cellForTime:(id)arg2;
- (id)setupContractIconImage:(id)arg1;
- (id)setupContractLabel:(id)arg1;
- (void)tableView:(id)arg1 displayCellForContact:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForContact:(id)arg2;
- (id)tableView:(id)arg1 cellForContact:(id)arg2;
- (void)checkChangePrice:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)commitUseCarList:(id)arg1;
- (void)doCommitAction;
- (void)checkUseCarInputOnCommit;
- (void)logCodeForAddressAndCar;
- (void)completeButtonClicked;
- (void)doBackAction;
- (void)backBarCButtonClicked:(id)arg1;
- (void)initNavigationBar;
- (void)endLoadingForMultiService;
- (void)startLoadingForMultiService:(id)arg1;
- (void)parseDateConfigs;
- (void)initSegmentFlightInfo:(id)arg1;
- (void)initView;
- (void)initData;
- (int)getCellType:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)footerViewClicked:(id)arg1;
- (void)initTableFooterView;
- (void)initTableView;
- (void)resetCell;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
