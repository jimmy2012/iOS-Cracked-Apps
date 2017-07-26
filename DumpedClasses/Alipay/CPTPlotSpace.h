//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPTResponder.h"
#import "NSCoding.h"

@class CPTGraph, NSString;

@interface CPTPlotSpace : NSObject <CPTResponder, NSCoding>
{
    CPTGraph *graph;
    id <NSCopying><NSCoding><NSObject> identifier;
    id <CPTPlotSpaceDelegate> delegate;
    _Bool allowsUserInteraction;
}

@property(nonatomic) id <CPTPlotSpaceDelegate> delegate; // @synthesize delegate;
@property(nonatomic) CPTGraph *graph; // @synthesize graph;
@property(nonatomic) _Bool allowsUserInteraction; // @synthesize allowsUserInteraction;
@property(copy, nonatomic) id <NSCopying><NSCoding><NSObject> identifier; // @synthesize identifier;
- (_Bool)pointingDeviceCancelledEvent:(struct UIEvent *)arg1;
- (_Bool)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)scaleBy:(double)arg1 aboutPoint:(struct CGPoint)arg2;
- (void)scaleToFitPlots:(id)arg1;
- (int)scaleTypeForCoordinate:(int)arg1;
- (id)plotRangeForCoordinate:(int)arg1;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (void)doublePrecisionPlotPoint:(double *)arg1 forEvent:(struct UIEvent *)arg2;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 forEvent:(struct UIEvent *)arg2;
- (struct CGPoint)plotAreaViewPointForEvent:(struct UIEvent *)arg1;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (void)doublePrecisionPlotPoint:(double *)arg1 forPlotAreaViewPoint:(struct CGPoint)arg2;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 forPlotAreaViewPoint:(struct CGPoint)arg2;
- (struct CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (struct CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double *)arg1;
- (struct CGPoint)plotAreaViewPointForPlotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (struct CGPoint)plotAreaViewPointForPlotPoint:(CDStruct_6ece915e *)arg1;
@property(readonly, nonatomic) unsigned long long numberOfCoordinates; // @dynamic numberOfCoordinates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
