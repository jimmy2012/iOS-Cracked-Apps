//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TRAirportGuideModel : TRBaseModel
{
    NSNumber<Optional> *_show;
    NSNumber<Optional> *_guide;
    NSString<Optional> *_title;
    NSString<Optional> *_info_url;
    NSString<Optional> *_tips;
    NSString<Optional> *_service_time;
    NSNumber<Optional> *_selected;
}

@property(retain, nonatomic) NSNumber<Optional> *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString<Optional> *service_time; // @synthesize service_time=_service_time;
@property(retain, nonatomic) NSString<Optional> *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString<Optional> *info_url; // @synthesize info_url=_info_url;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *guide; // @synthesize guide=_guide;
@property(retain, nonatomic) NSNumber<Optional> *show; // @synthesize show=_show;
- (void).cxx_destruct;

@end
