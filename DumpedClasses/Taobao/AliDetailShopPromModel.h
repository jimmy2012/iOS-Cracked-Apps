//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSArray<AliDetailShopPromGiftModel>, NSString;

@interface AliDetailShopPromModel : TBJSONModel
{
    NSString *_title;
    NSString *_iconText;
    NSString *_period;
    NSArray *_content;
    NSString *_actionUrl;
    NSArray<AliDetailShopPromGiftModel> *_giftOfContent;
    NSString *_activityId;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSArray<AliDetailShopPromGiftModel> *giftOfContent; // @synthesize giftOfContent=_giftOfContent;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *period; // @synthesize period=_period;
@property(copy, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
