//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSString;

@interface EZUrlCache : NSObject
{
    _Bool _isDiskCache;
    NSCache *_nsCache;
    NSString *_cachePath;
}

+ (id)shareCache;
@property(nonatomic) _Bool isDiskCache; // @synthesize isDiskCache=_isDiskCache;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSCache *nsCache; // @synthesize nsCache=_nsCache;
- (void).cxx_destruct;
- (void)handleMemoryWarning;
- (void)dealloc;
- (void)removeValueForUrl:(id)arg1;
- (id)valueForUrl:(id)arg1;
- (void)addUrl:(id)arg1 AndValue:(id)arg2;
- (void)initMemoryCache;
- (_Bool)initCacheDisk;
- (id)init;

@end

