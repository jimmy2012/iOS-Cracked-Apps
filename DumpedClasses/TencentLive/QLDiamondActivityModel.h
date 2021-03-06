//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSString, QLASIHTTPRequest;

@interface QLDiamondActivityModel : QLRequestModel
{
    NSString *_optionalKey;
    NSString *_actiTitle;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSString *actiTitle; // @synthesize actiTitle=_actiTitle;
@property(retain, nonatomic) NSString *optionalKey; // @synthesize optionalKey=_optionalKey;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealWithResponse:(id)arg1 resp:(id)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end

