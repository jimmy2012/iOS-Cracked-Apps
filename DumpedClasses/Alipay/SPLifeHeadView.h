//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIControl, UIImageView, UILabel;

@interface SPLifeHeadView : UIView
{
    UIControl *_headControl;
    UIImageView *_headView;
    UILabel *_nameLabel;
    NSDictionary *_appData;
    CDUnknownBlockType _headTapCallback;
}

@property(copy, nonatomic) CDUnknownBlockType headTapCallback; // @synthesize headTapCallback=_headTapCallback;
@property(retain, nonatomic) NSDictionary *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIControl *headControl; // @synthesize headControl=_headControl;
- (void).cxx_destruct;
- (void)onHeadTap:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
