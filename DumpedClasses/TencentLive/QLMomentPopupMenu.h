//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBPopupMenu.h"

@interface QLMomentPopupMenu : QBPopupMenu
{
    id <QLMomentPopupMenuDelegate> _menuDelegate;
    id _userInfo;
}

+ (id)customButtonWithTitle:(id)arg1;
+ (id)sharedInstance;
+ (void)dismiss;
+ (void)show:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 delegate:(id)arg4;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <QLMomentPopupMenuDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
- (void).cxx_destruct;
- (void)reportAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)copyAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

