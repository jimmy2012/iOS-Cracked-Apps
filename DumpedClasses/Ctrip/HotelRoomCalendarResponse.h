//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelRoomCalendarResponse : CTBusinessBean
{
    int _result;
    int _pageIndex;
    int _pageCount;
    NSString *_resultMessage;
    NSMutableArray *_roomPriceList;
}

@property(retain, nonatomic) NSMutableArray *roomPriceList; // @synthesize roomPriceList=_roomPriceList;
@property(nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
