//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHybridContainerViewController.h"

#import "NVMTabBarTappingAware.h"

@class NSString;

@interface NVMDiscoveryViewController : NVMHybridContainerViewController <NVMTabBarTappingAware>
{
    double _lastRefreshingTimestamp;
}

@property(nonatomic) double lastRefreshingTimestamp; // @synthesize lastRefreshingTimestamp=_lastRefreshingTimestamp;
- (void)onSingleTapAgainWhenAlreadyDisplayed;
- (void)refreshIfNeeded;
- (_Bool)shouldRefresh;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

