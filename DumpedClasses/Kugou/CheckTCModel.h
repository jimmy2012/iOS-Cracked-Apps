//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTCModel.h"

@class NSNumber, NSObject, NSString;

@interface CheckTCModel : BaseTCModel
{
    NSObject *_data;
    NSNumber *_callNumber;
    NSString *_productId;
    NSString *_subscribeTime;
    NSString *_unsubscrobeTime;
    NSNumber *_state;
}

@property(nonatomic) NSNumber *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *unsubscrobeTime; // @synthesize unsubscrobeTime=_unsubscrobeTime;
@property(copy, nonatomic) NSString *subscribeTime; // @synthesize subscribeTime=_subscribeTime;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSNumber *callNumber; // @synthesize callNumber=_callNumber;
@property(copy, nonatomic) NSObject *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end
