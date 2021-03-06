//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString, NSString<Optional>;

@interface FRTtdiscussV2RepostRepostRequestModel : TTRequestModel
{
    NSString *_content;
    NSNumber *_repost_type;
    NSString<Optional> *_content_rich_span;
    NSString<Optional> *_fw_user_id;
    NSString<Optional> *_opt_item_id;
    NSString<Optional> *_opt_group_id;
    NSString<Optional> *_opt_comment_id;
    NSString<Optional> *_opt_reply_id;
    NSString<Optional> *_opt_thread_id;
    NSString<Optional> *_item_id;
    NSString<Optional> *_group_id;
    NSString<Optional> *_comment_id;
    NSString<Optional> *_thread_id;
    NSString<Optional> *_cover_uri;
}

@property(retain, nonatomic) NSString<Optional> *cover_uri; // @synthesize cover_uri=_cover_uri;
@property(retain, nonatomic) NSString<Optional> *thread_id; // @synthesize thread_id=_thread_id;
@property(retain, nonatomic) NSString<Optional> *comment_id; // @synthesize comment_id=_comment_id;
@property(retain, nonatomic) NSString<Optional> *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSString<Optional> *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString<Optional> *opt_thread_id; // @synthesize opt_thread_id=_opt_thread_id;
@property(retain, nonatomic) NSString<Optional> *opt_reply_id; // @synthesize opt_reply_id=_opt_reply_id;
@property(retain, nonatomic) NSString<Optional> *opt_comment_id; // @synthesize opt_comment_id=_opt_comment_id;
@property(retain, nonatomic) NSString<Optional> *opt_group_id; // @synthesize opt_group_id=_opt_group_id;
@property(retain, nonatomic) NSString<Optional> *opt_item_id; // @synthesize opt_item_id=_opt_item_id;
@property(retain, nonatomic) NSString<Optional> *fw_user_id; // @synthesize fw_user_id=_fw_user_id;
@property(retain, nonatomic) NSString<Optional> *content_rich_span; // @synthesize content_rich_span=_content_rich_span;
@property(retain, nonatomic) NSNumber *repost_type; // @synthesize repost_type=_repost_type;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

