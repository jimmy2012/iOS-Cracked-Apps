//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLConnection, NSURLRequest, NWPolicyResult;

@interface NWHttpDetector : NSObject
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NWPolicyResult *_policy;
    NSString *_scheme;
    NSString *_key;
}

+ (void)start:(id)arg1 withScheme:(id)arg2;
+ (id)currentPolicyKey:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NWPolicyResult *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)start;
- (id)currentUrlText;
- (id)initWithPolicy:(id)arg1 withScheme:(id)arg2;

@end
