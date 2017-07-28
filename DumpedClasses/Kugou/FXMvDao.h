//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXMvDao : FXBasisHttpDao
{
}

- (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (_Bool)deleteMVWithId:(long long)arg1 type:(int)arg2 error:(id *)arg3;
- (id)getMyMVs_newWithUserId:(long long)arg1 Page:(int)arg2 PageSize:(int)arg3 opusId:(long long)arg4 mvId:(long long)arg5 IsMyMVList:(_Bool)arg6 error:(id *)arg7;
- (id)getMVWithTitle:(id)arg1 error:(id *)arg2;
- (id)getMvCommentListByTime:(id)arg1 error:(id *)arg2;
- (id)queryStarNewestShot:(long long)arg1 error:(id *)arg2;
- (id)requestRecordMVInfoWithHash:(id)arg1 error:(id *)arg2;
- (id)requestAvailableLabelsWithError:(id *)arg1;
- (id)queryMVStatusWithVideoId:(long long)arg1 error:(id *)arg2;
- (_Bool)saveMVWithRequestItem:(id)arg1 error:(id *)arg2;
- (_Bool)stopRecordMV:(long long)arg1 error:(id *)arg2;
- (_Bool)sendShareStatistics:(id)arg1 error:(id *)arg2;
- (_Bool)deleteMVWithMVId:(long long)arg1 error:(id *)arg2;
- (_Bool)sendPlayStatis:(id)arg1 error:(id *)arg2;
- (id)sendComment:(id)arg1 error:(id *)arg2;
- (_Bool)sendSupport:(id)arg1 error:(id *)arg2;
- (_Bool)sendDig:(id)arg1 error:(id *)arg2;
- (id)getDigState:(id)arg1 error:(id *)arg2;
- (id)getOtherMVList:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 error:(id *)arg4;
- (id)getCommentSupportState:(id)arg1 error:(id *)arg2;
- (id)getMyMVList:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 error:(id *)arg4;
- (id)getMvDetail:(id)arg1 error:(id *)arg2;
- (id)getMvCommentList:(id)arg1 error:(id *)arg2;

@end
