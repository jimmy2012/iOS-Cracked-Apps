//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSArray, QZBroadcastUrl;

@interface QZBroadcastAudio : QzoneModel
{
}

+ (id)fromJSON:(id)arg1;
+ (id)fromJceObject:(id)arg1;

// Remaining properties
@property(retain, nonatomic) QZBroadcastUrl *masterUrl; // @dynamic masterUrl;
@property(retain, nonatomic) NSArray *slaveUrl; // @dynamic slaveUrl;

@end
