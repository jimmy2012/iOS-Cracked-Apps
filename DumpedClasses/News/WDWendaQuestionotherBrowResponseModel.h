//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<WDAnswerStructModel>, NSNumber, NSString<Optional>;

@interface WDWendaQuestionotherBrowResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    NSArray<WDAnswerStructModel> *_ans_list;
    NSNumber *_offset;
    NSNumber *_has_more;
}

@property(retain, nonatomic) NSNumber *has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSArray<WDAnswerStructModel> *ans_list; // @synthesize ans_list=_ans_list;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

