//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSCommonLogic : NSObject
{
    _Bool _ssIPhoneSupportRotate;
    NSString *_requestURL;
}

+ (void)saveCommentInputViewPlaceHolder:(id)arg1;
+ (id)commentInputViewPlaceHolder;
+ (id)fixStringTypeGroupID:(id)arg1;
+ (long long)fixLongLongTypeGroupID:(long long)arg1;
+ (id)fixNumberTypeGroupID:(id)arg1;
+ (_Bool)isZoneVersion;
+ (id)handleError:(id)arg1 responseResult:(id)arg2 exceptionInfo:(id *)arg3 treatExceptionAsError:(_Bool)arg4;
+ (id)handleError:(id)arg1 responseResult:(id)arg2 exceptionInfo:(id *)arg3;
+ (void)monitorLoginoutWithUrl:(id)arg1 status:(long long)arg2 error:(id)arg3;
+ (void)saveInstallAppsInterval:(id)arg1;
+ (id)getInstallAppsInterval;
+ (void)saveRecentAppsInterval:(id)arg1;
+ (id)getRecentAppsInterval;
+ (id)getShareTemplate;
+ (void)saveShareTemplate:(id)arg1;
+ (id)getInterceptURLs;
+ (void)saveInterceptURLs:(id)arg1;
+ (id)parseShareContentWithTemplate:(id)arg1 title:(id)arg2 shareURLString:(id)arg3;
+ (_Bool)couldRequestForKey:(int)arg1;
+ (void)updateRequestTimeForKey:(int)arg1;
+ (id)shareTimeDict;
+ (float)floatForKey:(id)arg1;
+ (_Bool)boolForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)shareCommonLogic;
+ (void)setMinimumTimeInterval:(double)arg1;
+ (double)minimumTimeInterval;
+ (void)setToken:(id)arg1;
+ (id)token;
+ (void)setDisabledTBUFP:(_Bool)arg1;
+ (_Bool)disabledTBUFP;
+ (void)setMinimumLocationAlertTimeInterval:(double)arg1;
+ (double)minimumLocationAlertTimeInterval;
+ (void)setMinimumLocationUploadTimeInterval:(double)arg1;
+ (double)minimumLocationUploadTimeInterval;
+ (double)locateTimeoutInterval;
+ (void)setLocateTimeoutInterval:(double)arg1;
+ (void)setAmapKey:(id)arg1;
+ (id)amapKey;
+ (void)setBaiduMapKey:(id)arg1;
+ (id)baiduMapKey;
+ (id)loginAlertTitleOfIndex:(unsigned long long)arg1;
+ (void)setLoginAlertTitles:(id)arg1;
+ (id)dialogTitleOfIndex:(unsigned long long)arg1;
+ (void)setDialogTitles:(id)arg1;
+ (void)setQuickLoginSwitch:(_Bool)arg1;
+ (_Bool)quickLoginSwitch;
+ (void)setQuickRegisterButtonText:(id)arg1;
+ (id)quickRegisterButtonText;
+ (void)setQuickRegisterPageTitle:(id)arg1;
+ (id)quickRegisterPageTitle;
+ (void)setWebviewRedirectReportType:(long long)arg1;
+ (long long)webviewRedirectReportType;
+ (void)setEnableWebViewHttps:(_Bool)arg1;
+ (_Bool)enableWebViewHttps;
+ (void)setEnabledWhitePageMonitor:(_Bool)arg1;
+ (_Bool)enabledWhitePageMonitor;
+ (void)setEnabledAFNetworking:(_Bool)arg1;
+ (_Bool)enabledAFNetworking;
+ (void)setEnabledDNSMapping:(long long)arg1;
+ (_Bool)enabledDNSMapping;
+ (void)setShowGestureTip:(_Bool)arg1;
+ (_Bool)showGestureTip;
+ (void)setShowLiveChatTipView:(_Bool)arg1 liveId:(id)arg2;
+ (_Bool)showLiveChatTipViewForliveId:(id)arg1;
+ (void)setEnabledShowAlwaysOriginImageAlertRepeatly:(_Bool)arg1;
+ (_Bool)enabledShowAlwaysOriginImageAlertRepeatly;
+ (void)setAccountABVersionEnabled:(_Bool)arg1;
+ (_Bool)accountABVersionEnabled;
+ (void)enableSearchInitialPageWap:(_Bool)arg1;
+ (_Bool)searchInitialPageWapEnabled;
+ (_Bool)shouldAppendQueryStirngWithUrl:(id)arg1;
+ (void)setWebViewQueryEnableHostList:(id)arg1;
+ (void)enableWebViewQueryString:(_Bool)arg1;
+ (void)enableSearchInDetailNavBar:(long long)arg1;
+ (_Bool)searchInDetailNavBarEnabled;
+ (void)setSearchBarTip:(id)arg1;
+ (id)searchBarTip;
+ (_Bool)isSearchTransitionEnabled;
+ (void)setSearchTransitionEnabled:(_Bool)arg1;
+ (void)setMineTabSearchEnabled:(_Bool)arg1;
+ (_Bool)mineTabSearchEnabled;
+ (void)setWKWebViewEnabledEnabled:(_Bool)arg1;
+ (_Bool)WKWebViewEnabled;
+ (void)setIar:(_Bool)arg1;
+ (_Bool)iar;
+ (void)setForumRefreshTimeInterval:(double)arg1;
+ (double)forumListRefreshTimeInterval;
+ (void)setShouldFilterContact:(_Bool)arg1;
+ (_Bool)shouldFilterContact;
+ (void)setNeedCleanCoreData:(_Bool)arg1;
+ (_Bool)needCleanCoreData;
+ (void)setWeixinSharedExtendedObjectEnabled:(_Bool)arg1;
+ (_Bool)weixinSharedExtendedObjectEnabled;
+ (void)setTTAlertControllerEnabled:(_Bool)arg1;
+ (_Bool)ttAlertControllerEnabled;
+ (void)setWebContentArticleProtectionTimeoutInterval:(double)arg1;
+ (double)webContentArticleProtectionTimeoutInterval;
+ (void)setWebContentArticleProtectionTimeoutDisabled:(_Bool)arg1;
+ (_Bool)webContentArticleProtectionTimeoutDisabled;
+ (void)setExploreDetailToolBarWriteCommentPlaceholderText:(id)arg1;
+ (id)exploreDetailToolBarWriteCommentPlaceholderText;
+ (void)setJsActLogURLString:(id)arg1;
+ (id)shouldEvaluateActLogJsStringForAdID:(id)arg1;
+ (id)jsActLogURLString;
+ (void)setTaobaoSlotIDs:(id)arg1;
+ (id)taobaoSlotIDs;
+ (void)setAutoFloatingRefreshBtnInterval:(long long)arg1;
+ (long long)autoFloatingRefreshBtnInterval;
+ (void)setShowFloatingRefreshBtn:(_Bool)arg1;
+ (_Bool)showFloatingRefreshBtn;
+ (void)setLastReadStyle:(long long)arg1;
+ (long long)lastReadStyle;
+ (void)setLastReadRefreshEnabled:(_Bool)arg1;
+ (_Bool)LastReadRefreshEnabled;
+ (void)setReportInWapPageEnabled:(_Bool)arg1;
+ (_Bool)reportInWapPageEnabled;
+ (void)setEssayCommentDetailEnabled:(_Bool)arg1;
+ (_Bool)essayCommentDetailEnabled;
+ (void)setRefreshButtonSettingEnabled:(_Bool)arg1;
+ (_Bool)refreshButtonSettingEnabled;
+ (void)setLaunchedTimes4ShowIntroductionView:(long long)arg1;
+ (long long)launchedTimes4ShowIntroductionView;
+ (void)setFeedRefreshADDisable:(_Bool)arg1;
+ (_Bool)feedRefreshADDisable;
+ (id)refreshADDefaultShowLimit;
+ (void)setRefreshADDisable:(_Bool)arg1;
+ (_Bool)RefreshADDisable;
+ (double)refreshDefaultAdFetchInterval;
+ (void)setFeedRefreshADExpireInterval:(double)arg1;
+ (double)feedRefreshADExpireInterval;
+ (void)setShowRefreshButton:(_Bool)arg1;
+ (_Bool)showRefreshButton;
+ (void)setVideoTipServerInterval:(double)arg1;
+ (double)videoTipServerInterval;
+ (void)setVideoTipServerEnabled:(_Bool)arg1;
+ (_Bool)videoTipServerSettingEnabled;
+ (_Bool)detailNewLayoutEnabled;
+ (void)setDetailNewLayoutEnabled:(_Bool)arg1;
+ (_Bool)detailSharedWebViewEnabled;
+ (void)setDetailSharedWebViewEnabled:(_Bool)arg1;
+ (_Bool)foldCommentEnabled;
+ (void)setFoldCommentEnabled:(_Bool)arg1;
+ (_Bool)newCommentImpEnabled;
+ (void)setNewCommentImpEnabled:(_Bool)arg1;
+ (_Bool)detailWKEnabled;
+ (void)setDetailWKEnabled:(_Bool)arg1;
+ (void)setNewNatantStyleInADEnabled:(_Bool)arg1;
+ (_Bool)newNatantStyleInADEnabled;
+ (void)setNewNatantStyleEnabled:(_Bool)arg1;
+ (_Bool)newNatantStyleEnabled;
+ (void)setDetailQuickExitEnabled:(_Bool)arg1;
+ (_Bool)detailQuickExitEnabled;
+ (void)resetAutoPlayModeToWifiIfNeed;
+ (void)setAutoPlayModeServerSetting:(long long)arg1;
+ (_Bool)hadSetAutoPlayMode;
+ (long long)autoPlayModeServerSetting;
+ (void)setAutoContinuePlayServerEnabled:(_Bool)arg1;
+ (_Bool)autoContinuePlayServerSettingEnabled;
+ (void)setAutoPlayServerEnabled:(_Bool)arg1;
+ (_Bool)autoPlayServerSettingEnabled;
+ (_Bool)hasLocalVideoSpotVersion;
+ (long long)serverVideoTabSpotVersion;
+ (long long)localVideoTabSpotVersion;
+ (void)saveLocalVideoTabSpotVersion:(long long)arg1;
+ (void)saveServerVideoTabSpotVersion:(long long)arg1;
+ (void)showedVideoTabSpot;
+ (void)setVideoTabSpotServerEnabled:(_Bool)arg1;
+ (_Bool)shouldShowVideoTabSpotServerEnabled;
+ (_Bool)shouldShowVideoTabSpotForVersion:(long long)arg1;
+ (_Bool)saveForwordStatusEnabled;
+ (void)setSaveForwordStatusEnabled:(_Bool)arg1;
+ (void)cleanDrafts;
+ (id)draftForType:(long long)arg1;
+ (void)setDraft:(id)arg1 forType:(long long)arg2;
+ (void)setCrashReporter:(id)arg1;
+ (_Bool)crashlyticsCrashReportEnable;
+ (_Bool)toutiaoCrashReportEnable;
+ (_Bool)umengCrashReportEnable;
+ (void)setUgcCellLineNumber:(id)arg1;
+ (long long)getUgcCellLineNumber:(unsigned long long)arg1;
+ (void)setAppseeSampleSetting:(id)arg1;
+ (id)appseeSampleSetting;
+ (void)setGallerySlideDownOutTip:(id)arg1;
+ (_Bool)needToShowSlideDownOutTip;
+ (void)setGalleryTileSwitch:(id)arg1;
+ (_Bool)appGalleryTileSwitchOn;
+ (void)setGallerySlideOutSwitch:(id)arg1;
+ (_Bool)appGallerySlideOutSwitchOn;
+ (void)setPGCAuthorSelfRecommendAllowed:(_Bool)arg1;
+ (_Bool)isPGCAuthorSelfRecommendAllowed;
+ (void)setNewTaobaoSDkEnable:(_Bool)arg1;
+ (_Bool)newTaobaoSDkEnable;
+ (void)saveTeMaiURLs:(id)arg1;
+ (id)getTeMaiURLs;
+ (_Bool)isTeMaiURL:(id)arg1;
+ (void)setKeplerEnable:(_Bool)arg1;
+ (void)setTBSDKEnable:(_Bool)arg1;
+ (_Bool)isKeplerEnable;
+ (_Bool)isTBSDKEnable;
+ (void)setCagetoryGuideCount:(long long)arg1;
+ (long long)cagetoryGuideCount;
+ (void)setDetailActionType:(long long)arg1;
+ (long long)detailActionType;
+ (void)setDetailActionTick:(id)arg1;
+ (id)detailActionTick;
+ (void)setFavorDetailActionType:(long long)arg1;
+ (long long)favorDetailActionType;
+ (void)setFavorDetailActionTick:(id)arg1;
+ (id)favorDetailActionTick;
+ (void)setSubscribeCount:(long long)arg1;
+ (long long)subscribeCount;
+ (void)setFavorCount:(long long)arg1;
+ (long long)favorCount;
+ (void)setEnableCacheSizeReport:(_Bool)arg1;
+ (_Bool)enableCacheSizeReport;
+ (void)setEnableJSONModelMonitor:(_Bool)arg1;
+ (_Bool)enableJSONModelMonitor;
+ (void)setEnableDebugRealMonitor:(_Bool)arg1;
+ (_Bool)enableDebugRealMonitor;
+ (void)setEnableCrashMonitor:(_Bool)arg1;
+ (_Bool)enableCrashMonitor;
+ (void)setCheckLog:(_Bool)arg1;
+ (_Bool)checkLog;
+ (void)setMonitorLog:(_Bool)arg1;
+ (_Bool)monitorLog;
+ (void)setUseEncrypt:(_Bool)arg1;
+ (_Bool)useEncrypt;
+ (_Bool)enableSdWebImageMonitor;
+ (void)setEnableSdWebImageMonitor:(_Bool)arg1;
+ (_Bool)isPreloadVideoUseStreamDisabled;
+ (void)setPreloadVideoDisableStream:(_Bool)arg1;
+ (_Bool)isPreloadVideoEnabled;
+ (void)setPreloadVideoEnable:(_Bool)arg1;
+ (_Bool)isVideoFloatingEnabled;
+ (void)setVideoFloatingEnable:(id)arg1;
+ (id)followTabTipsString;
+ (void)setFollowTabTipsString:(id)arg1;
+ (_Bool)isFollowTabTipsEnable;
+ (void)setFollowTabTipsEnable:(_Bool)arg1;
+ (_Bool)isPreloadFollowEnable;
+ (void)setPreloadFollowEnable:(_Bool)arg1;
+ (_Bool)isEnableArticleReadPosition;
+ (void)setArticleReadPositionEnable:(_Bool)arg1;
+ (_Bool)isMultiResolutionEnabled;
+ (void)setMultiResolutionEnable:(_Bool)arg1;
+ (_Bool)shouldShowLastReadForCategoryID:(id)arg1;
+ (unsigned long long)getAutoRefreshIntervalForCategoryID:(id)arg1;
+ (id)getChannelControlDict;
+ (void)setChannelControlDict:(id)arg1;
+ (void)removeHomepageUIConfigSimultaneousKey;
+ (void)setHomepageUIConfigSimultaneouslyValid:(_Bool)arg1;
+ (_Bool)homepageUIConfigSimultaneouslyValid;
+ (void)setUploadAccurateTrackFinished:(_Bool)arg1;
+ (_Bool)hasUploadAccurateTrack;
+ (_Bool)isPosterADClickEnabled;
+ (void)setPosterADClickEnabled:(_Bool)arg1;
+ (id)loginEntryList;
+ (void)setLoginEntryList:(id)arg1;
+ (void)setRefactorNaviEnabled:(_Bool)arg1;
+ (_Bool)isVideoFeedURLEnabled;
+ (void)setVideoFeedURLEnabled:(_Bool)arg1;
+ (_Bool)isVideoOwnPlayerEnabled;
+ (void)setVideoOwnPlayerEnabled:(_Bool)arg1;
+ (void)setIsNetWorkDebugEnable:(_Bool)arg1;
+ (_Bool)isNetWorkDebugEnable;
+ (void)setMaxNSUrlCache:(double)arg1;
+ (double)maxNSUrlCache;
+ (void)setShouldUseKeplerService:(_Bool)arg1;
+ (_Bool)shouldUseKeplerService;
+ (void)setShouldUseALBBService:(_Bool)arg1;
+ (_Bool)shouldUseALBBService;
+ (void)setShouldUseOptimisedLaunch:(_Bool)arg1;
+ (_Bool)shouldUseOptimisedLaunch;
+ (_Bool)newFriendRelationshipEnabled;
+ (_Bool)newProfileEnabled;
+ (_Bool)newAccountManagementEnabled;
+ (_Bool)isNewFeedImpressionEnabled;
+ (void)setNewFeedImpressionEnabled:(_Bool)arg1;
+ (id)fetchH5SettingsForAuthor;
+ (void)setH5SettingsForAuthor:(id)arg1;
+ (_Bool)strictDetailJudgementEnabled;
+ (void)setStrictDetailJudgementEnabled:(_Bool)arg1;
+ (_Bool)isSearchOptimizeDisabled;
+ (void)disableSearchOptimize:(_Bool)arg1;
+ (_Bool)enabledVideoNewButton;
+ (void)setEnabledVideoNewButton:(_Bool)arg1;
+ (_Bool)enabledVideoRecommend;
+ (void)setEnabledVideoRecommend:(_Bool)arg1;
+ (void)setLayOutUnifyADCellEnabled:(_Bool)arg1;
+ (_Bool)isLayOutUnifyADCellEnabled;
+ (void)setLayOutCellEnabled:(_Bool)arg1;
+ (_Bool)isLayOutCellEnabled;
+ (_Bool)isShowNewTrafficViewEnabled;
+ (void)setShowNewTrafficViewEnabled:(_Bool)arg1;
+ (_Bool)isTTUniversalCommentCacheEnabled;
+ (void)enableTTUniversalCommentCache:(_Bool)arg1;
+ (_Bool)isUpgradeUserAfterImageDisplayModelControlled;
+ (void)setIsUpgradeUserAfterImageDisplayModeControlled:(_Bool)arg1;
+ (_Bool)imageDisplayModeFor3GIsSameAs2G;
+ (void)setImageDisplayModeFor3GIsSameAs2GEnable:(_Bool)arg1;
+ (_Bool)isThirdTabWeitoutiaoEnabled;
+ (void)setThirdTabWeitoutiaoEnabled:(_Bool)arg1;
+ (id)userVerifyFeedShowArray;
+ (id)userVerifyAvatarIconModelOfType:(id)arg1;
+ (id)userVerifyLabelIconModelOfType:(id)arg1;
+ (id)userVerifyIconModelConfigs;
+ (id)userVerifyConfigs;
+ (void)setUserVerifyConfigs:(id)arg1;
+ (unsigned long long)WeitoutiaoTabListUpdateTipType;
+ (void)setWeitoutiaoTabListUpdateTipType:(unsigned long long)arg1;
+ (id)ugcFeedNames;
+ (id)ugcShareName;
+ (id)ugcTopName;
+ (id)ugcTabName;
+ (void)setUGCFeedNamesWithDictionary:(id)arg1;
+ (_Bool)isCollectDiskSpaceEnable;
+ (void)setCollectDiskSpaceEnable:(_Bool)arg1;
+ (_Bool)isTTVideoProportionControlEnable;
+ (void)setTTVideoProportionControlEnable:(_Bool)arg1;
+ (double)detailVideoMaxHeight;
+ (void)setDetailVideoMaxHeightProportion:(double)arg1;
+ (double)listVideoMaxHeight;
+ (void)setListVideoMaxHeightProportion:(double)arg1;
+ (_Bool)isLiveUseOwnPlayerEnabled;
+ (void)setLiveUseOwnPlayerEnabled:(_Bool)arg1;
+ (_Bool)isPicsFollowEnabled;
+ (void)setPicsFollowEnabled:(_Bool)arg1;
+ (_Bool)isV3LogFormatEnabled;
+ (void)setV3LogFormatEnabled:(_Bool)arg1;
+ (_Bool)isRefactorCommentEnabled;
+ (void)setRefactorCommentEnabled:(_Bool)arg1;
+ (_Bool)isRefactorGetDomainsEnabled;
+ (void)setRefactorGetDomainsEnabled:(_Bool)arg1;
+ (_Bool)isVideoNewRotateEnabled;
+ (_Bool)isRotateTipEnabled;
+ (void)setVideoNewRotateTipEnabled:(_Bool)arg1;
+ (void)setVideoNewRotateEnabled:(_Bool)arg1;
+ (_Bool)enableCustomSDDownloaderOperation;
+ (void)setCustomSDDownloaderOperationEnable:(_Bool)arg1;
+ (_Bool)isFirstSplashEnable;
+ (void)setFirstSplashEnable:(_Bool)arg1;
+ (_Bool)isAdGifImageViewEnable;
+ (void)setAdGifImageViewEnable:(_Bool)arg1;
+ (_Bool)isAdNeedCommonParam;
+ (void)setAdNeedCommonParam:(_Bool)arg1;
+ (_Bool)isAdImpressionTrack;
+ (void)setAdImpressionTrack:(_Bool)arg1;
+ (_Bool)isAdResPreloadEnable;
+ (void)setAdResPreloadEnable:(_Bool)arg1;
+ (_Bool)isCanvasEnable;
+ (void)setCanvasEnable:(_Bool)arg1;
+ (_Bool)isUrlTrackerEnable;
+ (void)setUrlTrackerEnable:(_Bool)arg1;
+ (_Bool)isNativeCanvasEnable;
+ (void)setNativeCanvasEnable:(_Bool)arg1;
+ (_Bool)isTemailTrackerEnable;
+ (void)setTemailTrackerEnable:(_Bool)arg1;
+ (_Bool)isAppPreloadEnable;
+ (void)setAppPreloadEnable:(_Bool)arg1;
+ (_Bool)isWebDomCompleteEnable;
+ (void)setWebDomCompleteEnable:(_Bool)arg1;
+ (_Bool)isVideoBusinessSplitEnabled;
+ (void)setVideoBusinessSplitEnabled:(_Bool)arg1;
+ (double)fetchSettingTimeInterval;
+ (void)setFetchSettingTimeInterval:(double)arg1;
+ (_Bool)isFetchSettingWhenEnterForegroundEnabled;
+ (void)setFetchSettingWhenEnterForegroundEnable:(_Bool)arg1;
+ (_Bool)isGetRemoteCheckNetworkEnabled;
+ (void)setGetRemoteCheckNetworkEnable:(_Bool)arg1;
+ (_Bool)isWaterMarkEnabled;
+ (void)setWaterMarkEnabled:(_Bool)arg1;
+ (void)setMakeScreenshotForMethodBEnable:(_Bool)arg1;
+ (_Bool)makeScreenshotForMethodB;
+ (void)setScreenshotShareQR:(id)arg1;
+ (id)screenshotShareQR;
+ (void)setShareTextWithText:(id)arg1;
+ (id)shareText;
+ (void)setScreenshotEnable:(_Bool)arg1;
+ (_Bool)screenshotEnable;
+ (_Bool)isNewPullRefreshEnabled;
+ (void)setNewPullRefreshEnabled:(_Bool)arg1;
+ (_Bool)isVideoAdCellDislikeEnabled;
+ (void)setVideoAdCellDislikeEnabled:(_Bool)arg1;
+ (void)setVideoCompressRefactorEnabled:(_Bool)arg1;
+ (_Bool)isVideoCompressRefactorEnabled;
+ (_Bool)isVideoDetailIntensifyAuthorEnabled;
+ (void)setVideoDetailIntensifyAuthorEnabled:(_Bool)arg1;
+ (void)setRepostPlaceholderText:(id)arg1;
+ (id)repostPlaceholderText;
+ (void)setWeitoutiaoRepostNightIconURL:(id)arg1;
+ (id)weitoutiaoRepostNightIconURL;
+ (void)setWeitoutiaoRepostDayIconURL:(id)arg1;
+ (id)weitoutiaoRepostDayIconURL;
+ (void)setRepostOriginalReviewHint:(id)arg1;
+ (id)repostOriginalReviewHint;
+ (void)setRepostOriginalDeleteHint:(id)arg1;
+ (id)repostOriginalDeleteHint;
+ (_Bool)isFeedDislikeRefactorEnabled;
+ (void)setFeedDislikeRefactorEnabled:(_Bool)arg1;
+ (_Bool)isDislikeRefactorEnabled;
+ (void)setDislikeRefactorEnabled:(_Bool)arg1;
+ (_Bool)isVideoADReplayBtnEnabled;
+ (void)setVideoADReplayBtnEnabled:(_Bool)arg1;
+ (_Bool)isRealnameAuthEncryptDisabled;
+ (void)setRealnameAuthEncryptDisabled:(_Bool)arg1;
+ (_Bool)isReportTyposEnabled;
+ (void)setReportTyposEnabled:(_Bool)arg1;
+ (_Bool)transitionAnimationEnable;
+ (void)setTransitionAnimationEnable:(_Bool)arg1;
+ (_Bool)isIMServerEnable;
+ (void)setIMServerEnabled:(_Bool)arg1;
+ (_Bool)isVideoCellShowShareEnabled;
+ (void)setVideoCellShowShareEnabled:(_Bool)arg1;
+ (_Bool)imageTransitionAnimationEnable;
+ (void)setImageTransitionAnimationEnable:(_Bool)arg1;
+ (_Bool)isNewMessageNotificationEnabled;
+ (void)setNewMessageNotificationEnabled:(_Bool)arg1;
+ (double)videoPasterADRequestPercent;
+ (void)setVideoPasterADRequestPercent:(double)arg1;
+ (_Bool)isPersonalHomeMediaTypeThreeEnable;
+ (void)setPersonalHomeMediaTypeThreeEnable:(_Bool)arg1;
+ (_Bool)isPersonalHomeTabEnable;
+ (void)setPersonHomeTabEnable:(_Bool)arg1;
+ (_Bool)isPersonalHomeEnable;
+ (void)setPersonalHomeEnable:(_Bool)arg1;
+ (id)htsDetailToastControlDict;
+ (void)setHTSDetailToastControlDict:(id)arg1;
+ (_Bool)htsTabMineIconTipsHasShow;
+ (void)setHTSTabMineIconTipsHasShow:(_Bool)arg1;
+ (id)htsAPPAppleID;
+ (id)htsAppDownloadInfoDict;
+ (void)setHTSAppDownloadInfoDict:(id)arg1;
+ (id)htsTabMineIconURL;
+ (void)setHTSTabMineIconURL:(id)arg1;
+ (_Bool)htsTabBannerEnabled;
+ (id)htsTabBannerInfoDict;
+ (void)setHTSTabBannerInfoDict:(id)arg1;
+ (id)htsTabABActionDict;
+ (void)setHTSTabABActionDict:(id)arg1;
+ (_Bool)isLaunchHuoShanAppEnabled;
+ (void)setLaunchHuoShanAppEnabled:(_Bool)arg1;
+ (_Bool)isHTSAppInstalled;
+ (_Bool)isForthTabHTSEnabled;
+ (void)setForthTabHTSEnabled:(_Bool)arg1;
+ (_Bool)isAppLogSendOptimizeEnabled;
+ (void)setAppLogSendOptimizeEnabled:(_Bool)arg1;
+ (_Bool)isNewLaunchOptimizeEnabled;
+ (void)setNewLaunchOptimizeEnabled:(_Bool)arg1;
+ (_Bool)playUseIp;
+ (void)setPlayUseIp:(_Bool)arg1;
+ (_Bool)isVideoDetailPlayLastEnabled;
+ (void)setVideoDetailPlayLastEnabled:(_Bool)arg1;
+ (_Bool)isVideoDetailPlayLastShowText;
+ (void)setVideoDetailPlayLastShowText:(_Bool)arg1;
+ (_Bool)isUGCNewCellEnable;
+ (void)setUGCNewCellEnable:(_Bool)arg1;
+ (_Bool)isUGCThreadPostImageWebP;
+ (void)setUGCThreadPostImageWebP:(_Bool)arg1;
+ (long long)getMaxGifData;
+ (void)setMaxGifData:(long long)arg1;
+ (_Bool)isCrashFixEnabled;
+ (void)setCrashFixEnabled:(_Bool)arg1;
+ (_Bool)handleInterruptTrickMethodEnable;
+ (void)setHandleInterruptTrickMethodEnable:(_Bool)arg1;
+ (void)setLocationCookieDomains:(id)arg1;
+ (id)locationCookieDomains;
+ (_Bool)weiboExpirationDetectEnable;
+ (void)setWeiboExpirationDetectEnable:(_Bool)arg1;
+ (_Bool)isRepeatedAdDisable;
+ (void)setRepeatedAdDisable:(_Bool)arg1;
+ (long long)imCommunicateStrategy;
+ (void)setimCommunicateStrategy:(long long)arg1;
+ (_Bool)openInSafariWindowEnable;
+ (void)setOpenInSafariWindowEnable:(_Bool)arg1;
@property(copy, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
@property(nonatomic) _Bool ssIPhoneSupportRotate; // @synthesize ssIPhoneSupportRotate=_ssIPhoneSupportRotate;
- (void).cxx_destruct;

@end
