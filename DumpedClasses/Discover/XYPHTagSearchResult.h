//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSAttributedString, NSString;

@interface XYPHTagSearchResult : XYRKModel
{
    NSString *_image;
    NSString *_displayName;
    NSString *_realName;
    NSString *_resultId;
    NSString *_parent;
    NSString *_parentId;
    NSAttributedString *_attrName;
    NSString *_link;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSAttributedString *attrName; // @synthesize attrName=_attrName;
@property(retain, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSString *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end
