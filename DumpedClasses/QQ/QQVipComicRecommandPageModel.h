//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QQVipComicRecommandPageModel : NSObject
{
    long long _collectStatus;
    NSString *_comicID;
    NSString *_promptInfo;
    long long _status;
    NSArray *_recommandComicArr;
    NSString *_reportComicIDStr;
    long long _reportStatus;
}

@property(nonatomic) long long reportStatus; // @synthesize reportStatus=_reportStatus;
@property(retain, nonatomic) NSString *reportComicIDStr; // @synthesize reportComicIDStr=_reportComicIDStr;
@property(retain, nonatomic) NSArray *recommandComicArr; // @synthesize recommandComicArr=_recommandComicArr;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain, nonatomic) NSString *comicID; // @synthesize comicID=_comicID;
@property(nonatomic) long long collectStatus; // @synthesize collectStatus=_collectStatus;
- (void).cxx_destruct;
- (id)description;

@end

