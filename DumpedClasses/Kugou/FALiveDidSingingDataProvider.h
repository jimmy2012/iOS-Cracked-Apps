//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FALiveDidSingingDataProviderProtocol.h"

@class FALiveSongSheetListModel, NSString;

@interface FALiveDidSingingDataProvider : NSObject <FALiveDidSingingDataProviderProtocol>
{
    _Bool _songSheetLoading;
    long long starKugouId;
    id <FALiveDidSingingDataProviderDelegate> delegate;
    FALiveSongSheetListModel *_songSheetList;
}

@property(nonatomic) _Bool songSheetLoading; // @synthesize songSheetLoading=_songSheetLoading;
@property(retain, nonatomic) FALiveSongSheetListModel *songSheetList; // @synthesize songSheetList=_songSheetList;
@property(nonatomic) __weak id <FALiveDidSingingDataProviderDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long starKugouId; // @synthesize starKugouId;
- (void).cxx_destruct;
- (void)requestDidSongList;
- (void)songListHandleInviteCount:(id)arg1;
- (void)songListHandleGiftSupportCount:(id)arg1;
- (id)didSingingListModel;
- (void)getDidSingingList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

