//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTrainSalePackageInfoViewModel, CustomerAddressItemModel, NSMutableArray, NSString;

@interface Train6OrderBookingModel : NSObject
{
    _Bool _isOffsetTicket;
    _Bool _isSelectInvoice;
    NSString *_orderType;
    NSString *_appVersion;
    NSString *_userName12306;
    NSString *_userPass12306;
    NSString *_cookie12306;
    NSString *_contactPhone;
    CustomerAddressItemModel *_invoiceAddress;
    CTTrainSalePackageInfoViewModel *_salePackage;
    NSMutableArray *_appendList;
    long long _transferSequence;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) long long transferSequence; // @synthesize transferSequence=_transferSequence;
@property(retain, nonatomic) NSMutableArray *appendList; // @synthesize appendList=_appendList;
@property(retain, nonatomic) CTTrainSalePackageInfoViewModel *salePackage; // @synthesize salePackage=_salePackage;
@property(retain, nonatomic) CustomerAddressItemModel *invoiceAddress; // @synthesize invoiceAddress=_invoiceAddress;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(copy, nonatomic) NSString *cookie12306; // @synthesize cookie12306=_cookie12306;
@property(copy, nonatomic) NSString *userPass12306; // @synthesize userPass12306=_userPass12306;
@property(copy, nonatomic) NSString *userName12306; // @synthesize userName12306=_userName12306;
@property(nonatomic) _Bool isSelectInvoice; // @synthesize isSelectInvoice=_isSelectInvoice;
@property(nonatomic) _Bool isOffsetTicket; // @synthesize isOffsetTicket=_isOffsetTicket;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
- (void).cxx_destruct;

@end

