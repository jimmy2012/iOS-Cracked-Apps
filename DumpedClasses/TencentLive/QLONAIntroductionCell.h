//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONAIntroduction, QLRichLabel, UIButton, UIView;

@interface QLONAIntroductionCell : QLBaseTabelViewCell
{
    _Bool _hasUnfoldBtn;
    _Bool _expandRightNow;
    QLJCEONAIntroduction *_item;
    QLRichLabel *_introLbl;
    UIButton *_unfoldIconBtn;
    UIView *_unfoldIconBtnBg;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(nonatomic) _Bool expandRightNow; // @synthesize expandRightNow=_expandRightNow;
@property(nonatomic) _Bool hasUnfoldBtn; // @synthesize hasUnfoldBtn=_hasUnfoldBtn;
@property(retain, nonatomic) UIView *unfoldIconBtnBg; // @synthesize unfoldIconBtnBg=_unfoldIconBtnBg;
@property(retain, nonatomic) UIButton *unfoldIconBtn; // @synthesize unfoldIconBtn=_unfoldIconBtn;
@property(retain, nonatomic) QLRichLabel *introLbl; // @synthesize introLbl=_introLbl;
@property(retain, nonatomic) QLJCEONAIntroduction *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)parentTableView;
- (void)expandContent:(id)arg1;
- (double)introlblWidth;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
