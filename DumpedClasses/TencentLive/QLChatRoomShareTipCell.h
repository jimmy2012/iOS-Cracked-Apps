//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChatRoomCommonCell.h"

@class QLShareCommonView, UILabel;

@interface QLChatRoomShareTipCell : QLChatRoomCommonCell
{
    UILabel *_tipTextLbl;
    QLShareCommonView *_shareView;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLShareCommonView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) UILabel *tipTextLbl; // @synthesize tipTextLbl=_tipTextLbl;
- (void).cxx_destruct;
- (_Bool)hasUserHead;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

