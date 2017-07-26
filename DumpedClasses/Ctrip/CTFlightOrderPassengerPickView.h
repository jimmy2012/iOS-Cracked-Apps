//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CTFlightOrderPassengerPickView : UIView
{
    _Bool _interNationaled;
    _Bool _isWaitingOrder;
    int _policyCheckFlag;
    id <CTFlightOrderPassengerPickViewDelegate> _pickDelegate;
    long long _maxSelectedCount;
    long long _maxTicketsCount;
}

+ (double)setupPickView:(id)arg1 withCacheBean:(id)arg2;
@property(nonatomic) _Bool isWaitingOrder; // @synthesize isWaitingOrder=_isWaitingOrder;
@property(nonatomic) _Bool interNationaled; // @synthesize interNationaled=_interNationaled;
@property(nonatomic) long long maxTicketsCount; // @synthesize maxTicketsCount=_maxTicketsCount;
@property(nonatomic) long long maxSelectedCount; // @synthesize maxSelectedCount=_maxSelectedCount;
@property(nonatomic) int policyCheckFlag; // @synthesize policyCheckFlag=_policyCheckFlag;
@property(nonatomic) __weak id <CTFlightOrderPassengerPickViewDelegate> pickDelegate; // @synthesize pickDelegate=_pickDelegate;
- (void).cxx_destruct;
- (void)showMaxTicketsCountAlert;
- (void)showMaxSelectedCountAlert;
- (void)onTapPassengerItemView:(id)arg1;

@end
