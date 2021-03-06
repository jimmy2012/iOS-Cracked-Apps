//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface HotelCouponItemViewModel : CTBusinessBean
{
    _Bool _isExtendCoupon;
    int _itemType;
    int _property;
    int _couponType;
    int _couponAmountType;
    int _itemTypeBitmap;
    int _flagBitmap;
    NSString *_itemID;
    NSString *_title;
    NSString *_echoTitle;
    NSString *_activityDescription;
    PriceType *_amount;
    NSString *_couponCode;
    NSString *_couponID;
}

+ (id)getNoUseCouponModel;
+ (id)getDirectCouponModel;
+ (id)transResponseModelToViewModel:(id)arg1 couponIndex:(int)arg2;
@property(nonatomic) _Bool isExtendCoupon; // @synthesize isExtendCoupon=_isExtendCoupon;
@property(nonatomic) int flagBitmap; // @synthesize flagBitmap=_flagBitmap;
@property(nonatomic) int itemTypeBitmap; // @synthesize itemTypeBitmap=_itemTypeBitmap;
@property(nonatomic) int couponAmountType; // @synthesize couponAmountType=_couponAmountType;
@property(nonatomic) int couponType; // @synthesize couponType=_couponType;
@property(copy, nonatomic) NSString *couponID; // @synthesize couponID=_couponID;
@property(nonatomic) int property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(copy, nonatomic) NSString *echoTitle; // @synthesize echoTitle=_echoTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)init;

@end

