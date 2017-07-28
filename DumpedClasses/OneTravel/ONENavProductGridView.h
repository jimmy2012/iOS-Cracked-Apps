//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, ONEAppRemoteConfigModel, UIButton, UIImageView, UIScrollView, UITapGestureRecognizer;

@interface ONENavProductGridView : UIView
{
    NSArray *_dataArray;
    ONEAppRemoteConfigModel *_tabbarViewModel;
    UIView *_superView;
    double _fromPositionTop;
    UIButton *_eventButton;
    UIImageView *_backgroundBlurImageView;
    UITapGestureRecognizer *_backgroundBlurImageViewTapGes;
    UIView *_contentWrapperView;
    UIScrollView *_itemButtonsWrapperView;
    UIButton *_closeBtn;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _selectUnopenProline;
}

@property(copy, nonatomic) CDUnknownBlockType selectUnopenProline; // @synthesize selectUnopenProline=_selectUnopenProline;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIScrollView *itemButtonsWrapperView; // @synthesize itemButtonsWrapperView=_itemButtonsWrapperView;
@property(retain, nonatomic) UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
@property(retain, nonatomic) UITapGestureRecognizer *backgroundBlurImageViewTapGes; // @synthesize backgroundBlurImageViewTapGes=_backgroundBlurImageViewTapGes;
@property(retain, nonatomic) UIImageView *backgroundBlurImageView; // @synthesize backgroundBlurImageView=_backgroundBlurImageView;
@property(retain, nonatomic) UIButton *eventButton; // @synthesize eventButton=_eventButton;
@property(nonatomic) double fromPositionTop; // @synthesize fromPositionTop=_fromPositionTop;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) ONEAppRemoteConfigModel *tabbarViewModel; // @synthesize tabbarViewModel=_tabbarViewModel;
@property(copy, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)removeCornerIconForButton:(id)arg1;
- (void)backgroundBlurImageViewTapGesHandler;
- (void)handleClickFromMisDataWithIndex:(long long)arg1 btn:(id)arg2;
- (void)handleClickFromLocalDataWithIndex:(long long)arg1 btn:(id)arg2;
- (void)slideGridItemButtonClicked:(id)arg1;
- (void)closeBtnClicked;
- (void)dismiss;
- (void)show;
- (void)showInView:(id)arg1;
- (void)generateBlurBackgroundView;
- (id)itemModelAtIndex:(long long)arg1;
- (void)addHorizontalLineToWrapperViewWithStartY:(double)arg1;
- (void)addVerticalLineToWrapperViewWithStartX:(double)arg1 wrapperViewHeight:(double)arg2;
- (void)initBorderLineLayers;
- (void)initItemButtons;
- (void)adjustWrappersSize;
- (void)initSubviews;
- (void)configData;
- (unsigned long long)misDataCount;
- (void)setClickUnopenCityProductLine:(CDUnknownBlockType)arg1;
- (id)initWithTabBarViewModel:(id)arg1 superView:(id)arg2 fromPositionTop:(double)arg3 showButton:(id)arg4 itemSelectBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end
