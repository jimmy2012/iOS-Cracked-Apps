//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCChatBubble.h"

@class UIImageGIFView;

@interface MCChatGifBubble : MCChatBubble
{
    UIImageGIFView *_innerBubbleImageView;
}

+ (struct CGSize)bubbleSizeForMessage:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) UIImageGIFView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)longPressAction;
- (void)bubbleLongPress:(id)arg1;
- (void)recycle;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

@end

