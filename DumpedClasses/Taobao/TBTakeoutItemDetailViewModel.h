//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol.h"

@class NSArray, NSString, TBTakeoutItemDetailPageModel, TBTakeoutStoreDetailViewModel, TBTakeoutStoreItemViewModel;

@interface TBTakeoutItemDetailViewModel : NXViewModel <NXStoreProtocol>
{
    long long _itemId;
    long long _storeId;
    double _latitude;
    double _longitude;
    TBTakeoutItemDetailPageModel *_model;
    TBTakeoutStoreDetailViewModel *_storeDetailViewModel;
    TBTakeoutStoreItemViewModel *_itemDetailVeiwModel;
    NSArray *_activityViewModels;
}

@property(copy, nonatomic) NSArray *activityViewModels; // @synthesize activityViewModels=_activityViewModels;
@property(retain, nonatomic) TBTakeoutStoreItemViewModel *itemDetailVeiwModel; // @synthesize itemDetailVeiwModel=_itemDetailVeiwModel;
@property(retain, nonatomic) TBTakeoutStoreDetailViewModel *storeDetailViewModel; // @synthesize storeDetailViewModel=_storeDetailViewModel;
@property(retain, nonatomic) TBTakeoutItemDetailPageModel *model; // @synthesize model=_model;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (Class)modelClass;
- (struct NSDictionary *)api;
- (void)updateWithCartViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

