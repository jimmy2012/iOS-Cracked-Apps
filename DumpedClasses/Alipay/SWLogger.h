//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPTrackModel, NSString;

@interface SWLogger : NSObject
{
    _Bool _shouldUpload;
    MQPTrackModel *_track;
    NSString *_bizPrefix;
    NSString *_uid;
}

+ (void)logPageShow:(id)arg1;
+ (void)logProgressEnd:(id)arg1;
+ (id)logProgress:(id)arg1;
+ (void)logExceptionCode:(id)arg1 andDesc:(id)arg2 andData:(id)arg3;
+ (void)logExceptionCode:(id)arg1 andDesc:(id)arg2;
@property(nonatomic) _Bool shouldUpload; // @synthesize shouldUpload=_shouldUpload;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *bizPrefix; // @synthesize bizPrefix=_bizPrefix;
@property(retain, nonatomic) MQPTrackModel *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)logPageShow:(id)arg1 fromPage:(id)arg2;
- (void)logProgressEnd:(id)arg1;
- (id)logProgress:(id)arg1;
- (void)logExceptionCode:(id)arg1 andDesc:(id)arg2 andData:(id)arg3;
- (id)initWithBiz:(long long)arg1;

@end

