//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddFriendSendMsgHeaderUpload, NSDictionary;

@protocol AddFriendSendMsgHeaderUploadDelegate <NSObject>

@optional
- (void)onFinishFileUpload:(AddFriendSendMsgHeaderUpload *)arg1 info:(NSDictionary *)arg2;
- (void)onFileUploadProcess:(AddFriendSendMsgHeaderUpload *)arg1 process:(double)arg2;
- (void)onStartFileUpload:(AddFriendSendMsgHeaderUpload *)arg1;
@end
