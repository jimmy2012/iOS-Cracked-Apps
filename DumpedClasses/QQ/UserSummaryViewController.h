//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CAAnimationDelegate.h"
#import "CustomSummaryCardZipDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "QQBannerTipViewDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "RequestSetCardDelegate.h"
#import "SpriteViewDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserSummaryAccessibilityViewDelegate.h"
#import "UserSummaryEachBusinessEnterDelegate.h"
#import "UserSummaryEmptyPhotoWallDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"
#import "UserSummaryPhotoCoverFootViewDelegate.h"
#import "UserSummaryPhotosWallBrowserViewContollerDelegate.h"
#import "UserSummaryPhotosWallCellDelegate.h"
#import "UserSummaryTableHeaderViewDataSource.h"
#import "UserSummaryTableHeaderViewDelegate.h"
#import "UserSummaryTableHeaderViewPhotoDelegate.h"
#import "UserSummaryTableHeaderViewTagsPresenter.h"
#import "UserSummaryTouchControlDelegate.h"

@class AddFriendSendMessageViewController, CALayer, CMMotionManager, CloudLayoutManager, DIYEditView, FriendsVerifyMsgStructMsgModle, NSArray, NSData, NSDictionary, NSIndexPath, NSMutableArray, NSNumber, NSString, NSTimer, QQAPNGImageView, QQAlertView, QQAvatarView, QQBubbleTipsView, QQProfileModel, QQTableViewForHighlightEffectButton, QQToastView, QUIActionSheet, QZonePhotoWallCacheInfo, RichStateModel, ShoppingPersonalCardModel, SpriteView, ThirdBusinessShowModel, UIImage, UIImagePickerController, UIImageView, UILongPressGestureRecognizer, UINavigationController, UIView, UIViewController, UIWebView, USPersonalTagModel, UserSpriteModel, UserSummaryModel, UserSummaryNavigationBar, UserSummaryPersonalTagCell, UserSummaryPhotoCoverFootView, UserSummaryPhotosWallImageModel, UserSummaryPtotosWallManager, UserSummaryTableHeaderView, UserSummaryTouchControl, ZanRequestManager;

