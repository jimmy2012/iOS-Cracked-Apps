//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXBridgeProtocol.h"

@class JSContext, JSValue, NSMutableArray, NSMutableDictionary, NSString;

@interface WXJSCoreBridge : NSObject <WXBridgeProtocol>
{
    JSContext *_jsContext;
    NSMutableArray *_timers;
    NSMutableDictionary *_callbacks;
}

@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableArray *timers; // @synthesize timers=_timers;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (void)triggerClearTimeout:(id)arg1;
- (void)triggerClearInterval:(id)arg1 ret:(id)arg2 arg:(id)arg3;
- (void)triggerInterval:(id)arg1 ret:(id)arg2 arg:(id)arg3;
- (void)triggerTimeout:(id)arg1 ret:(id)arg2 arg:(id)arg3;
- (void)callBackInterval:(id)arg1;
- (void)callBack:(id)arg1;
- (void)triggerTimeout:(CDUnknownBlockType)arg1;
- (void)addInstance:(id)arg1 callback:(id)arg2;
- (void)removeTimers:(id)arg1;
- (void)garbageCollect;
- (void)resetEnvironment;
@property(readonly, nonatomic) JSValue *exception;
- (void)registerCallNativeComponent:(CDUnknownBlockType)arg1;
- (void)registerCallNativeModule:(CDUnknownBlockType)arg1;
- (void)registerCallAddElement:(CDUnknownBlockType)arg1;
- (void)executeJavascript:(id)arg1;
- (void)registerCallNative:(CDUnknownBlockType)arg1;
- (id)callJSMethod:(id)arg1 args:(id)arg2;
- (void)executeJSFramework:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
