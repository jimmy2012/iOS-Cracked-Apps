//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeImageView, KGThemeLabel, KGThemeLine, KtvProgressButton, UIImageView;

@interface KTVBaseDownLoadCell : KFCommedTableViewCell
{
    _Bool _showEarthImg;
    KGThemeLabel *songname;
    KGThemeLabel *singer;
    KtvProgressButton *downloadbtn;
    KGThemeImageView *lrcImg;
    KGThemeImageView *erasureImgView;
    KGThemeLine *sizeLine;
    KGThemeLabel *sizeLab;
    UIImageView *remmendImg;
    UIImageView *hqImg;
    UIImageView *chorusImg;
    UIImageView *canScoreImg;
    UIImageView *canYinyiImg;
    KGThemeImageView *_earthImgView;
    KGThemeLabel *_centerTextLabel;
    KGThemeLine *_line;
    KGThemeLine *_topSeperateLine;
}

@property(retain, nonatomic) KGThemeLine *topSeperateLine; // @synthesize topSeperateLine=_topSeperateLine;
@property(nonatomic) _Bool showEarthImg; // @synthesize showEarthImg=_showEarthImg;
@property(retain, nonatomic) KGThemeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) KGThemeLabel *centerTextLabel; // @synthesize centerTextLabel=_centerTextLabel;
@property(retain, nonatomic) KGThemeImageView *earthImgView; // @synthesize earthImgView=_earthImgView;
@property(retain, nonatomic) UIImageView *canYinyiImg; // @synthesize canYinyiImg;
@property(retain, nonatomic) UIImageView *canScoreImg; // @synthesize canScoreImg;
@property(retain, nonatomic) UIImageView *chorusImg; // @synthesize chorusImg;
@property(retain, nonatomic) UIImageView *hqImg; // @synthesize hqImg;
@property(retain, nonatomic) UIImageView *remmendImg; // @synthesize remmendImg;
@property(retain, nonatomic) KGThemeLabel *sizeLab; // @synthesize sizeLab;
@property(retain, nonatomic) KGThemeLine *sizeLine; // @synthesize sizeLine;
@property(retain, nonatomic) KGThemeImageView *erasureImgView; // @synthesize erasureImgView;
@property(retain, nonatomic) KGThemeImageView *lrcImg; // @synthesize lrcImg;
@property(retain, nonatomic) KtvProgressButton *downloadbtn; // @synthesize downloadbtn;
@property(retain, nonatomic) KGThemeLabel *singer; // @synthesize singer;
@property(retain, nonatomic) KGThemeLabel *songname; // @synthesize songname;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)dealloc;
- (void)showEarthImg:(_Bool)arg1;
- (void)showTopseperateLine:(_Bool)arg1;
- (void)setAllFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

