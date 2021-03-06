//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TangramLayoutProtocol.h"

@class NSArray, NSString, TangramBus, UIImageView, UIScrollView;

@interface TangramFixLayout : UIView <TangramLayoutProtocol>
{
    _Bool _animating;
    _Bool _retainScrollState;
    NSArray *_itemModels;
    NSArray *_margin;
    double _offsetX;
    double _offsetY;
    long long _alignType;
    long long _showType;
    double _showY;
    TangramBus *_tangramBus;
    long long _appearanceType;
    NSArray *_padding;
    double _hGap;
    NSString *_layoutIdentifier;
    NSString *_bgImgURL;
    UIImageView *_bgImageView;
    UIScrollView *_scrollView;
    double _layoutHeight;
    double _animationDuration;
    struct CGPoint _originPoint;
}

@property(nonatomic) _Bool retainScrollState; // @synthesize retainScrollState=_retainScrollState;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *bgImgURL; // @synthesize bgImgURL=_bgImgURL;
@property(retain, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(nonatomic) double hGap; // @synthesize hGap=_hGap;
@property(retain, nonatomic) NSArray *padding; // @synthesize padding=_padding;
@property(nonatomic) long long appearanceType; // @synthesize appearanceType=_appearanceType;
@property(nonatomic) __weak TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(nonatomic) double showY; // @synthesize showY=_showY;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(nonatomic) long long alignType; // @synthesize alignType=_alignType;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(retain, nonatomic) NSArray *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
- (void).cxx_destruct;
- (void)configLayoutPropertyWithDict:(id)arg1;
- (void)hideLayout:(id)arg1;
- (void)showLayout:(id)arg1;
- (void)registEvent;
- (void)heightChangedWithElement:(id)arg1 model:(id)arg2;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
- (id)position;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)calculateLayout;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (struct NSString *)layoutType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

