//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBView.h"

@class NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UITapGestureRecognizer;

@interface FBImg : FBView
{
    UITapGestureRecognizer *_tapRecognizer;
    UIColor *_color;
    UIActivityIndicatorView *_indicatior;
    NSString *_filterString;
    NSString *_applyFilter;
    NSArray *_filters;
    NSString *_oldSrc;
    NSString *_srcwidth;
    NSString *_srcheight;
    UIImageView *_imageView;
    NSString *_src;
    UIImage *_failedImage;
    UIImage *_defaultImage;
    NSMutableDictionary *_extras;
}

@property(retain, nonatomic) NSMutableDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIImage *failedImage; // @synthesize failedImage=_failedImage;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)applyFilter:(id)arg1;
- (void)applyFilters;
- (void)onClicked:(id)arg1;
- (void)updateEvent:(id)arg1 withValue:(id)arg2;
- (id)imagePathInCaches:(id)arg1;
- (id)cachesPath;
- (id)getImageInCaches:(id)arg1;
- (void)updateImageSize;
- (void)downloadImageWithUrl:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)downloadWebImage:(id)arg1;
- (void)onDownloadImgCompleted:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)downloadShopImage:(id)arg1;
- (void)downloadImgWithReq:(struct CGSize)arg1 value:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)setImageMode:(id)arg1;
- (void)onLayout;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

@end

