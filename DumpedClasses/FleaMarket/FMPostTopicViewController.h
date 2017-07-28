//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMFishpondDO, FMFishpondPostTopicView, UIButton;

@interface FMPostTopicViewController : FMBaseViewController
{
    UIButton *_hideKeyboardButton;
    float _contentOffsetHeight;
    double _intervalAnimationDuration;
    FMFishpondDO *_fishpondDO;
    FMFishpondPostTopicView *_topicView;
}

@property(retain, nonatomic) FMFishpondPostTopicView *topicView; // @synthesize topicView=_topicView;
@property(retain, nonatomic) FMFishpondDO *fishpondDO; // @synthesize fishpondDO=_fishpondDO;
- (void).cxx_destruct;
- (void)$$scrollContentView:(id)arg1;
- (void)hideKeyboardButton:(double)arg1;
- (void)showHideKeyboardButton:(double)arg1 keyboard:(struct CGRect)arg2;
- (void)scrollContentViewReset:(double)arg1;
- (void)scrollContentView4Keyboard:(double)arg1 keyboard:(struct CGRect)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)hideKeyboard;
- (void)initHideKeyboardButton;
- (_Bool)validateTopic:(id)arg1;
- (void)setTitleToFishpond;
- (void)rightAction:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end
