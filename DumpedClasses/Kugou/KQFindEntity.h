//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KQFindEntity : NSObject
{
    NSMutableArray *_regions;
    NSMutableArray *_groups;
    long long _recommend_total;
    long long _region_total;
    long long _timestamp;
    long long _status;
}

+ (id)modelWithDict:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long region_total; // @synthesize region_total=_region_total;
@property(nonatomic) long long recommend_total; // @synthesize recommend_total=_recommend_total;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *regions; // @synthesize regions=_regions;
- (void).cxx_destruct;
- (id)initModelWithDict:(id)arg1;

@end
