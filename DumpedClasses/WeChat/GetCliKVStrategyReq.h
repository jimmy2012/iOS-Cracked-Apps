//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData;

@interface GetCliKVStrategyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int generalVersion; // @dynamic generalVersion;
@property(nonatomic) unsigned int kvgeneralVersion; // @dynamic kvgeneralVersion;
@property(nonatomic) unsigned int kvspecialVersion; // @dynamic kvspecialVersion;
@property(nonatomic) unsigned int kvwhiteOrBlackUinVersion; // @dynamic kvwhiteOrBlackUinVersion;
@property(retain, nonatomic) NSData *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int specialVersion; // @dynamic specialVersion;
@property(nonatomic) unsigned int whiteOrBlackUinVersion; // @dynamic whiteOrBlackUinVersion;

@end
