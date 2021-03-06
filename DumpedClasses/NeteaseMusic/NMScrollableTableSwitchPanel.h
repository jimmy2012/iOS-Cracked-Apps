//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMScrollView, NSArray;

@interface NMScrollableTableSwitchPanel : UIView
{
    NSArray *_views;
    double _contentWidth;
    NMScrollView *_scrollView;
    double contentOffsetX;
    NSArray *_tableViews;
}

@property(readonly, copy, nonatomic) NSArray *tableViews; // @synthesize tableViews=_tableViews;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (void).cxx_destruct;
- (void)enableScroll:(_Bool)arg1;
- (id)scrollViewPanGesutre;
- (void)setScrollViewDelegate:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentIndex; // @dynamic currentIndex;
@property(nonatomic) double contentOffsetX; // @synthesize contentOffsetX;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)scrollToTableIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithViews:(id)arg1 contentWidth:(double)arg2;
- (id)initWithViews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

