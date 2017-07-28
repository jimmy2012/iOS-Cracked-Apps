//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMFilterItemDO, FMFilterTabBarView, FMSearchParameter;

@interface FMMyCityFilterBarView : UIView
{
    CDUnknownBlockType _filterResultBlock;
    FMSearchParameter *_searchParameter;
    FMFilterTabBarView *_filterTabBar;
    FMFilterItemDO *_locationTab;
    FMFilterItemDO *_categoryTab;
    FMFilterItemDO *_orderTab;
}

@property(retain, nonatomic) FMFilterItemDO *orderTab; // @synthesize orderTab=_orderTab;
@property(retain, nonatomic) FMFilterItemDO *categoryTab; // @synthesize categoryTab=_categoryTab;
@property(retain, nonatomic) FMFilterItemDO *locationTab; // @synthesize locationTab=_locationTab;
@property(retain, nonatomic) FMFilterTabBarView *filterTabBar; // @synthesize filterTabBar=_filterTabBar;
@property(nonatomic) __weak FMSearchParameter *searchParameter; // @synthesize searchParameter=_searchParameter;
@property(copy, nonatomic) CDUnknownBlockType filterResultBlock; // @synthesize filterResultBlock=_filterResultBlock;
- (void).cxx_destruct;
- (void)getOrderBys:(_Bool)arg1;
- (void)getCategoryTabInfo;
- (void)getCityTabInfo:(id)arg1;
- (void)setCityName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchParam:(id)arg2;

@end
