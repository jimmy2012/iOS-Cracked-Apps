//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGMessageCenterSuperBLL<KGMessageCenterBLLProtocol>, NSArray, NSString;

@protocol KGMessageCenterSuperBLLDelegate <NSObject>

@optional
- (void)KGMessageCenterDidReceiveOriginData:(NSArray *)arg1 messageBLL:(KGMessageCenterSuperBLL<KGMessageCenterBLLProtocol> *)arg2;
- (void)KGMessageCenterDidReceiveData:(NSArray *)arg1 messageBLL:(KGMessageCenterSuperBLL<KGMessageCenterBLLProtocol> *)arg2 requestUid:(NSString *)arg3;
@end