@interface UserSummaryViewController : QQViewController <UserSummaryTableHeaderViewPhotoDelegate, UserSummaryAccessibilityViewDelegate, SpriteViewDelegate, UserSummaryPhotosWallCellDelegate, UserSummaryPhotosWallBrowserViewContollerDelegate, UserSummaryPhotoCoverFootViewDelegate, TBBizNetworkLogicDelegate, UITableViewDelegate, UITableViewDataSource, QUIActionSheetDelegate, UIAlertViewDelegate, UserSummaryTouchControlDelegate, UserSummaryTableHeaderViewDelegate, UserSummaryTableHeaderViewDataSource, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, CustomSummaryCardZipDelegate, QQBannerTipViewDelegate, UserSummaryEachBusinessEnterDelegate, UserSummaryNavBarItemDelagate, UserSummaryTableHeaderViewTagsPresenter, RequestSetCardDelegate, UserSummaryEmptyPhotoWallDelegate, CAAnimationDelegate>
{
    int _type;
    int _subtype;
    long long _uin;
    _Bool _isMySelf;
    NSString *_searchName;
    unsigned long long _groupUin;
    UserSummaryModel *_model;
    NSMutableArray *_tableDataArray;
    NSMutableArray *_menuItemArray;
    NSMutableArray *_businessModelArray;
    NSString *_enc_id;
    NSString *_uid;
    QQTableViewForHighlightEffectButton *_tableView;
    UserSummaryTableHeaderView *_simpleInfoView;
    UserSummaryTouchControl *_operationView;
    NSDictionary *_unifyNameDic;
    _Bool _isUIBusy;
    _Bool _isDeleteRequesting;
    int _reqSummarySeqID;
    _Bool _bIsSummaryNeededUpdate;
    _Bool _isManualAddFriendisHoldByRequestingSumaryResponce;
    int _sumaryResponsedStatus;
    UIWebView *_phoneCallWebView;
    QUIActionSheet *_actionSheet;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_lastIndexPath;
    int _referType;
    UIImagePickerController *_photoPicker;
    int _headUploadSessionID;
    NSTimer *_timer;
    AddFriendSendMessageViewController *_addFriend;
    _Bool _isSupportWpa;
    _Bool _bClickEditInfo;
    _Bool _isMenuVisible;
    _Bool _isSheetVisible;
    _Bool _didPressStarCell;
    int _summaryEntry;
    unsigned int _getPhotoWallRequestId;
    QZonePhotoWallCacheInfo *_photoWallInfo;
    NSMutableArray *_uploadingPhotos;
    UIView *_nightModeMaskView;
    UserSummaryNavigationBar *_UserSummaryNavigationBar;
    _Bool _shadeDone;
    _Bool _businessExposureReport;
    _Bool _hobbiesExposureReport;
    UINavigationController *_navi;
    ThirdBusinessShowModel *_UserExportGorupModel;
    NSString *_exportgroupCode;
    _Bool needsShowGuideAnimation;
    _Bool tableViewScrollLock;
    _Bool _editInfoSelected;
    _Bool _editSigInfo;
    _Bool _isPushPhoneCall;
    _Bool _isReportQCallPromotion;
    unsigned long long _setImageCount;
    _Bool _isEnterZanList;
    long long _qvlmEmtry;
    RichStateModel *_richStateSigModel;
    UIViewController *_popToViewController;
    UIImageView *_bgImgView;
    UIView *_diyCardMaskView;
    UIImageView *_animationBgView;
    CALayer *_animationLayer;
    NSNumber *_overDueNum;
    UIImageView *_customCardShadowImageView;
    NSString *_commendName;
    QQAlertView *_alertAddFriend;
    QQAlertView *_alertVIP;
    NSDictionary *_customTemplateConfig;
    _Bool _shouldDisplayWithTemplate;
    int _customTemplateId;
    UIImage *_tempHoldImage;
    struct CGPoint _lastContentOffset;
    NSString *_cardRmarkMobile;
    FriendsVerifyMsgStructMsgModle *_msgModel;
    SpriteView *_spriteShowView;
    UserSpriteModel *_spriteModel;
    _Bool _isSpriteStand;
    _Bool _isFoldShow;
    _Bool _isFoldExpand;
    _Bool _needAddSumItemFoldPremise;
    _Bool _isReqSetFriendCard;
    QQAvatarView *_NowLiveView;
    QQProfileModel *_profileModel;
    _Bool _isSelfCampusCircleCard;
    UIImageView *_heroBgImage;
    struct CGRect _gameHonourBgInitFrame;
    QQAPNGImageView *_gameHonourLogo;
    UIImageView *_gameHonourLight;
    CMMotionManager *_motionManager;
    UIImageView *_diyEditView;
    DIYEditView *_diyContentView;
    QQBubbleTipsView *_diyCardGuideView;
    ShoppingPersonalCardModel *_shopBasicInfo;
    long long _bindShopUin;
    long long _selfBindShopUin;
    _Bool _isWaitingBindShopUin;
    NSArray *_photosWallDataSource;
    NSArray *_photosWallImageModelList;
    UserSummaryPtotosWallManager *_photosWallManager;
    UserSummaryPhotosWallImageModel *_deleteModel;
    double _operationViewHeight;
    int _totalVideoCount;
    _Bool _hasResp;
    long long _initUin;
    long long _initGroupUin;
    NSData *_initSecureSig;
    NSString *_initNumber;
    NSString *_originalISummaryCardbgUrl;
    _Bool _isFirstTimeAppear;
    _Bool _didReceivedResponse;
    unsigned long long _showingBoxType;
    _Bool _personalTagDidUpdateFromSharePage;
    _Bool _guestDidPraisePersonalTag;
    _Bool _callEntry;
    ZanRequestManager *_zanRequest;
    QQToastView *_toastView;
    CloudLayoutManager *_cloudWordManager;
    UserSummaryPersonalTagCell *_personalTagCell;
    _Bool _isFromBabyQ;
    _Bool _hideBottomOperationBar;
    _Bool _isFromCampusCircleWeb;
    _Bool _isRequest;
    _Bool _isGetMore;
    QQViewController *_campusCircleWebViewController;
    id <QQWebviewExecuteJSDelegate> _campusCircleWebVC;
    UserSummaryPhotoCoverFootView *_footView;
    UIImage *_arrowImage;
    NSArray *_cloudWords;
    USPersonalTagModel *_personalTagModel;
    struct CGSize _cloudWordRegionSize;
}

