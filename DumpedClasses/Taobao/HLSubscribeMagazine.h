//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HLFeedListViewProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, SVPullToRefreshView, UICollectionView;

@interface HLSubscribeMagazine : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HLFeedListViewProtocol>
{
    UICollectionView *_collectionView;
    NSMutableArray *_dataModels;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) NSMutableArray *dataModels; // @synthesize dataModels=_dataModels;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)shouldShowCellAsOneRow:(id)arg1;
- (_Bool)isAtLastRow:(id)arg1;
- (_Bool)isOddItemCountOfSection:(long long)arg1;
- (_Bool)shouldShowBottomLine:(id)arg1;
- (void)updateRightBottomLine:(id)arg1 cell:(id)arg2;
- (void)addShadowForView:(id)arg1;
- (void)setUpCollectionViewWithFrame:(struct CGRect)arg1;
- (id)feedModelAtIndexPath:(id)arg1;
- (id)headerModelOfSection:(long long)arg1;
- (id)preprocessDataModel:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addPullToRefreshHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasFeedListData;
- (void)setFeedList:(id)arg1;
@property(readonly, nonatomic) SVPullToRefreshView *pullToRefreshView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

