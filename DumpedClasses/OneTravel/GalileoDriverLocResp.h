//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GalileoDriverLocResp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(nonatomic) int errorno; // @dynamic errorno;
@property(nonatomic) _Bool hasErrmsg; // @dynamic hasErrmsg;
@property(nonatomic) _Bool hasErrorno; // @dynamic hasErrorno;
@property(nonatomic) _Bool hasResp; // @dynamic hasResp;
@property(nonatomic) _Bool hasServerTime; // @dynamic hasServerTime;
@property(copy, nonatomic) NSString *resp; // @dynamic resp;
@property(nonatomic) long long serverTime; // @dynamic serverTime;

@end