+ (void)businessExposureReport:(long long)arg1 hasReport:(_Bool *)arg2;
+ (void)businessShowExposureReportUtils:(id)arg1 hasReport:(_Bool *)arg2;
+ (void)gotoQZoneWithViewController:(id)arg1 referType:(int)arg2 fromUin:(long long)arg3 nick:(id)arg4 hasPermission:(_Bool)arg5;
+ (int)addFriendSubSourceIDForType:(int)arg1;
+ (int)addFriendSourceIDForType:(int)arg1;
+ (void)goToChatWithNavigationController:(id)arg1 summaryType:(int)arg2 fromUin:(long long)arg3 groupUin:(long long)arg4 nick:(id)arg5;
+ (void)didClickHobbyContentSectionHeaderWithServiceType:(long long)arg1 hobbiesModel:(id)arg2 uin:(id)arg3 navController:(id)arg4 summaryModel:(id)arg5;
+ (void)didClickHobbyCellWithServiceType:(long long)arg1 hobbyModel:(id)arg2 uin:(id)arg3 navController:(id)arg4 summaryModel:(id)arg5;
+ (void)businessClickReport:(long long)arg1;
+ (void)showThirdBusinessAndReport:(long long)arg1 jump_url:(id)arg2 uin:(id)arg3 pushNavc:(id)arg4 groupCode:(id)arg5 summaryModel:(id)arg6;
+ (void)businessEnterDidSeletect:(id)arg1 enterIndex:(long long)arg2 uin:(id)arg3 groupCode:(id)arg4 pushNavc:(id)arg5 summaryModel:(id)arg6;
+ (int)sumTouchControlTypeForType:(int)arg1 supportWpa:(_Bool)arg2;
+ (int)resetSummaryType:(int)arg1 withUin:(long long)arg2 groupUin:(long long)arg3;
+ (id)creatDefaultModelForType:(int)arg1 uin:(long long)arg2;
+ (id)viewControllerWithGroupCode:(long long)arg1 groupCode:(long long)arg2;
+ (id)viewControllerWithUin:(long long)arg1;
+ (id)viewControllerWithUin:(long long)arg1 type:(int)arg2;
@property(retain, nonatomic) USPersonalTagModel *personalTagModel; // @synthesize personalTagModel=_personalTagModel;
@property(nonatomic) struct CGSize cloudWordRegionSize; // @synthesize cloudWordRegionSize=_cloudWordRegionSize;
@property(retain, nonatomic) NSArray *cloudWords; // @synthesize cloudWords=_cloudWords;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(nonatomic) _Bool isRequest; // @synthesize isRequest=_isRequest;
@property(retain, nonatomic) UserSummaryPhotoCoverFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) id <QQWebviewExecuteJSDelegate> campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
@property(nonatomic) _Bool isFromCampusCircleWeb; // @synthesize isFromCampusCircleWeb=_isFromCampusCircleWeb;
@property(nonatomic) _Bool hideBottomOperationBar; // @synthesize hideBottomOperationBar=_hideBottomOperationBar;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(retain, nonatomic) QQViewController *campusCircleWebViewController; // @synthesize campusCircleWebViewController=_campusCircleWebViewController;
@property(retain, nonatomic) UserSpriteModel *spriteModel; // @synthesize spriteModel=_spriteModel;
@property(retain, nonatomic) SpriteView *spriteShowView; // @synthesize spriteShowView=_spriteShowView;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) UIImageView *animationBgView; // @synthesize animationBgView=_animationBgView;
@property(readonly, nonatomic) UserSummaryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *cardRmarkMobile; // @synthesize cardRmarkMobile=_cardRmarkMobile;
- (void).cxx_destruct;
- (_Bool)shouldShowCampusCell;
- (_Bool)isCampusCircleAvailable;
- (void)updateTimTips:(id)arg1;
- (void)gameIconImageDownloadSuccess:(id)arg1;
- (void)actionOnModifyGameIconInfo:(id)arg1;
- (void)showDIYEditGuide;
- (void)refreshDIYView;
- (void)goToCardDIYVC:(id)arg1;
- (void)onGameHonourAddIconClick;
- (void)refreshGameHonourCardUI:(_Bool)arg1;
- (_Bool)isGameHonourCardResourceComplete;
- (void)stopUpdateDeviceMotion;
- (void)startUpdateDeviceMotion;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doGameHonourLogoAnimation;
- (void)showGameHonourLogoAnimation;
- (void)syncSaveProfileModel:(id)arg1;
- (void)handleSetPersonProfileNotification:(id)arg1;
- (void)recommendImageDownloadError:(id)arg1;
- (void)recommendImageDownloadSuccess:(id)arg1;
- (void)goToPhotoWallPage:(id)arg1;
- (void)clickedSeeMore;
- (void)onPhotosWallChange:(id)arg1;
- (void)updateImageModel:(id)arg1 WithIndex:(long long)arg2;
- (void)updateImageModelFrame:(long long)arg1 withPhotos:(id)arg2;
- (void)deletePhoto:(id)arg1 WithIndex:(long long)arg2;
- (void)clickedImageWithIndex:(long long)arg1;
- (void)clickedCoverImage:(id)arg1;
- (void)endGetMorePhotosWall;
- (void)startGetMorePhotosWall;
- (void)endRequestPhotosWall;
- (void)startRequestPhotosWall;
- (_Bool)isNeedRefresh;
- (_Bool)checkShowMaxPhotosWall;
- (void)scrollToPhotosWall;
- (void)checkRefresh;
- (double)photosWallCellHeight;
- (void)onDeleteNewPhotosWall:(id)arg1;
- (void)onUploadNewPhotosWall:(id)arg1;
- (void)onGetNewPhotosWallList:(id)arg1;
- (void)requestNowPhotoList;
- (void)updatePhotosWall:(id)arg1;
- (void)removePhotoWallDataSourceForType:(int)arg1;
- (void)sortPhotoWallDataSoucre;
- (id)removeSpaceAndNewline:(id)arg1;
- (void)openDetailInfo;
- (id)avatarView;
- (void)setGlobalSummaryEntry:(int)arg1;
- (void)showSpriteBox;
- (void)stealBox;
- (void)pushToSpriteBeanProductionViewController;
- (void)jumpShopIsOpenBox;
- (void)pushToInvitationURL;
- (void)removeInvitationBubble;
- (void)showInvitationBubbleIfNeed;
- (void)requestSummaryCardIfNecessary;
- (void)setTagCallBack:(id)arg1;
- (void)resetSpriteState;
- (void)onSpriteSaveDBComplete:(id)arg1;
- (void)spriteView:(id)arg1 actionDidFinishPlay:(long long)arg2 actionName:(id)arg3 isSucc:(_Bool)arg4;
- (void)spriteView:(id)arg1 roleAndDressDidFinishLoad:(_Bool)arg2 isDressSucc:(_Bool)arg3;
- (void)onSpriteBubbleClicked:(id)arg1;
- (void)onTouchspriteView:(id)arg1;
- (_Bool)canShowSprite;
- (void)showSprite;
- (void)checkRoleAndDressList;
- (void)loadSpriteModel:(long long)arg1;
- (void)saveIsEnterChat;
- (void)onShopBindInfoNotification:(id)arg1;
- (void)onShopAccountDetailInfoNotification:(id)arg1;
- (void)updateShoppingInfo;
- (_Bool)isSupportRightDragToGoBack;
- (void)updateStrangerModelInfo;
- (_Bool)isTelePhoneCalling;
- (void)onApplicationWillResignActive;
- (void)goSetCardOnGuest;
- (void)goToMySummary;
- (void)goBack;
- (void)handleSetTemplateIdFailed:(long long)arg1 withUserInfo:(id)arg2;
- (void)failedRequestSetTemplateID:(id)arg1;
- (void)successRequestSetTemplateID:(id)arg1;
- (void)cancelReuestSetTemplateID:(id)arg1;
- (void)startRequestSetTemplateID:(id)arg1;
- (_Bool)hasPhotoWall;
- (_Bool)isSelfViewing;
- (void)simplifiedPhotosCell:(id)arg1 clickedPhotoAtIndex:(unsigned long long)arg2;
- (void)onUserSummaryZanSuccessNotification:(id)arg1;
- (id)uiAskForTagModelsToBeShown;
- (void)uiUpSwipedHeaderView;
- (void)uiCLickedAddTagButton;
- (id)getPraiseKey;
- (_Bool)uiAskForIfTagHasBeenApproved:(id)arg1;
- (void)uiApprovedTag:(id)arg1;
- (_Bool)uiAskIfSelfViewing;
- (void)showGuidence;
- (void)showTagsViewAnimated;
- (void)applyCustomConfigByColor:(long long)arg1 withTempDic:(id)arg2;
- (void)onCustomHeaderClickHandler:(id)arg1;
- (_Bool)isSupportFullScreenLayout;
- (void)handleUserSummaryNavBtClick:(id)arg1;
- (void)updateModelDataByProfileModel:(id)arg1 profileModel:(id)arg2;
- (void)onSetPersonProfileNotification:(id)arg1;
- (void)changeSummaryTypeAndUpdateUIIfNeed;
- (void)onQQRefreshFriendListSuccessNotification;
- (void)onPushUpdateDeleteFriend;
- (void)onPushRejectFriend;
- (void)changeSummaryTypeAndUpdateUI;
- (void)updateOperationView:(int)arg1;
- (void)setRightButtonEnable:(_Bool)arg1 SummaryType:(int)arg2;
- (void)setOperationViewEnable:(_Bool)arg1 SummaryType:(int)arg2;
- (void)reportEnteringUserSummaryCardForAvatarPendant;
- (long long)avatarPendantEntry;
- (void)avatarPendantPushUpdate:(id)arg1;
- (void)qqMasterMsgPushUpdate:(id)arg1;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (void)blockFriendMsg;
- (_Bool)isFriendMaskWithUin:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)navigationBarStyleWithCurrentTheme;
- (void)navigationBarStyleWithNoTheme;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)handleTemplateChange:(id)arg1;
- (_Bool)openPriviledgeWebView;
- (id)today;
- (_Bool)isToday:(id)arg1;
- (void)showCustomCardBanner;
- (void)clearVipOutDateBannerRecord;
- (id)userSummaryModel;
- (id)richStateModel;
- (id)imageWithFileName:(id)arg1;
- (id)imageWithTemplateId:(id)arg1 filename:(id)arg2;
- (void)applyCustomTemplateOnCell:(id)arg1 type:(int)arg2;
- (_Bool)isItemTypeShownInHeaderForCurrentTemplate:(int)arg1;
- (id)itemTypesShownInHeaderForCurrentTemplate;
- (id)tableViewCellBackgroundColorHighlighted;
- (id)tableViewCellBackgroundColorNormal;
- (id)tableViewSeparatorColor;
- (id)headerClassName;
- (_Bool)shouldDisplayLevelCell;
- (void)removeCustomTemplate;
- (void)applyCustomTemplate;
@property(retain, nonatomic) NSDictionary *customTemplateConfig; // @dynamic customTemplateConfig;
@property(nonatomic) int customTemplateId; // @dynamic customTemplateId;
- (void)resetThemeOnDisappear;
- (void)updateUserSummary;
- (void)photoWallClick:(id)arg1;
- (void)reloadDataAsRichStateCallback;
- (void)richStateCallback:(id)arg1;
- (void)onCoverViewClicked:(id)arg1;
- (struct CGPoint)tableViewContentOffset;
- (void)onShopImageClick:(id)arg1;
- (void)handleTheOnlyOneClick:(id)arg1;
- (void)onShowRareIcon;
- (void)onQQDarenViewClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewTimOnlineClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewChanged:(id)arg1;
- (void)onUserSUmmaryIdentityImageClick:(id)arg1 tag:(int)arg2;
- (void)onUserSummaryLevelViewClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewZanClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewHeaderImageClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewNowViewClick:(id)arg1;
- (void)pendantStoreLua;
- (void)cropViewControllerDidCancel:(id)arg1;
- (void)cropViewController:(id)arg1 didFinishCroppingImage:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)startUploadHeadImage:(id)arg1;
- (void)showImagePicker;
- (void)showCamera;
- (void)viewHeadOriginImage;
- (void)gotoWebView;
- (void)modifyQQHeadNotify:(id)arg1;
- (void)ActionOnDeleteFriend:(id)arg1;
- (void)ActionOnModifyRemark:(id)arg1;
- (void)ActionOnModifyNick:(id)arg1;
- (void)loadPersonalData;
- (void)goToPersonalTagListViewController;
- (void)cloudWordRegionClick;
- (void)praiseCountButtonClick;
- (id)createPersonalTagCellIfNeed;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)asynLayoutFinish:(id)arg1;
- (void)QQRemovePersonalTagRedPoint:(id)arg1;
- (void)onGuestDidPraisePersonalTag:(id)arg1;
- (void)onUpdateCloudWordLayoutFromSharePage:(id)arg1;
- (void)onRefreshPersonalTag:(id)arg1;
- (void)onAddPersonalTag:(id)arg1;
- (void)hobbiesShowExposureReport;
- (void)businessShowExposureReport;
- (void)setContactNameToRemark;
- (void)sendCardMobileMsg:(id)arg1;
- (void)sendPhoneMsg;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)callCardMobiles:(id)arg1;
- (void)callSomebody;
- (void)uinDidDeleteFromBlockList:(id)arg1;
- (void)uinDidAddToBlockList:(id)arg1;
- (void)goToSignature;
- (void)goToQZone;
- (void)setSupportWpa:(_Bool)arg1;
- (void)addFriend:(id)arg1;
- (void)goToChat;
- (void)updateQzoneTips:(id)arg1;
- (void)sendModifySummaryRequest;
- (void)updateUserSummary:(id)arg1;
- (void)upDateAlbumPicCount:(id)arg1;
- (void)setupQzone;
- (id)getVersion;
- (id)getUserVipReportInfo;
- (void)goSummaryBackgroundWallUsingCache:(_Bool)arg1;
- (void)goSummaryBackgroundWall;
- (void)clickPersonalVipCardInfo:(id)arg1;
- (void)didOneBusinessEnter:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPhoneContactSheet;
- (void)showChangeHeadActionSheet;
- (void)resetUIBusy;
- (id)getSimpleTextAndPhotosCell:(id)arg1 type:(int)arg2 imageName:(id)arg3 simpleText:(id)arg4 accessoryType:(_Bool)arg5;
- (id)getSimpleTextCell:(id)arg1 type:(int)arg2 imageName:(id)arg3 simpleText:(id)arg4 accessoryType:(_Bool)arg5;
- (_Bool)addSumItemIfAvailable:(id)arg1 type:(int)arg2;
- (_Bool)getAccessoryType:(int)arg1;
- (id)getDisplayName;
- (id)getSimpleText:(int)arg1;
- (id)getSumItemCellImageName:(int)arg1;
- (int)convertTouchControlType:(int)arg1;
- (int)convertSummaryType:(int)arg1;
- (void)onEditOrgGroupInfoTouched:(id)arg1;
- (void)onUploadPhotoButtonTouched:(id)arg1;
- (void)adjustPhotoWallHeight;
- (void)onTouchControlHeightChange;
- (void)onRTVoiceCall;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)onEnterShopBtnTouched:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)onAddFriendTouched:(id)arg1;
- (void)gotoBizVipDetailInfo;
- (void)gotoQRCodeCard;
- (void)gotoQCallPromotionWebView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)resetImageRefreshCount;
- (void)setBackgroundImageInMainThread;
- (void)startBgAnimation;
- (void)setBackgroundImage;
- (void)loadBackgroundResFail;
- (void)downloadFileResultWithUrl:(id)arg1 withType:(long long)arg2 andResult:(_Bool)arg3;
- (void)leftButtonClick:(id)arg1;
- (void)adjustHeaderViewZanButtonYIfNeeded;
- (void)longPressGestureCallback:(id)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)hideVCPendingMenuWithAnim:(_Bool)arg1;
- (void)onGestureEnded:(id)arg1;
- (void)onGestureBegan:(id)arg1;
- (void)removeLongPressGesture;
- (void)addLongPressGesture;
- (void)synInfoToFriendList;
- (void)refreshCover;
- (void)updateHeaderView;
- (void)refreshView;
- (void)animateToNewHeader:(id)arg1 andHeaderName:(id)arg2;
- (void)loadMenuData;
- (void)loadTableData;
- (void)loadAllBusinessEnterModel;
- (void)loadBusinessDataAndRefreshView;
- (void)loadItemsZip;
- (void)loadDynamicRes;
- (void)loadBackImgByUrl:(id)arg1;
- (void)loadTemplateData:(long long)arg1 andRespResult:(long long)arg2;
- (void)loadData;
- (void)dealloc;
- (void)removeRequestingUrl;
- (void)ActionReqeustStwebTokenTimeout;
- (void)ActionRequestStwebToken:(id)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (id)getInfoDic;
- (void)addCoverViewIfNeed:(id)arg1 topShadow:(id)arg2;
- (void)createHeaderViewWithClassName:(id)arg1 headName:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)modifyNavigationState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)getUserSummaryInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rightButtonPress:(id)arg1;
- (void)updateRightButton;
- (void)navigationBarHandle;
- (void)handleNavBarItemClickWithType:(int)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (int)viewTag;
- (void)setHeadName:(id)arg1 headerName:(id)arg2;
- (void)showOrHideCompletePersonalInfoTipsView:(_Bool)arg1;
- (void)updateCompletePersonalInfoTipsView;
- (void)loadView;
- (id)creatDefaultModel:(int)arg1;
- (int)getReserve2;
- (int)getEntry;
- (int)getGuestEntry;
- (int)getMyselfEntry;
- (int)getReserve3;
@property(nonatomic) int summaryEntry; // @dynamic summaryEntry;
- (void)showOpenningAnimation;
- (void)adjustForNightMode;
- (void)viewDidLoad;
- (void)onReceiveRefreshDataNoti:(id)arg1;
- (void)unRegisterNotifications;
- (void)registerNotifications;
- (id)initWithSearchName:(id)arg1 SummaryType:(int)arg2 SummaryModel:(id)arg3 popToViewController:(id)arg4;
- (void)requestDataWithNumber:(id)arg1 secureSig:(id)arg2 uin:(long long)arg3 groupCode:(unsigned long long)arg4;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 groupUin:(unsigned long long)arg3 Sig:(id)arg4 Phone:(id)arg5;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 groupUin:(unsigned long long)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 Sig:(id)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 SubType:(int)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2;
- (id)init;
- (int)getSummaryType;
- (long long)getUin;
- (id)getCampusCircleNick;
- (id)accessibleElementsInUserSummary;
- (void)onModifyCampusInfo:(id)arg1;
- (void)addCampusNotification;
- (void)onCampusCircleFeedSelect;
- (id)getCampusCircleFeedContent;
- (void)requestCampusCircleNewestFeedForUin:(id)arg1;
- (void)onMorePhotoWallButtonClicked:(id)arg1;
- (void)onEditPhotoWallButtonClicked;
- (void)onPhotoWallPictureButtonTapped:(id)arg1;
- (void)onRefreshPhotoWallList:(id)arg1 isLocal:(_Bool)arg2;
- (void)loadLocalPhotoWall;
- (void)onGetPhotoWallList:(id)arg1;
- (void)refreshPhotoWallView;
- (id)photoWallPhotoList;
- (void)removePhotoWallNotifications;
- (void)registerPhotoWallNotifications;
- (void)requestQzonePhotoWallList;

