//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CTAddressBookDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTFlightOrderConfirmCarUseSegmentInfoViewModel, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UITableView, UITextField, UIView;

@interface CTFlightUseCarContactViewController : CTFlightRootViewController <CTAddressBookDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    CTFlightOrderConfirmCarUseSegmentInfoViewModel *_useCarSegmentModel;
    id <CTFlightUseCarContactViewControllerDelegate> _mDelegate;
    UIView *_editTitleView;
    UILabel *_phoneTitleLabel;
    UITextField *_phoneTextField;
    NSLayoutConstraint *_editSeparateLineHeightConstraint;
    NSLayoutConstraint *_editView1HeightConstraint;
    NSLayoutConstraint *_editViewHeightConstraint;
    UILabel *_nameTitleLabel;
    UITextField *_nameTextField;
    UIButton *_contactButton;
    UIView *_editBottomLine;
    NSLayoutConstraint *_editBottomLineHeightConstraint;
    UITableView *_mTableView;
    NSMutableArray *_passengerList;
    NSMutableArray *_sectionList;
}

@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList=_passengerList;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(nonatomic) __weak NSLayoutConstraint *editBottomLineHeightConstraint; // @synthesize editBottomLineHeightConstraint=_editBottomLineHeightConstraint;
@property(retain, nonatomic) UIView *editBottomLine; // @synthesize editBottomLine=_editBottomLine;
@property(retain, nonatomic) UIButton *contactButton; // @synthesize contactButton=_contactButton;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak UILabel *nameTitleLabel; // @synthesize nameTitleLabel=_nameTitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *editViewHeightConstraint; // @synthesize editViewHeightConstraint=_editViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *editView1HeightConstraint; // @synthesize editView1HeightConstraint=_editView1HeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *editSeparateLineHeightConstraint; // @synthesize editSeparateLineHeightConstraint=_editSeparateLineHeightConstraint;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(nonatomic) __weak UILabel *phoneTitleLabel; // @synthesize phoneTitleLabel=_phoneTitleLabel;
@property(retain, nonatomic) UIView *editTitleView; // @synthesize editTitleView=_editTitleView;
@property(nonatomic) __weak id <CTFlightUseCarContactViewControllerDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
@property(retain, nonatomic) CTFlightOrderConfirmCarUseSegmentInfoViewModel *useCarSegmentModel; // @synthesize useCarSegmentModel=_useCarSegmentModel;
- (void).cxx_destruct;
- (void)addressBookDidSelectPerson:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTapCleanHistoryList:(id)arg1;
- (void)onTapClearNameTextField:(id)arg1;
- (void)onTapClearPhoneTextField:(id)arg1;
- (void)onTapConfirmButton:(id)arg1;
- (void)onTapContactButton:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)didSelectContactModel:(id)arg1;
- (void)saveInputPassenger;
- (void)resetSectionList;
- (void)loadHistoryPassengerList;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initInputView;
- (void)initNavigationBar;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

