//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface HotelCouponItemModel : CTBusinessBean <NSCoding>
{
    int couponAmount;
    NSString *couponInfo;
    NSString *title;
    NSString *url;
    _Bool isOverseas;
}

@property(nonatomic) _Bool isOverseas; // @synthesize isOverseas;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *couponInfo; // @synthesize couponInfo;
@property(nonatomic) int couponAmount; // @synthesize couponAmount;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
