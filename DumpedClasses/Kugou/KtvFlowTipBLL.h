//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSLock, NSString;

@interface KtvFlowTipBLL : NSObject <UIAlertViewDelegate>
{
    _Bool _isAsking;
    NSLock *_askLock;
    CDUnknownBlockType _selectedHandleBlock;
}

+ (id)share;
@property(copy, nonatomic) CDUnknownBlockType selectedHandleBlock; // @synthesize selectedHandleBlock=_selectedHandleBlock;
@property(nonatomic) _Bool isAsking; // @synthesize isAsking=_isAsking;
@property(retain, nonatomic) NSLock *askLock; // @synthesize askLock=_askLock;
- (void).cxx_destruct;
- (void)goToUnicomHtml;
- (_Bool)canUseBigFlow;
- (_Bool)canUseSIMDataFlow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)showInteractionViewIfNeed:(CDUnknownBlockType)arg1 withSelectedBlock:(CDUnknownBlockType)arg2 title:(id)arg3 cancelButtonTitle:(id)arg4 ensureButtonTitles:(id)arg5 freeFlowButtonTitles:(id)arg6;
- (void)setHadAgree:(_Bool)arg1;
- (_Bool)isHadAgree;
- (_Bool)isNetMonthlyPayment;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
