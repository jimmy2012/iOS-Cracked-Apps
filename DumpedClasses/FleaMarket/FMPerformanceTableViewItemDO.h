//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface FMPerformanceTableViewItemDO : NSObject
{
    _Bool _hidden;
    long long _index;
    NSString *_name;
    NSString *_info;
    UIColor *_nameColor;
    UIColor *_infoColor;
}

@property(retain, nonatomic) UIColor *infoColor; // @synthesize infoColor=_infoColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)init;

@end

