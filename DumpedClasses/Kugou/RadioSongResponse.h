//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface RadioSongResponse : NSObject
{
    long long _status;
    NSString *_error;
    NSMutableArray *_radioSongs;
}

@property(retain, nonatomic) NSMutableArray *radioSongs; // @synthesize radioSongs=_radioSongs;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

