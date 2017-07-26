//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPlayerRightListView.h"

@interface QLPlayerDeafultRightListView : QLPlayerRightListView
{
    _Bool _networkAvailable;
    long long _lastSelectedVideoIndex;
}

@property _Bool networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(nonatomic) long long lastSelectedVideoIndex; // @synthesize lastSelectedVideoIndex=_lastSelectedVideoIndex;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)syncSelectedEpisode;
- (_Bool)hasNextVideo;
- (_Bool)playNextCover;
- (void)resetList;
- (void)configTableView;
- (void)loadList;
- (void)clearAllInfo;
- (void)hideRightListView;
- (void)hideRightListViewAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
