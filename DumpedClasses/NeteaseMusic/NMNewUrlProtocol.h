//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSString, NSThread, NSURLSession, NSURLSessionDataTask;

@interface NMNewUrlProtocol : NSURLProtocol <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_session;
    NSThread *_clientThread;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
- (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (_Bool)useClientThread;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (void)cancelRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
