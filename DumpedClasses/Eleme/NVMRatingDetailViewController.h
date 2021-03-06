//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, NVMFoodImage, UIScrollView, UIView;

@interface NVMRatingDetailViewController : NVMViewController <UIGestureRecognizerDelegate>
{
    UIScrollView *_backgroundView;
    NVMFoodImage *_foodImage;
    double _time;
    UIView *_detailView;
    NSString *_timeString;
}

@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NVMFoodImage *foodImage; // @synthesize foodImage=_foodImage;
@property(retain, nonatomic) UIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)image;
- (void)addShadowToContent;
- (_Bool)isNormalRatingText;
- (id)ratingText;
- (struct CGSize)ratingTextheight;
- (void)addDetails;
- (void)loadViews;
- (void)loadBackgroundView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismiss:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)addTapGesture;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

