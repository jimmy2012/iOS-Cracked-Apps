//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

@interface MVSegmentLayoutBlock : NSObject
{
    unsigned long long _index;
    NSString *_title;
    UIFont *_titleFont;
    struct CGRect _frame;
}

@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end
