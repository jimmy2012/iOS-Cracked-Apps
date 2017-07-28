//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMHorListViewDataSource.h"
#import "FMHorListViewDelegate.h"

@class FMHorListView, FMReviewItemDO, NSString;

@interface FMReviewPicView : UIView <FMHorListViewDelegate, FMHorListViewDataSource>
{
    FMReviewItemDO *_reviewItemDO;
    FMHorListView *_listView;
    _Bool _disablePicScroll;
}

@property(nonatomic) _Bool disablePicScroll; // @synthesize disablePicScroll=_disablePicScroll;
- (void).cxx_destruct;
- (id)listView:(id)arg1 viewForColumnAtIndex:(long long)arg2;
- (double)listView:(id)arg1 widthForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumnsInListView:(id)arg1;
- (void)listView:(id)arg1 didSelectColumnAtIndex:(long long)arg2;
- (void)setRateItemDO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
