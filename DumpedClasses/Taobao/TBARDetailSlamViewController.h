//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBARDetailBaseViewController.h"

@class NSString, TBARDetailButtonView, TBARDetailLoadingView, TBARDetailModel, TBARDetailPlaceHelpView, TBARDetailRecognitionView, TBARDetailSlamHelper, TBARDetailVideoCapture, TBARSlamMarkerConfig, TBARTaskQueue, TBARTimer, UIButton, UIImage, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TBARDetailSlamViewController : TBARDetailBaseViewController
{
    _Bool _magicDynamicLoaded;
    _Bool _aliSLAMDynamicLoaded;
    _Bool _viewDidAppeared;
    _Bool _fromDetail;
    _Bool _arDetailModelPrepeared;
    _Bool _started;
    _Bool _modelPlaced;
    _Bool _modelSizeAdjusting;
    _Bool _showModelItemWhenAdjusting;
    _Bool _modelScaleUpdated;
    _Bool _useNotWifiNetwork;
    _Bool _recognized;
    _Bool _rotateGestureStarted;
    _Bool _translationStarted;
    _Bool _pinchStarted;
    _Bool _activeReset;
    _Bool _modelFirstPlaced;
    int _modelPlaceFailureCount;
    int _modelPlaceFailureTipCount;
    int _markerDownloadTime;
    int _modelDownloadTime;
    int _modelResourceSize;
    float _pinchPreviousScale;
    int _passiveResetCount;
    NSString *_spm;
    UIButton *_backButton;
    TBARDetailVideoCapture *_videoCapture;
    long long _recognitionType;
    UIView *_glView;
    TBARTaskQueue *_taskQueue;
    NSString *_itemId;
    NSString *_channel;
    UIImage *_placeHelpRightImage;
    UIImage *_placeHelpWrongImage;
    TBARDetailSlamHelper *_helper;
    TBARDetailLoadingView *_loadingView;
    TBARDetailRecognitionView *_recognitionView;
    UILabel *_tipLabel;
    UILabel *_placeHelpLabel;
    TBARDetailModel *_arDetailModel;
    NSString *_t3dResourcePath;
    NSString *_markerResourcePath;
    TBARDetailButtonView *_buyButton;
    TBARDetailButtonView *_resetPlaceButton;
    TBARDetailButtonView *_adjustSizeButton;
    NSString *_markerLocalPath;
    TBARSlamMarkerConfig *_markerConfig;
    UIView *_shareButton;
    long long _recogStatus;
    double _modelShowOnTime;
    float *_lookAtMatrix;
    TBARTimer *_updateLookAtMatrixTimer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_singlePanGesture;
    UIPanGestureRecognizer *_doublePanGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILabel *_itemWidthLabel;
    UILabel *_itemLengthLabel;
    UILabel *_itemHeightLabel;
    TBARDetailPlaceHelpView *_placeHelpView;
    struct CGPoint _rotateGesturePreviousPoint;
    struct CGPoint _translationPreviousPoint;
}

