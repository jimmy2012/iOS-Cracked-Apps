//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UILabel, XSingleBinder;

@interface XImageMessageCell : UITableViewCell
{
    UILabel *titleLabel;
    UILabel *timeLabel;
    NSMutableArray *imageViewArray;
    XSingleBinder *_binder;
}

+ (double)rowHeightForComponent:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)onState:(id)arg1;
- (void)bindComponent:(id)arg1;
- (id)getNextImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

