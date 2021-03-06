//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "XYPHRecommendThirdPartyUserDetailCellDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UICollectionView, XYPHRecommendThirdPartyCellAdapter, XYPHRecommendThirdPartyUserDetailCellAdapter;

@interface XYPHRecommendWeiboViewController : XYPHBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, XYPHRecommendThirdPartyUserDetailCellDelegate, UISearchBarDelegate>
{
    _Bool _searchMode;
    NSMutableDictionary *_statusDic;
    UICollectionView *_weiboListTableView;
    NSMutableArray *_weiboListArray;
    long long _page;
    XYPHRecommendThirdPartyUserDetailCellAdapter *_detailAdapter;
    XYPHRecommendThirdPartyCellAdapter *_weiboAdapter;
    NSString *_keyword;
}

@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool searchMode; // @synthesize searchMode=_searchMode;
@property(retain, nonatomic) XYPHRecommendThirdPartyCellAdapter *weiboAdapter; // @synthesize weiboAdapter=_weiboAdapter;
@property(retain, nonatomic) XYPHRecommendThirdPartyUserDetailCellAdapter *detailAdapter; // @synthesize detailAdapter=_detailAdapter;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *weiboListArray; // @synthesize weiboListArray=_weiboListArray;
@property(retain, nonatomic) UICollectionView *weiboListTableView; // @synthesize weiboListTableView=_weiboListTableView;
@property(retain, nonatomic) NSMutableDictionary *statusDic; // @synthesize statusDic=_statusDic;
- (void).cxx_destruct;
- (void)requestRecommendStatus:(CDUnknownBlockType)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)searchWeiboFriendsList;
- (void)requestWeiboFriendsList;
- (void)followAllUserButtonClicked:(id)arg1;
- (void)inviteButtonClicked:(id)arg1;
- (void)recommendUserCellNoteClicked:(id)arg1 index:(long long)arg2;
- (void)recommendUserCellFollowButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

