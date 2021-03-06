//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPTransferSegmentModel, NSArray, NSString;

@interface DGPTransferViewModel : NSObject
{
    DGPTransferSegmentModel *_segment;
    long long _transitIndex;
    long long _segmentIndex;
    NSString *_name;
    NSString *_departStopName;
    NSString *_arrivalStopName;
    NSString *_terminalStationName;
    NSArray *_otherLineArray;
    NSString *_firstTime;
    NSString *_lastTime;
    NSArray *_viaStops;
    long long _routeStopCount;
    NSString *_cardColor;
}

@property(retain, nonatomic) NSString *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) long long routeStopCount; // @synthesize routeStopCount=_routeStopCount;
@property(retain, nonatomic) NSArray *viaStops; // @synthesize viaStops=_viaStops;
@property(retain, nonatomic) NSString *lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *firstTime; // @synthesize firstTime=_firstTime;
@property(retain, nonatomic) NSArray *otherLineArray; // @synthesize otherLineArray=_otherLineArray;
@property(retain, nonatomic) NSString *terminalStationName; // @synthesize terminalStationName=_terminalStationName;
@property(retain, nonatomic) NSString *arrivalStopName; // @synthesize arrivalStopName=_arrivalStopName;
@property(retain, nonatomic) NSString *departStopName; // @synthesize departStopName=_departStopName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) long long transitIndex; // @synthesize transitIndex=_transitIndex;
@property(retain, nonatomic) DGPTransferSegmentModel *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (void)setupData;
- (id)initWithSegment:(id)arg1;

@end

