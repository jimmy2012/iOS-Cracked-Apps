//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTourPackageSubDestModel, NSString;

@protocol CTTourPkgDistrictDelegate <NSObject>
- (void)selectDistrictButton:(_Bool)arg1 WithHeight:(double)arg2 AndPos:(unsigned long long)arg3 AndModuleName:(NSString *)arg4;
- (void)selectDistrictCity:(CTTourPackageSubDestModel *)arg1 AndModuleIndex:(unsigned long long)arg2 AndKwdIndex:(unsigned long long)arg3 AndModuleName:(NSString *)arg4;
@end
