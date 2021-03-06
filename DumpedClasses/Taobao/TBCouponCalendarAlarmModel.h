//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBJSONFormatProtocol.h"

@class NSString;

@interface TBCouponCalendarAlarmModel : NSObject <TBJSONFormatProtocol>
{
    _Bool _editable;
    NSString *_eventId;
    NSString *_sourceId;
    NSString *_title;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_link;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)jsonFormObject;
- (_Bool)parseFromJSON:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

