//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBEmojiScrollView, TBGPSModel, TBPOIPosterDataModel;

@protocol TBEmojiScrollViewDelegate <NSObject>

@optional
- (void)emojiScrollView:(TBEmojiScrollView *)arg1 didSelectedEmojiView:(TBPOIPosterDataModel *)arg2 GPSModel:(TBGPSModel *)arg3;
- (void)emojiScrollView:(TBEmojiScrollView *)arg1 didSelectedEmoji:(NSString *)arg2 positionInScreen:(struct CGRect)arg3;
@end
