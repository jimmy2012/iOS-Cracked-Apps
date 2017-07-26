//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WVPriorityQueue : NSObject
{
    unsigned long long _count;
    NSMutableArray *_items;
    CDUnknownBlockType _comparator;
}

@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)removeByPredicate:(CDUnknownBlockType)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end
