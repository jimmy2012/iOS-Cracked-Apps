//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIView<BWA_NJKWebViewProgressViewProtocol>;

@interface BWA_NJKWebViewProgress : NSObject <UIWebViewDelegate>
{
    _Bool _interactive;
    float _progress;
    UIView<BWA_NJKWebViewProgressViewProtocol> *_progressView;
    id <UIWebViewDelegate> _webViewProxy;
    unsigned long long _loadingCount;
    unsigned long long _maxLoadCount;
    NSURL *_currentURL;
}

@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) unsigned long long maxLoadCount; // @synthesize maxLoadCount=_maxLoadCount;
@property(nonatomic) unsigned long long loadingCount; // @synthesize loadingCount=_loadingCount;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewProxy; // @synthesize webViewProxy=_webViewProxy;
@property(retain, nonatomic) UIView<BWA_NJKWebViewProgressViewProtocol> *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)checkIfRPCURL:(id)arg1;
- (void)reset;
- (void)completeProgress;
- (void)incrementProgress;
- (void)startProgress;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
