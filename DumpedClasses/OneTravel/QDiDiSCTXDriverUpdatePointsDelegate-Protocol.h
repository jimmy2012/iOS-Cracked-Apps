//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, RouteResult;

@protocol QDiDiSCTXDriverUpdatePointsDelegate <NSObject>
- (void)sctxNotifyNavRouteSearchDidFailWithError:(NSError *)arg1;
- (void)sctxNotifyNavRouteSearchResult:(RouteResult *)arg1;
- (void)QDiDiSCTXDriverUpdatePointRoutefirst:(struct CLLocationCoordinate2D)arg1 RouteLastPoint:(struct CLLocationCoordinate2D)arg2;
@end
