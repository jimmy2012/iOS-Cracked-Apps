//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DRCLocInfoConfig : JSONModel
{
    NSString *_name_fetch_poi;
    NSString *_desc_fetch_poi;
    NSString *_name_fetch_sp;
    NSString *_desc_fetch_sp;
    NSString *_name_return_poi;
    NSString *_desc_return_poi;
    NSString *_name_return_sp;
    NSString *_desc_return_sp;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *desc_return_sp; // @synthesize desc_return_sp=_desc_return_sp;
@property(copy, nonatomic) NSString *name_return_sp; // @synthesize name_return_sp=_name_return_sp;
@property(copy, nonatomic) NSString *desc_return_poi; // @synthesize desc_return_poi=_desc_return_poi;
@property(copy, nonatomic) NSString *name_return_poi; // @synthesize name_return_poi=_name_return_poi;
@property(copy, nonatomic) NSString *desc_fetch_sp; // @synthesize desc_fetch_sp=_desc_fetch_sp;
@property(copy, nonatomic) NSString *name_fetch_sp; // @synthesize name_fetch_sp=_name_fetch_sp;
@property(copy, nonatomic) NSString *desc_fetch_poi; // @synthesize desc_fetch_poi=_desc_fetch_poi;
@property(copy, nonatomic) NSString *name_fetch_poi; // @synthesize name_fetch_poi=_name_fetch_poi;
- (void).cxx_destruct;
- (id)initWithFetchReturnConfigs:(id)arg1;

@end

