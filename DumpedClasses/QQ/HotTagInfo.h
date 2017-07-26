//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface HotTagInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _tagId;
    NSString *_tagName;
    unsigned long long _tagType;
}

@property unsigned long long tagType; // @synthesize tagType=_tagType;
@property(copy) NSString *tagName; // @synthesize tagName=_tagName;
@property unsigned long long tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
