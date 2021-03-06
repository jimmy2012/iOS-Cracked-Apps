//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "MusicMenuCellDelegate.h"
#import "RecognizedRecordHistoryCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGScrollManagerViewController, KGTableView, NSIndexPath, NSMutableArray, NSString, UIView;

@interface KGRecognizedRecordHistoryViewController : KGScrollPageViewController <UITableViewDelegate, UITableViewDataSource, RecognizedRecordHistoryCellDelegate, MusicMenuCellDelegate>
{
    _Bool _isShowAnimation;
    NSIndexPath *_lastIndexpath;
    KGScrollManagerViewController *_superViewController;
    CDUnknownBlockType _recognizeBlock;
    CDUnknownBlockType _deleteHistoryBlock;
    NSMutableArray *_recordDataArray;
    KGTableView *_historyTableView;
    NSIndexPath *_selectedIndexpath;
    UIView *_noDataTipsView;
}

@property(retain, nonatomic) UIView *noDataTipsView; // @synthesize noDataTipsView=_noDataTipsView;
@property(retain, nonatomic) NSIndexPath *selectedIndexpath; // @synthesize selectedIndexpath=_selectedIndexpath;
@property(retain, nonatomic) KGTableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) NSMutableArray *recordDataArray; // @synthesize recordDataArray=_recordDataArray;
@property(copy, nonatomic) CDUnknownBlockType deleteHistoryBlock; // @synthesize deleteHistoryBlock=_deleteHistoryBlock;
@property(copy, nonatomic) CDUnknownBlockType recognizeBlock; // @synthesize recognizeBlock=_recognizeBlock;
@property(nonatomic) __weak KGScrollManagerViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)menuClickWithMusicMenu:(id)arg1;
- (void)menuClickWithCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)clearAllRecord;
- (void)playStateChange:(id)arg1;
- (void)playControlNotification:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool hasRecordHistory;
- (id)failedArrayWithSong:(id)arg1;
- (id)successArrayWithSong:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

