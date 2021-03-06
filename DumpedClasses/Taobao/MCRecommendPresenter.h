//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCRecommandViewDelegate.h"
#import "MCRecommendModelDelegate.h"

@class NSString, UIView<MCRecommandViewProtocol>;

@interface MCRecommendPresenter : MCBasePresenter <MCRecommandViewDelegate, MCRecommendModelDelegate>
{
    UIView<MCRecommandViewProtocol> *_recommendView;
    id <MCRecommendModelProtocol> _recommendModel;
    NSString *_pageName;
    id <MCRecommendPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <MCRecommendPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) id <MCRecommendModelProtocol> recommendModel; // @synthesize recommendModel=_recommendModel;
@property(retain, nonatomic) UIView<MCRecommandViewProtocol> *recommendView; // @synthesize recommendView=_recommendView;
- (void).cxx_destruct;
- (id)groupViewObjectFromDataObject:(id)arg1;
- (void)recommendModel:(id)arg1 uniqueId:(id)arg2 subcribeResult:(_Bool)arg3 error:(id)arg4;
- (void)recommendModel:(id)arg1 recommendData:(id)arg2;
- (void)recommandView:(id)arg1 displayedInScreenIndexs:(id)arg2 isList:(_Bool)arg3;
- (void)recommandView:(id)arg1 clickAtGroup:(long long)arg2 clickAtItemSubscribe:(long long)arg3;
- (void)recommandView:(id)arg1 clickAtGroup:(long long)arg2 clickAtItemIcon:(long long)arg3;
- (void)unLoad:(id)arg1;
- (void)load:(id)arg1;
- (void)refreshDataAndUI;
- (void)viewDidLoad;
- (id)getView;
- (id)initWithFrame:(struct CGRect)arg1 baseVC:(id)arg2 bizKey:(id)arg3 pageName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

