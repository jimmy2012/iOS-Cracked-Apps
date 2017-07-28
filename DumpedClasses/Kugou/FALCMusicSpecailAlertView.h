//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FALCMusicSpecailContentView;

@interface FALCMusicSpecailAlertView : UIView
{
    CDUnknownBlockType _cancleBlcok;
    CDUnknownBlockType _confirmBlcok;
    id <FALCMusicSpecailAlertViewDelegate> _delegate;
    FALCMusicSpecailContentView *_taskView;
    UIView *_tapView;
}

@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) FALCMusicSpecailContentView *taskView; // @synthesize taskView=_taskView;
@property(nonatomic) __weak id <FALCMusicSpecailAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType confirmBlcok; // @synthesize confirmBlcok=_confirmBlcok;
@property(copy, nonatomic) CDUnknownBlockType cancleBlcok; // @synthesize cancleBlcok=_cancleBlcok;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showWithName:(id)arg1 andNumber:(long long)arg2 isInstalled:(_Bool)arg3;
- (void)tapTheView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
