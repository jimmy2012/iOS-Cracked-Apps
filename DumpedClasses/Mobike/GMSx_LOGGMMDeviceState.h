//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_LOGGMMBatteryState, GMSx_LOGGMMDiskState, GMSx_LOGGMMNetworkState;

@interface GMSx_LOGGMMDeviceState : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appCheckpoint; // @dynamic appCheckpoint;
@property(retain, nonatomic) GMSx_LOGGMMBatteryState *batteryState; // @dynamic batteryState;
@property(retain, nonatomic) GMSx_LOGGMMDiskState *diskState; // @dynamic diskState;
@property(nonatomic) _Bool hasAppCheckpoint; // @dynamic hasAppCheckpoint;
@property(nonatomic) _Bool hasBatteryState; // @dynamic hasBatteryState;
@property(nonatomic) _Bool hasDiskState; // @dynamic hasDiskState;
@property(nonatomic) _Bool hasNetworkState; // @dynamic hasNetworkState;
@property(retain, nonatomic) GMSx_LOGGMMNetworkState *networkState; // @dynamic networkState;

@end
