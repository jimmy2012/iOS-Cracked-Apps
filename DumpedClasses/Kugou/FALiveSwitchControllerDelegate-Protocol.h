//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol FALiveSwitchControllerDelegate <NSObject>

@optional
- (void)switchControllerWillLoadCell:(UIView *)arg1 itemModel:(id)arg2;
- (void)switchControllerDidEndScrollWithPage:(long long)arg1;
- (void)switchControllerDidChangedPage:(long long)arg1;
@end
