//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface CheckEligibleDeliveryResponse : CTBusinessBean
{
    int _result;
    NSString *_resultMessage;
    NSMutableArray *_eligibleDeliveryTypeList;
}

@property(retain, nonatomic) NSMutableArray *eligibleDeliveryTypeList; // @synthesize eligibleDeliveryTypeList=_eligibleDeliveryTypeList;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
