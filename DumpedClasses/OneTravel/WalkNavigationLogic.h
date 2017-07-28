//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMConnectionItemDelegate.h"

@class CLLocation, JsonRoute, NSMutableArray, NSString, QMMapView;

@interface WalkNavigationLogic : NSObject <QMConnectionItemDelegate>
{
    JsonRoute *_routeResult;
    _Bool _voiceOn;
    _Bool _navigating;
    _Bool _firstEnterBackground;
    _Bool _deviating;
    _Bool _isReCalculating;
    id <WalkNavigationLogicDelegate> _delegate;
    unsigned long long _distancePassed;
    double _timeStartWalk;
    QMMapView *_mapView;
    long long _lineWidth;
    void *_rgHandle;
    struct _WalkGuiderMapPoint *_mapPoints;
    unsigned long long _mapPointCount;
    CLLocation *_lastFixedLocation;
    NSMutableArray *_gpsArray;
    long long _failedNum;
    NSString *_curRoueId;
    NSString *_roueId;
}

@property(retain, nonatomic) NSString *roueId; // @synthesize roueId=_roueId;
@property(retain, nonatomic) NSString *curRoueId; // @synthesize curRoueId=_curRoueId;
@property(nonatomic) long long failedNum; // @synthesize failedNum=_failedNum;
@property(nonatomic) _Bool isReCalculating; // @synthesize isReCalculating=_isReCalculating;
@property(retain, nonatomic) NSMutableArray *gpsArray; // @synthesize gpsArray=_gpsArray;
@property(nonatomic) _Bool deviating; // @synthesize deviating=_deviating;
@property(retain, nonatomic) CLLocation *lastFixedLocation; // @synthesize lastFixedLocation=_lastFixedLocation;
@property(nonatomic) unsigned long long mapPointCount; // @synthesize mapPointCount=_mapPointCount;
@property(nonatomic) struct _WalkGuiderMapPoint *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(nonatomic) void *rgHandle; // @synthesize rgHandle=_rgHandle;
@property(nonatomic) long long lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) QMMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool firstEnterBackground; // @synthesize firstEnterBackground=_firstEnterBackground;
@property(nonatomic) double timeStartWalk; // @synthesize timeStartWalk=_timeStartWalk;
@property(readonly, nonatomic) unsigned long long distancePassed; // @synthesize distancePassed=_distancePassed;
@property(readonly, nonatomic) _Bool navigating; // @synthesize navigating=_navigating;
@property(nonatomic) __weak id <WalkNavigationLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool voiceOn; // @synthesize voiceOn=_voiceOn;
- (void).cxx_destruct;
- (void)removeWalkTipAnnotation;
- (void)addWalkTipAnnotationWithJsonRoute:(id)arg1;
- (struct MapIconInfo)itemForRouteWalkSegment:(id)arg1 points:(id)arg2;
- (CDStruct_c3b9c2ee)tipMapPointForRouteWalkSegment:(id)arg1 points:(id)arg2;
- (id)tipImageNameForTipType:(int)arg1;
- (id)walkSegmentForRoute:(id)arg1;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)reCalcuteRoute;
- (void)updateWalkNavigationUIWithLocation:(id)arg1;
- (id)walkNavigationGpsArray;
- (_Bool)findIndexWithPointIndex:(long long)arg1 walkSegmentIndex:(long long *)arg2 walkSegmentEndIndex:(long long *)arg3 isSegmentLastPoint:(_Bool *)arg4 segmentCourse:(float *)arg5;
- (void)arrive;
- (void)deviate;
- (_Bool)speak:(id)arg1;
- (void)shake;
- (void)cancel;
- (void)updateLocation:(id)arg1 lon:(double *)arg2 lat:(double *)arg3 course:(double *)arg4;
- (_Bool)changeRoute:(id)arg1;
- (void)stop;
- (_Bool)startWithResult:(id)arg1;
- (void)start;
@property(readonly, nonatomic) unsigned long long totalDistance;
@property(readonly, nonatomic) double walkTime;
- (void)setRouteResult:(id)arg1;
- (id)routeResult;
- (void)dealloc;
- (_Bool)showRouteWithJsonRoute:(id)arg1;
- (void)prepare;
- (void)clear;
- (id)initWithMapView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