@property(nonatomic) _Bool modelFirstPlaced; // @synthesize modelFirstPlaced=_modelFirstPlaced;
@property(nonatomic) int passiveResetCount; // @synthesize passiveResetCount=_passiveResetCount;
@property(nonatomic) _Bool activeReset; // @synthesize activeReset=_activeReset;
@property(retain, nonatomic) TBARDetailPlaceHelpView *placeHelpView; // @synthesize placeHelpView=_placeHelpView;
@property(retain, nonatomic) UILabel *itemHeightLabel; // @synthesize itemHeightLabel=_itemHeightLabel;
@property(retain, nonatomic) UILabel *itemLengthLabel; // @synthesize itemLengthLabel=_itemLengthLabel;
@property(retain, nonatomic) UILabel *itemWidthLabel; // @synthesize itemWidthLabel=_itemWidthLabel;
@property(nonatomic) float pinchPreviousScale; // @synthesize pinchPreviousScale=_pinchPreviousScale;
@property(nonatomic) _Bool pinchStarted; // @synthesize pinchStarted=_pinchStarted;
@property(nonatomic) struct CGPoint translationPreviousPoint; // @synthesize translationPreviousPoint=_translationPreviousPoint;
@property(nonatomic) _Bool translationStarted; // @synthesize translationStarted=_translationStarted;
@property(nonatomic) struct CGPoint rotateGesturePreviousPoint; // @synthesize rotateGesturePreviousPoint=_rotateGesturePreviousPoint;
@property(nonatomic) _Bool rotateGestureStarted; // @synthesize rotateGestureStarted=_rotateGestureStarted;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *doublePanGesture; // @synthesize doublePanGesture=_doublePanGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *singlePanGesture; // @synthesize singlePanGesture=_singlePanGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) TBARTimer *updateLookAtMatrixTimer; // @synthesize updateLookAtMatrixTimer=_updateLookAtMatrixTimer;
@property(nonatomic) float *lookAtMatrix; // @synthesize lookAtMatrix=_lookAtMatrix;
@property(nonatomic) int modelResourceSize; // @synthesize modelResourceSize=_modelResourceSize;
@property(nonatomic) _Bool recognized; // @synthesize recognized=_recognized;
@property(nonatomic) double modelShowOnTime; // @synthesize modelShowOnTime=_modelShowOnTime;
@property(nonatomic) int modelDownloadTime; // @synthesize modelDownloadTime=_modelDownloadTime;
@property(nonatomic) int markerDownloadTime; // @synthesize markerDownloadTime=_markerDownloadTime;
@property(nonatomic) _Bool useNotWifiNetwork; // @synthesize useNotWifiNetwork=_useNotWifiNetwork;
@property(nonatomic) long long recogStatus; // @synthesize recogStatus=_recogStatus;
@property(nonatomic) _Bool modelScaleUpdated; // @synthesize modelScaleUpdated=_modelScaleUpdated;
@property(nonatomic) int modelPlaceFailureTipCount; // @synthesize modelPlaceFailureTipCount=_modelPlaceFailureTipCount;
@property(nonatomic) int modelPlaceFailureCount; // @synthesize modelPlaceFailureCount=_modelPlaceFailureCount;
@property(nonatomic) _Bool showModelItemWhenAdjusting; // @synthesize showModelItemWhenAdjusting=_showModelItemWhenAdjusting;
@property(nonatomic) _Bool modelSizeAdjusting; // @synthesize modelSizeAdjusting=_modelSizeAdjusting;
@property(nonatomic) _Bool modelPlaced; // @synthesize modelPlaced=_modelPlaced;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool arDetailModelPrepeared; // @synthesize arDetailModelPrepeared=_arDetailModelPrepeared;
@property(retain, nonatomic) UIView *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TBARSlamMarkerConfig *markerConfig; // @synthesize markerConfig=_markerConfig;
@property(copy, nonatomic) NSString *markerLocalPath; // @synthesize markerLocalPath=_markerLocalPath;
@property(retain, nonatomic) TBARDetailButtonView *adjustSizeButton; // @synthesize adjustSizeButton=_adjustSizeButton;
@property(retain, nonatomic) TBARDetailButtonView *resetPlaceButton; // @synthesize resetPlaceButton=_resetPlaceButton;
@property(retain, nonatomic) TBARDetailButtonView *buyButton; // @synthesize buyButton=_buyButton;
@property(copy, nonatomic) NSString *markerResourcePath; // @synthesize markerResourcePath=_markerResourcePath;
@property(copy, nonatomic) NSString *t3dResourcePath; // @synthesize t3dResourcePath=_t3dResourcePath;
@property(retain, nonatomic) TBARDetailModel *arDetailModel; // @synthesize arDetailModel=_arDetailModel;
@property(retain, nonatomic) UILabel *placeHelpLabel; // @synthesize placeHelpLabel=_placeHelpLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) TBARDetailRecognitionView *recognitionView; // @synthesize recognitionView=_recognitionView;
@property(retain, nonatomic) TBARDetailLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBARDetailSlamHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) UIImage *placeHelpWrongImage; // @synthesize placeHelpWrongImage=_placeHelpWrongImage;
@property(retain, nonatomic) UIImage *placeHelpRightImage; // @synthesize placeHelpRightImage=_placeHelpRightImage;
@property(nonatomic) _Bool fromDetail; // @synthesize fromDetail=_fromDetail;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) TBARTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(nonatomic) __weak UIView *glView; // @synthesize glView=_glView;
@property(nonatomic) long long recognitionType; // @synthesize recognitionType=_recognitionType;
@property(nonatomic) _Bool aliSLAMDynamicLoaded; // @synthesize aliSLAMDynamicLoaded=_aliSLAMDynamicLoaded;
@property(nonatomic) _Bool magicDynamicLoaded; // @synthesize magicDynamicLoaded=_magicDynamicLoaded;
@property(retain, nonatomic) TBARDetailVideoCapture *videoCapture; // @synthesize videoCapture=_videoCapture;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
- (void).cxx_destruct;
- (void)setupPlaceHelpLabel;
- (unsigned long long)supportedInterfaceOrientations;
- (id)screenSnapshotImage;
- (void)setupTipLabel;
- (id)labelWithItemSize:(int)arg1;
- (float)camera2ModelDistance:(float [16])arg1;
- (void)pinch:(id)arg1;
- (void)doublePan:(id)arg1;
- (void)singlePan:(id)arg1;
- (void)tap:(id)arg1;
- (void)registerAppMonitor;
- (id)userTrackArgsWithDict:(id)arg1;
- (void)setupGLView;
- (void)setNaviBarControlEnabled:(_Bool)arg1;
- (void)teardownGLView;
- (void)_stop;
- (void)_start;
- (void)showInvalidView;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)resetPlace;
- (void)adjustSize;
- (void)goToBuy;
- (void)backAction;
- (void)backButtonClicked:(id)arg1;
- (void)setupBackButton;
- (void)updateLookAtMatrix;
- (void)showGuideViewIfNeed;
- (void)placeModelDown;
- (void)setTip:(id)arg1 tipColor:(id)arg2;
- (void)setErrorPlaceTip;
- (void)setDefaultPlaceTip;
- (void)startPlaceModel;
- (void)updateModel;
- (void)getARDetailModelWithCallback:(CDUnknownBlockType)arg1;
- (void)downloadPlaceHelpImage;
- (void)setupInitTask;
- (void)checkNetwork;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addSlamRecognitionStatusCallback;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)dealloc;

@end

