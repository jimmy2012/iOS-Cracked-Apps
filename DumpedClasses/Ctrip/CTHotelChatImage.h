//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface CTHotelChatImage : NSObject
{
    NSString *_imgUrl;
    NSString *_thumbUrl;
    double _imageHeight;
    double _imageWidth;
    UIImage *_origImage;
    UIImage *_thumbImage;
}

@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImage *origImage; // @synthesize origImage=_origImage;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLocalImage;
- (id)init;

@end
