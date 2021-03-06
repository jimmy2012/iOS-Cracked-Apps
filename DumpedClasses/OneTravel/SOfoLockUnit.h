//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLockCom.h"

@class SOfoCardView, SOfoLockInterfaceView, UIView;

@interface SOfoLockUnit : SLockCom
{
    UIView *_containerView;
    UIView *_lockContainerView;
    SOfoLockInterfaceView *_lockInterfaceView;
    UIView *_lockView;
    SOfoCardView *_cardView;
}

@property(retain, nonatomic) SOfoCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIView *lockView; // @synthesize lockView=_lockView;
@property(retain, nonatomic) SOfoLockInterfaceView *lockInterfaceView; // @synthesize lockInterfaceView=_lockInterfaceView;
@property(retain, nonatomic) UIView *lockContainerView; // @synthesize lockContainerView=_lockContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)dataSource;
- (_Bool)isOfflineLock;
- (id)cardDesp;
- (id)cardText;
- (id)cardWarning;
- (id)plate;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (double)lockViewHeight;
- (void)updateLockWithOrderDict:(id)arg1;
- (_Bool)handleLockModel:(id)arg1;
- (void)initLockView;
- (id)viewForContainerView:(id)arg1 expand:(_Bool)arg2;
- (void)bind:(id)arg1;

@end

