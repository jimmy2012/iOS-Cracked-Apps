//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface DBHelper : NSObject
{
    struct sqlite3 *database;
    NSLock *excutionLock;
    _Bool isFirstInit;
    NSString *databaseName;
}

- (void).cxx_destruct;
- (void)initDB;
- (struct sqlite3 *)getDatabase;

@end
