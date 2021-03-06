//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString, ONERequestAPI;

@interface ONECashRegisterPoller : NSObject
{
    long long _pollingCount;
    CDUnknownBlockType _pollSuccess;
    CDUnknownBlockType _pollFailure;
    CDUnknownBlockType _setParameterBlock;
    CDUnknownBlockType _shouldContinueBlock;
    NSString *_requestPath;
    NSString *_requestHost;
    NSObject<OS_dispatch_source> *_pollingTimer;
    ONERequestAPI *_currentRequestAPI;
    long long _pollingMaxTimes;
    double _pollingInterval;
}

@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) long long pollingMaxTimes; // @synthesize pollingMaxTimes=_pollingMaxTimes;
@property(retain, nonatomic) ONERequestAPI *currentRequestAPI; // @synthesize currentRequestAPI=_currentRequestAPI;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(copy, nonatomic) NSString *requestHost; // @synthesize requestHost=_requestHost;
@property(copy, nonatomic) NSString *requestPath; // @synthesize requestPath=_requestPath;
@property(copy, nonatomic) CDUnknownBlockType shouldContinueBlock; // @synthesize shouldContinueBlock=_shouldContinueBlock;
@property(copy, nonatomic) CDUnknownBlockType setParameterBlock; // @synthesize setParameterBlock=_setParameterBlock;
@property(copy, nonatomic) CDUnknownBlockType pollFailure; // @synthesize pollFailure=_pollFailure;
@property(copy, nonatomic) CDUnknownBlockType pollSuccess; // @synthesize pollSuccess=_pollSuccess;
@property(nonatomic) long long pollingCount; // @synthesize pollingCount=_pollingCount;
- (void).cxx_destruct;
- (void)stopPollWithResponse:(id)arg1 isSuccess:(_Bool)arg2;
- (void)handleSuccessResponse:(id)arg1 isSuccess:(_Bool)arg2;
- (void)requestWithMemberparameters;
- (void)PostPollingWithPollingMaxTimes:(long long)arg1 pollingInterval:(double)arg2 host:(id)arg3 path:(id)arg4 params:(CDUnknownBlockType)arg5 shouldContinue:(CDUnknownBlockType)arg6 success:(CDUnknownBlockType)arg7 failed:(CDUnknownBlockType)arg8;
- (void)cleanUpPolling;
- (void)dealloc;

@end

