//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FABaseTableStyleCell.h"

#import "FAPKRankingCellProtocol.h"

@class FAThemeView, NSString, UIImageView, UILabel, UIView;

@interface FAPKRankingChampionTableViewCell : FABaseTableStyleCell <FAPKRankingCellProtocol>
{
    UIImageView *_championWingImgView;
    UIImageView *_headerImgView;
    UIView *_secondLineBgView;
    UILabel *_nameLabel;
    UIImageView *_vipImgView;
    UIImageView *_starLevelView;
    UIView *_thirdLineBgView;
    UIImageView *_liveTypeIconImgView;
    UILabel *_liveTypeLabel;
    UILabel *_numLabel;
    FAThemeView *_line;
    UILabel *_detailInfoLabel;
    UILabel *_weekInfoLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *weekInfoLabel; // @synthesize weekInfoLabel=_weekInfoLabel;
@property(retain, nonatomic) UILabel *detailInfoLabel; // @synthesize detailInfoLabel=_detailInfoLabel;
@property(retain, nonatomic) FAThemeView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UILabel *liveTypeLabel; // @synthesize liveTypeLabel=_liveTypeLabel;
@property(retain, nonatomic) UIImageView *liveTypeIconImgView; // @synthesize liveTypeIconImgView=_liveTypeIconImgView;
@property(retain, nonatomic) UIView *thirdLineBgView; // @synthesize thirdLineBgView=_thirdLineBgView;
@property(retain, nonatomic) UIImageView *starLevelView; // @synthesize starLevelView=_starLevelView;
@property(retain, nonatomic) UIImageView *vipImgView; // @synthesize vipImgView=_vipImgView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *secondLineBgView; // @synthesize secondLineBgView=_secondLineBgView;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIImageView *championWingImgView; // @synthesize championWingImgView=_championWingImgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateLineViewShowStatus:(_Bool)arg1;
- (void)updateViewWithIndex:(id)arg1;
- (void)reloadRankingData:(id)arg1 rankingType:(unsigned long long)arg2;
- (void)configSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
