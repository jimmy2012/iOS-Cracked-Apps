//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEvent.h"

@class NMAlbum;

@interface NMAlbumEvent : NMEvent
{
    NMAlbum *_album;
}

@property(retain, nonatomic) NMAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (id)getMainObject;
- (id)getTypeDesc;
- (id)initWithDictionary:(id)arg1;

@end

