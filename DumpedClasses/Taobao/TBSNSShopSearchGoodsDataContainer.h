//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSCardListDataContainer.h"

@class TBSNSShopListEmptyData;

@interface TBSNSShopSearchGoodsDataContainer : TBSNSCardListDataContainer
{
    TBSNSShopListEmptyData *_headerGoods;
}

@property(retain, nonatomic) TBSNSShopListEmptyData *headerGoods; // @synthesize headerGoods=_headerGoods;
- (void).cxx_destruct;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (id)init;

@end

