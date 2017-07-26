//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "KKMediaPlayerTopViewControlProtocolEx.h"
#import "P_QLDragToRefresh.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLThumbCreationUserInfo.h"
#import "QLVideoListsViewControllerHelper.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, QLMomentHotCircleVideoListModel, QLMomentSearchView, UIButton;

@interface QLMomentHotViewController : QLBaseTableViewController <P_QLDragToRefresh, UITextFieldDelegate, QLThumbCreationUserInfo, QLVideoListsViewControllerHelper, KKMediaPlayerTopViewControlProtocolEx, QLJumpObjectOpenUrlDelegate>
{
    QLMomentHotCircleVideoListModel *_dataModel;
    _Bool _pickerIsShowed;
    UIButton *_rightButton;
    QLMomentSearchView *_searchView;
    NSMutableArray *_selectStillArray;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) NSMutableArray *selectStillArray; // @synthesize selectStillArray=_selectStillArray;
@property(nonatomic) _Bool pickerIsShowed; // @synthesize pickerIsShowed=_pickerIsShowed;
@property(retain, nonatomic) QLMomentSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
- (void).cxx_destruct;
- (id)targetViewControllerForJumpData:(id)arg1;
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(id)arg2 index:(long long)arg3 isPop:(_Bool)arg4;
- (id)sourceVideoListsByDatakey:(id)arg1 sourceType:(long long)arg2;
- (_Bool)shouldStopPlay;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (id)userInfoForModelWithIdentifier:(id)arg1 dataKey:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pushImagePickerController;
- (_Bool)checkPrivacySetting;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)pushDetailViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushEditorViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didPressRightButtonAction:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (void)retryDown:(id)arg1;
- (void)requestModelDidFinishLoad:(id)arg1;
- (struct CGRect)frameOfPageStatusView;
- (id)pageChineseName;
- (id)pageDescription;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) long long uiType;

@end
