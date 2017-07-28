//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDIMBaseSystemCellView.h"

@class NSMutableArray, UILabel;

@interface DDIMSystemTipsCellView : DDIMBaseSystemCellView
{
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    NSMutableArray *_linkRangesArray;
    UILabel *_contentLabel;
}

+ (struct CGSize)sizeWithSystemTipsText:(id)arg1;
+ (id)getRangesForHilightText:(id)arg1;
+ (double)getCellViewHeightWithMessage:(id)arg1;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSMutableArray *linkRangesArray; // @synthesize linkRangesArray=_linkRangesArray;
- (void).cxx_destruct;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (struct __CTFramesetter *)framesetter;
- (void)tapTextContentViewWithLocation:(struct CGPoint)arg1;
- (void)tapContentBgViewWithLocation:(struct CGPoint)arg1;
- (id)getLinkInfoWithLocation:(struct CGPoint)arg1;
- (id)addLinkAttributesToAttributedContent:(id)arg1 withLinkRangesArray:(id)arg2;
- (void)layoutTipsView;
- (void)layoutSubviews;
- (struct CGSize)sizeToFits;
- (void)setTipsContent:(id)arg1;
- (void)configView;
- (void)updateCellModel:(id)arg1;
- (id)initWithCellModel:(id)arg1;

@end
