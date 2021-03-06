//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "O2OCDPAdapterPromotionProtocol.h"
#import "O2OMerchantH5PluginManagerDelegate.h"

@class NSString, O2OMerchantDataArray, O2OMerchantH5PluginManager;

@interface O2OMerchantDataRedoManager : NSObject <O2OCDPAdapterPromotionProtocol, O2OMerchantH5PluginManagerDelegate>
{
    _Bool _canUpdateView;
    _Bool _useBirdNest;
    O2OMerchantH5PluginManager *_h5PluginManager;
    _Bool _asyncDisplay;
    O2OMerchantDataArray *_blockData;
    id <O2OMerchantDataRedoDelegate> _delegate;
}

@property(nonatomic) __weak id <O2OMerchantDataRedoDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(retain, nonatomic) O2OMerchantDataArray *blockData; // @synthesize blockData=_blockData;
- (void).cxx_destruct;
- (id)h5PluginManager;
- (void)showDownLoadTemplateItem:(id)arg1;
- (void)startDownloadMistTemplate:(id)arg1;
- (id)hideMistListItem;
- (void)downLoadImage:(id)arg1;
- (id)hideCdpImageItem;
- (void)promotionViewsDidFinishLoading:(id)arg1 spaceCodes:(id)arg2;
- (void)queryCDPItem:(id)arg1;
- (id)hideCdpSDKItem;
- (void)refreash:(id)arg1;
- (id)hideH5ViewItem;
- (void)redoMainModelData;
- (void)redoSubModelData;
- (void)redoFeedModelData;
- (void)mergeHomeTabListBlock:(id)arg1 blockIds:(id)arg2 cover:(_Bool)arg3;
- (void)updateData:(_Bool)arg1;
- (id)initWithDataArray:(id)arg1 useBirdNest:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

