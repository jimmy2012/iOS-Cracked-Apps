//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBAnimationView, UILabel;

@interface TBShopPullHintView : UIView
{
    double _animatePercent;
    UILabel *_textLabel;
    TBAnimationView *_pullProgressView;
}

@property(retain, nonatomic) TBAnimationView *pullProgressView; // @synthesize pullProgressView=_pullProgressView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double animatePercent; // @synthesize animatePercent=_animatePercent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *hintText; // @dynamic hintText;

@end

