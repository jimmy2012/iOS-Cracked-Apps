//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHViewAdapter.h"

@class NSMutableDictionary;

@interface XYPHNoteDetailDescCellAdapter : XYPHViewAdapter
{
    NSMutableDictionary *_coreTextDataDict;
}

@property(retain, nonatomic) NSMutableDictionary *coreTextDataDict; // @synthesize coreTextDataDict=_coreTextDataDict;
- (void).cxx_destruct;
- (void)clearAllRecord;
- (struct CGSize)sizeOfCellForWidth:(double)arg1 note:(id)arg2;
- (void)setCell:(id)arg1 withTextData:(id)arg2;
- (id)getOriginalDataWithNote:(id)arg1;
- (id)init;

@end

