//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface DCClassInfoModel : NSObject
{
    _Bool _isMeta;
    Class _cls;
    NSString *_name;
    Class _superCls;
    Class _metaCls;
    DCClassInfoModel *_superClassInfo;
    NSDictionary *_propertyInfos;
}

+ (id)classInfoWithClass:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *propertyInfos; // @synthesize propertyInfos=_propertyInfos;
@property(readonly, nonatomic) DCClassInfoModel *superClassInfo; // @synthesize superClassInfo=_superClassInfo;
@property(readonly, nonatomic) Class metaCls; // @synthesize metaCls=_metaCls;
@property(readonly, nonatomic) Class superCls; // @synthesize superCls=_superCls;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class cls; // @synthesize cls=_cls;
@property(readonly, nonatomic) _Bool isMeta; // @synthesize isMeta=_isMeta;
- (void).cxx_destruct;
- (void)_setup;
- (id)initWithClass:(Class)arg1;

@end
