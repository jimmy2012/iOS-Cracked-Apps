//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APSCDAOMethodCounter : NSObject
{
    double _allCost;
    double _maxCost;
    unsigned int _invocationCount;
    unsigned int _mainThreadCount;
    unsigned int _bootupCount;
    unsigned int _failureCount;
    NSMutableDictionary *_failureCodes;
}

- (void).cxx_destruct;
- (void)increaseCode:(long long)arg1;
- (void)reset;

@end

