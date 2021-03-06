//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GrowingNodeAsyncNativeHandler.h"

@class NSDictionary, NSMutableDictionary, NSString, UIScrollView, UIView, UIViewController, UIWebView;

@interface GrowingJavascriptCore : NSObject <GrowingNodeAsyncNativeHandler>
{
    _Bool _responsive;
    _Bool _isCircleOnlyJavascriptContentLoaded;
    UIWebView *_uiWebView;
    UIView *_wkWebView;
    UIView *_webView;
    UIViewController *_hostViewController;
    NSString *_xPathInHost;
    long long _keyIndexInHost;
    NSDictionary *_pageData;
    unsigned long long _sequenceId;
    NSMutableDictionary *_callbackCache;
    struct CGPoint _lastPoint;
}

+ (_Bool)parseJointField:(id)arg1 toFieldA:(id)arg2 toFieldB:(id)arg3;
+ (id)jointField:(id)arg1 withField:(id)arg2;
+ (_Bool)isWKWebView:(id)arg1;
+ (Class)WKWebViewClass;
+ (id)getGrowingBuiltInCircleOnlyJavascriptAddress;
+ (id)getGrowingBuiltInJavascriptAddress;
+ (void)allWebViewExecuteJavascriptMethod:(id)arg1 andParameters:(id)arg2;
+ (void)addGlobalNewJSCore:(id)arg1;
@property(nonatomic) _Bool isCircleOnlyJavascriptContentLoaded; // @synthesize isCircleOnlyJavascriptContentLoaded=_isCircleOnlyJavascriptContentLoaded;
@property(retain, nonatomic) NSMutableDictionary *callbackCache; // @synthesize callbackCache=_callbackCache;
@property(nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(nonatomic, getter=isResponsive) _Bool responsive; // @synthesize responsive=_responsive;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) NSDictionary *pageData; // @synthesize pageData=_pageData;
@property(nonatomic) long long keyIndexInHost; // @synthesize keyIndexInHost=_keyIndexInHost;
@property(copy, nonatomic) NSString *xPathInHost; // @synthesize xPathInHost=_xPathInHost;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(readonly, nonatomic) __weak UIView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) __weak UIView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(readonly, nonatomic) __weak UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
- (void).cxx_destruct;
- (void)setCircledTags:(id)arg1 onFinish:(CDUnknownBlockType)arg2;
- (id)parseNode:(id)arg1;
- (id)getAllNodesFromCallbackDictionary:(id)arg1;
- (id)getPageDataFromCallbackDictionary:(id)arg1;
- (id)stringByAddingLocalDir:(id)arg1;
- (id)stringByRemovingLocalDir:(id)arg1;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
- (_Bool)parseJointField:(id)arg1 toFieldA:(id)arg2 toFieldB:(id)arg3;
- (id)jointField:(id)arg1 withField:(id)arg2;
- (void)getPageInfoWithCallback:(CDUnknownBlockType)arg1;
- (void)getAllNode:(CDUnknownBlockType)arg1;
- (void)impressAllChildren;
- (void)cancelHighlight;
- (void)findNodeAtPoint:(struct CGPoint)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)highlightElementAtPoint:(struct CGPoint)arg1;
- (void)handleCustomEventCallback:(id)arg1;
- (void)handleClickCallback:(id)arg1;
- (void)handleImpressionCallback:(id)arg1;
- (void)handlePageCallback:(id)arg1;
- (void)handleCallback:(id)arg1;
- (_Bool)handleWKWebViewCallback:(id)arg1;
- (_Bool)handleUIWebViewCallback:(id)arg1;
- (void)executeHelloJavascript;
- (void)executeBuiltInJavascript;
- (void)executeJavascript:(id)arg1 force:(_Bool)arg2 onFinish:(CDUnknownBlockType)arg3;
- (void)executeJavascript:(id)arg1 force:(_Bool)arg2;
- (void)executeJavascript:(id)arg1 onFinish:(CDUnknownBlockType)arg2;
- (void)executeJavascript:(id)arg1;
- (void)executeJavascriptMethod:(id)arg1 andParameters:(id)arg2 withCallback:(CDUnknownBlockType)arg3 force:(_Bool)arg4;
- (void)executeJavascriptMethod:(id)arg1 andParameters:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)executeSyncJavascript:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)onPageLoaded;
- (void)refreshContext;
- (void)assignBuiltInJavascript;
- (void)privateInit;
- (id)initWithWKWebView:(id)arg1;
- (id)initWithUIWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

