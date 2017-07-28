//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseRequest.h"

@class TaxiOrderData;

@interface TaxiCreateOrderRequest : TaxiBaseRequest
{
    _Bool _isRecall;
    TaxiOrderData *_orderData;
}

@property(nonatomic) _Bool isRecall; // @synthesize isRecall=_isRecall;
@property(retain, nonatomic) TaxiOrderData *orderData; // @synthesize orderData=_orderData;
- (void).cxx_destruct;
- (void)setNoNilParam:(id)arg1 forKey:(id)arg2;
- (id)userTypeWithIsElder:(_Bool)arg1 isHelpToCall:(_Bool)arg2 isOnePrice:(_Bool)arg3;
- (id)sourceTypeWithEntityModel:(id)arg1;
- (void)helperSetRemarkCarInfo;
- (void)helperSetCarpool:(id)arg1;
- (void)helperSetOnePrice:(id)arg1;
- (void)helperSetDynamicPrice:(id)arg1;
- (void)helperSetSceneInfo;
- (void)helperSetTo;
- (void)helperSetFrom;
- (void)helperSetOrderBaseInfo;
- (void)helperSetUserType;
- (id)methodName;
- (Class)className;
- (id)pathName;
- (id)initOrder:(id)arg1 isRecall:(_Bool)arg2;
- (id)initRecallOrder:(id)arg1 recallSource:(id)arg2;
- (id)initOrder:(id)arg1;

@end
