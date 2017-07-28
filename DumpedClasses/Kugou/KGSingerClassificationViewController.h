//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class KGTableView, KGThemeButton, NSMutableArray, NSString;

@interface KGSingerClassificationViewController : KGScrollPageViewController <UITableViewDataSource, KGTableViewDelegate>
{
    KGTableView *_tableView;
    NSMutableArray *_entranceArr;
    KGThemeButton *_selectedButton;
    long long _numMaxSelect;
    NSMutableArray *_selectedSingerArray;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSMutableArray *selectedSingerArray; // @synthesize selectedSingerArray=_selectedSingerArray;
@property(nonatomic) long long numMaxSelect; // @synthesize numMaxSelect=_numMaxSelect;
@property(retain, nonatomic) KGThemeButton *selectedButton; // @synthesize selectedButton=_selectedButton;
- (void).cxx_destruct;
- (void)jumpToSingerListWithOriginType:(long long)arg1 andSingerMemberSexType:(long long)arg2;
- (void)showLoginViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateSelectedBtn:(long long)arg1;
- (void)backAction:(id)arg1;
- (void)selectedButtonClicked:(id)arg1;
- (void)finishBtnClicked:(id)arg1;
- (long long)showPlayBarWay;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
