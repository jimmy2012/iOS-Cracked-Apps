//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CComClickRespondPro.h"
#import "CNContactPickerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"

@class MFMailComposeViewController, NSString, UINavigationController, UIViewController, UIWebView;

@interface CComClickRespond : NSObject <UIActionSheetDelegate, ABPeoplePickerNavigationControllerDelegate, MFMailComposeViewControllerDelegate, ABNewPersonViewControllerDelegate, UINavigationControllerDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate, CComClickRespondPro>
{
    _Bool _longPressingLink;
    NSString *_linkData;
    UIWebView *_webView;
    MFMailComposeViewController *_mailComposer;
    UIViewController *_showCtr;
    UINavigationController *_showNav;
    NSString *_sceneTitle;
}

@property(retain, nonatomic) NSString *sceneTitle; // @synthesize sceneTitle=_sceneTitle;
@property(nonatomic) _Bool longPressingLink; // @synthesize longPressingLink=_longPressingLink;
@property(nonatomic) __weak UINavigationController *showNav; // @synthesize showNav=_showNav;
@property(nonatomic) __weak UIViewController *showCtr; // @synthesize showCtr=_showCtr;
@property(retain, nonatomic) MFMailComposeViewController *mailComposer; // @synthesize mailComposer=_mailComposer;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *linkData; // @synthesize linkData=_linkData;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)showNewPersonViewControllerWithRecord:(void *)arg1 exist:(_Bool)arg2;
- (void)showPeoplePickerController;
- (void)goToUserFeeds:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)longPressAttributeLabel:(id)arg1 OnLink:(id)arg2 CGRect:(struct CGRect)arg3;
- (_Bool)didClickAttributeLabel:(id)arg1 OnLink:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
