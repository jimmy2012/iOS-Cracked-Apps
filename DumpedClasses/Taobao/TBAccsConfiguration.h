//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBAccsConfiguration : NSObject
{
    NSString *_appkey;
    NSString *_appKeyEncode;
    NSString *_sign;
    NSString *_deviceID;
    NSMutableDictionary *_requestBaseParameters;
}

@property(retain, nonatomic) NSMutableDictionary *requestBaseParameters; // @synthesize requestBaseParameters=_requestBaseParameters;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *appKeyEncode; // @synthesize appKeyEncode=_appKeyEncode;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (id)init;

@end
