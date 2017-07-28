//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBikeCoords, CLLocation, CUserInfo, CardHelp, Ivitation, MBKAdConfigModel, NSArray, NSDictionary, NSString, NSUserDefaults, ProgressModel, RouteAnnotation, SearchPoiAnnotation, configs, ridingAppraiseComment, ridingShareModel;

@interface MBKSettingStore : NSObject
{
    NSUserDefaults *_userDefault;
    CUserInfo *_userInfo;
    ridingAppraiseComment *_ridingAppraiseInfo;
    CBikeCoords *_bikeCoords;
    CardHelp *_cardHelp;
    Ivitation *_invitation;
    ridingShareModel *shareContent;
    long long appraiseCount;
    NSArray *supportCountrys;
    MBKAdConfigModel *_adConfig;
    NSArray *_cardListArray;
    _Bool _isWalkRoute;
    _Bool _isChangePhone;
    _Bool _isChinaUser;
    _Bool _isInChina;
    _Bool _treasureHunterFlag;
    int _redBikeFreetime;
    int _redMoney;
    int _redpackRidingtime;
    int _unlockInterval;
    long long _tapProcessMode;
    CLLocation *_userLoc;
    RouteAnnotation *_startAnnotation;
    RouteAnnotation *_endAnnotation;
    CLLocation *_bikeLocation;
    SearchPoiAnnotation *_searchPoiAnnotation;
    NSString *_baseUrl;
    NSString *_baseUrlSpecial;
    NSDictionary *_ridingParams;
    NSString *_locaCityCode;
    NSString *_locaCityName;
    NSString *_selectBikeId;
    long long _stuVerifyProgress;
    NSString *_stuVerifyNotice;
    ProgressModel *_progressModel;
    NSString *_macaddress;
    NSString *_bleData;
    long long _registerCountryId;
    long long _currLocationCountryId;
    configs *_config;
    NSArray *_webSupportedLangList;
    struct CLLocationCoordinate2D _reqPoiLocation;
    struct CLLocationCoordinate2D _rgcPoiLocation;
    struct CLLocationCoordinate2D _locaCoordinate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *webSupportedLangList; // @synthesize webSupportedLangList=_webSupportedLangList;
@property(retain) configs *config; // @synthesize config=_config;
@property(nonatomic) long long currLocationCountryId; // @synthesize currLocationCountryId=_currLocationCountryId;
@property(nonatomic) long long registerCountryId; // @synthesize registerCountryId=_registerCountryId;
@property(nonatomic) _Bool treasureHunterFlag; // @synthesize treasureHunterFlag=_treasureHunterFlag;
@property(nonatomic) _Bool isInChina; // @synthesize isInChina=_isInChina;
@property(nonatomic) _Bool isChinaUser; // @synthesize isChinaUser=_isChinaUser;
@property _Bool isChangePhone; // @synthesize isChangePhone=_isChangePhone;
@property(nonatomic) int unlockInterval; // @synthesize unlockInterval=_unlockInterval;
@property(retain, nonatomic) NSString *bleData; // @synthesize bleData=_bleData;
@property(retain, nonatomic) NSString *macaddress; // @synthesize macaddress=_macaddress;
@property(retain, nonatomic) ProgressModel *progressModel; // @synthesize progressModel=_progressModel;
@property(retain, nonatomic) NSString *stuVerifyNotice; // @synthesize stuVerifyNotice=_stuVerifyNotice;
@property(nonatomic) long long stuVerifyProgress; // @synthesize stuVerifyProgress=_stuVerifyProgress;
@property(retain, nonatomic) NSString *selectBikeId; // @synthesize selectBikeId=_selectBikeId;
@property(nonatomic) struct CLLocationCoordinate2D locaCoordinate; // @synthesize locaCoordinate=_locaCoordinate;
@property(retain, nonatomic) NSString *locaCityName; // @synthesize locaCityName=_locaCityName;
@property(retain, nonatomic) NSString *locaCityCode; // @synthesize locaCityCode=_locaCityCode;
@property(retain, nonatomic) NSDictionary *ridingParams; // @synthesize ridingParams=_ridingParams;
@property(retain, nonatomic) NSString *baseUrlSpecial; // @synthesize baseUrlSpecial=_baseUrlSpecial;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain) SearchPoiAnnotation *searchPoiAnnotation; // @synthesize searchPoiAnnotation=_searchPoiAnnotation;
@property(retain) CLLocation *bikeLocation; // @synthesize bikeLocation=_bikeLocation;
@property(retain) RouteAnnotation *endAnnotation; // @synthesize endAnnotation=_endAnnotation;
@property(retain) RouteAnnotation *startAnnotation; // @synthesize startAnnotation=_startAnnotation;
@property(retain) CLLocation *userLoc; // @synthesize userLoc=_userLoc;
@property long long tapProcessMode; // @synthesize tapProcessMode=_tapProcessMode;
@property(nonatomic) struct CLLocationCoordinate2D rgcPoiLocation; // @synthesize rgcPoiLocation=_rgcPoiLocation;
@property(nonatomic) struct CLLocationCoordinate2D reqPoiLocation; // @synthesize reqPoiLocation=_reqPoiLocation;
@property _Bool isWalkRoute; // @synthesize isWalkRoute=_isWalkRoute;
@property int redpackRidingtime; // @synthesize redpackRidingtime=_redpackRidingtime;
@property int redMoney; // @synthesize redMoney=_redMoney;
@property int redBikeFreetime; // @synthesize redBikeFreetime=_redBikeFreetime;
- (void).cxx_destruct;
- (id)getCardConfigModelWithType:(id)arg1;
- (void)clearCardListArray;
- (id)getCardListArray;
- (void)saveCardListArray:(id)arg1;
@property(nonatomic) _Bool isDeniedHealthKit;
- (void)clearAdConfig;
- (id)getAdCongfig;
- (void)saveAdConfig:(id)arg1;
@property(nonatomic) struct CLLocationCoordinate2D lastUserCoordinate;
@property(nonatomic) NSString *areaStat;
@property(nonatomic) _Bool mapType;
- (_Bool)shouleDownOfflineMap:(id)arg1;
- (id)ContryCode;
- (id)LanguageCode;
- (id)getShareContent;
- (void)saveShareContent:(id)arg1;
- (void)saveDownloadProgress:(id)arg1;
- (id)getSupportCountry;
- (id)getDownloadProgress;
- (id)getBoundConfig;
- (void)clearConfigInfo;
- (id)getConfigInfo;
- (void)saveConfigInfo;
- (void)setappraiseCount:(long long)arg1;
- (long long)appraiseCount;
- (long long)getConfigVersion;
- (id)getCardConfig;
- (void)addTap:(int)arg1;
- (_Bool)isFirstTap:(int)arg1;
- (int)getMobikeIndexWith:(int)arg1;
- (id)getMobikeTypeWith:(int)arg1;
- (id)getMobikeConfigs;
- (id)getIconConfig;
- (_Bool)isOpenArea:(id)arg1;
- (void)bikeTypeIconOperation;
- (void)loadDefaultBike;
- (_Bool)shouldAddSearchableItem:(id)arg1;
- (void)setNetworkEnvironment:(long long)arg1;
- (long long)getNetworkEnvironment;
- (void)assignGifImageArrData:(id)arg1 forBikeType:(long long)arg2;
- (void)saveTreasureHunterGifIcon:(id)arg1;
- (void)getConfigsSucc:(id)arg1;
- (void)dealloc;
- (id)getTime;
- (void)saveTime:(id)arg1;
- (id)getBikeCoords;
- (void)saveBikeCoords:(id)arg1;
- (id)getBikdeLocation;
- (long long)getPushOrder;
- (void)savePushOrderCount:(long long)arg1;
- (_Bool)getBoolForKey:(id)arg1;
- (void)saveBool:(_Bool)arg1 forkey:(id)arg2;
- (int)getIntegerkey:(id)arg1;
- (void)saveInteger:(int)arg1 forkey:(id)arg2;
- (double)getDoubleforkey:(id)arg1;
- (void)saveDouble:(double)arg1 forkey:(id)arg2;
- (id)getCommonValue:(id)arg1;
- (void)saveCommonValue:(id)arg1 forKey:(id)arg2;
- (id)getPublicValueForKey:(id)arg1;
- (void)savePublicValue:(id)arg1 forKey:(id)arg2;
- (_Bool)isMPlPoint:(long long)arg1;
- (_Bool)isEggBike:(long long)arg1;
- (_Bool)isRedpocketBike:(long long)arg1;
- (long long)getVersion;
- (_Bool)didCompleteIdentification;
- (_Bool)didFinishChargingTheDeposit;
- (_Bool)didFinishLogin;
- (_Bool)isLogin;
- (id)getAuthToken;
- (id)getUserId;
- (id)getInvitation;
- (void)saveIvitation:(id)arg1;
- (id)getApprasieInfo;
- (void)saveApprasieInfo:(id)arg1;
- (void)clearUserInfo;
- (id)getUserInfo;
- (void)saveUserInfo:(id)arg1;
- (id)getCardInfo;
- (void)saveCardInfo:(id)arg1;
- (void)prepareCountryID;
- (id)init;

@end