// Remaining properties
@property(retain, nonatomic) QQAlertView *alertAddFriend; // @dynamic alertAddFriend;
@property(retain, nonatomic) QQAlertView *alertVIP; // @dynamic alertVIP;
@property(retain, nonatomic) UIImageView *bgImgView; // @dynamic bgImgView;
@property(nonatomic) _Bool businessExposureReport; // @dynamic businessExposureReport;
@property(retain, nonatomic) NSMutableArray *businessModelArray; // @dynamic businessModelArray;
@property(retain, nonatomic) NSString *commendName; // @dynamic commendName;
@property(retain, nonatomic) UIImageView *customCardShadowImageView; // @dynamic customCardShadowImageView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGPoint lastContentOffset; // @dynamic lastContentOffset;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @dynamic lastIndexPath;
@property(retain, nonatomic) FriendsVerifyMsgStructMsgModle *msgModel; // @dynamic msgModel;
@property(retain, nonatomic) UINavigationController *navi; // @dynamic navi;
@property(retain, nonatomic) NSNumber *overDueNum; // @dynamic overDueNum;
@property(nonatomic) UIViewController *popToViewController; // @dynamic popToViewController;
@property(nonatomic) long long qvlmEmtry; // @dynamic qvlmEmtry;
@property(nonatomic) int referType; // @dynamic referType;
@property(retain, nonatomic) RichStateModel *richStateSigModel; // @dynamic richStateSigModel;
@property(nonatomic) _Bool shouldDisplayWithTemplate; // @dynamic shouldDisplayWithTemplate;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *tempHoldImage; // @dynamic tempHoldImage;

@end

