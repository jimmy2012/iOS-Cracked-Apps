//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelImageDetailBaseInformationModel : CTBusinessBean
{
    int _imageType;
    int _width;
    int _height;
    NSString *_imageUrl;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

