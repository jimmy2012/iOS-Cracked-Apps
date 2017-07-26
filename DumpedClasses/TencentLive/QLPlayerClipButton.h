//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface QLPlayerClipButton : UIView
{
    UIButton *_clipButton;
    UILabel *_numberLabel;
    UIButton *_narowView;
    UIImageView *_backgroundView;
    int _photoNumber;
}

+ (id)buttonWithBackgroundImage:(id)arg1 tag:(int)arg2;
@property(nonatomic) int photoNumber; // @synthesize photoNumber=_photoNumber;
@property(retain, nonatomic) UIButton *clipButton; // @synthesize clipButton=_clipButton;
- (void).cxx_destruct;
- (void)relayout;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)addSendTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withBackgroundImage:(id)arg2;

@end
