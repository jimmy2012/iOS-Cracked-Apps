//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface SOfoRequestError : NSObject
{
    long long _code;
    long long _statusCode;
    NSString *_title;
    NSString *_message;
    NSError *_error;
}

+ (id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 title:(id)arg3 message:(id)arg4 error:(id)arg5;
+ (id)error;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
