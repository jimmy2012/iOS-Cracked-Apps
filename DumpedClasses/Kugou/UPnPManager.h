//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceFactory, MediaPlaylist, MediaRenderer1Device, SSDPDB_ObjC, UPnPDB, UPnPEvents;

@interface UPnPManager : NSObject
{
    SSDPDB_ObjC *SSDP;
    UPnPDB *DB;
    DeviceFactory *deviceFactory;
    UPnPEvents *upnpEvents;
    MediaRenderer1Device *defaultMediaRenderer1;
    MediaPlaylist *defaultPlaylist;
    _Bool _inProcessOfRestart;
}

+ (id)GetInstance;
@property(readonly) MediaPlaylist *defaultPlaylist; // @synthesize defaultPlaylist;
@property(retain, nonatomic) MediaRenderer1Device *defaultMediaRenderer1; // @synthesize defaultMediaRenderer1;
@property(readonly) UPnPEvents *upnpEvents; // @synthesize upnpEvents;
@property(retain, nonatomic) DeviceFactory *deviceFactory; // @synthesize deviceFactory;
@property(readonly) UPnPDB *DB; // @synthesize DB;
@property(readonly) SSDPDB_ObjC *SSDP; // @synthesize SSDP;
- (void)reinitUPnP;
- (void)restartSSDPSearchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearAllDevices;
- (void)dealloc;
- (id)init;

@end

