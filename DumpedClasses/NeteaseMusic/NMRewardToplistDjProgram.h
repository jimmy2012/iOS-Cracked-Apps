//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMRewardToplistObject.h"

@class NSString;

@interface NMRewardToplistDjProgram : NMRewardToplistObject
{
    NSString *_djProgramId;
    NSString *_name;
    NSString *_djProgramImageURL;
    NSString *_djRadioName;
    NSString *_djRadioCategory;
    NSString *_djId;
}

@property(readonly, copy, nonatomic) NSString *djId; // @synthesize djId=_djId;
@property(readonly, copy, nonatomic) NSString *djRadioCategory; // @synthesize djRadioCategory=_djRadioCategory;
@property(readonly, copy, nonatomic) NSString *djRadioName; // @synthesize djRadioName=_djRadioName;
@property(readonly, copy, nonatomic) NSString *djProgramImageURL; // @synthesize djProgramImageURL=_djProgramImageURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *djProgramId; // @synthesize djProgramId=_djProgramId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)toRewardResource;

@end

