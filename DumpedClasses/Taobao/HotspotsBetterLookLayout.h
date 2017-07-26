//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HotspotsLayout.h"
#import "Knapsack01Deletage.h"

@class NSString, SearchHotspotView, UIFont;

@interface HotspotsBetterLookLayout : NSObject <Knapsack01Deletage, HotspotsLayout>
{
    UIFont *_titleFont;
    SearchHotspotView *_hotspotsView;
}

@property(nonatomic) __weak SearchHotspotView *hotspotsView; // @synthesize hotspotsView=_hotspotsView;
- (void).cxx_destruct;
- (double)knapsack:(id)arg1 evaluateValueForObj:(id)arg2;
- (double)knapsack:(id)arg1 evaluateCostForObj:(id)arg2;
- (void)layoutHotspots:(id)arg1 maxLine:(long long)arg2 eachLineCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
