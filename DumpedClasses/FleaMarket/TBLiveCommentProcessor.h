//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface TBLiveCommentProcessor : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _draging;
    _Bool _canBanUserComment;
    NSMutableArray *_commentList;
    UITableView *_commentTableView;
    NSString *_liveId;
    UIButton *_showTableViewBtn;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIButton *showTableViewBtn; // @synthesize showTableViewBtn=_showTableViewBtn;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) _Bool canBanUserComment; // @synthesize canBanUserComment=_canBanUserComment;
@property(nonatomic) _Bool draging; // @synthesize draging=_draging;
@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearComments;
- (void)hideTableView;
- (void)showTableView;
- (void)addCellWithModel:(id)arg1;
- (void)pushUser:(id)arg1 state:(id)arg2;
- (void)pushTradeShow:(id)arg1 comment:(id)arg2;
- (void)pushNoticeComment:(id)arg1 mockNick:(id)arg2;
- (void)pushCommment:(id)arg1 account:(id)arg2 userId:(long long)arg3;
- (void)pushSystemInfo:(id)arg1;
- (void)endDragging;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)canBan:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

