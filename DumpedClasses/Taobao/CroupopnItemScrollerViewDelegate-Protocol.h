//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol CroupopnItemScrollerViewDelegate <NSObject>
- (unsigned long long)EScrollerViewGetPageCount;
- (UIView *)EScrollerViewGetViewByPageIndex:(unsigned long long)arg1;

@optional
- (void)EScrollerViewWillRemoveView:(UIView *)arg1;
- (void)EScrollerViewDidScrollFrom:(unsigned long long)arg1 toPrevPage:(unsigned long long)arg2;
- (void)EScrollerViewDidScrollFrom:(unsigned long long)arg1 toNextPage:(unsigned long long)arg2;
- (void)EScrollerViewDidClicked:(unsigned long long)arg1;
@end

