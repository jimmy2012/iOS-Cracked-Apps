//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PBNonGregorianDate;

@interface PBPerson : NSObject
{
    int _action;
    NSString *_Id;
    NSString *_sid;
    NSString *_fullName;
    NSString *_sysFullName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_nickname;
    NSArray *_phones;
    NSArray *_emails;
    NSString *_phoneticFirstName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_departmentName;
    NSString *_jobTitle;
    NSString *_note;
    NSArray *_postalAddresses;
    NSArray *_urlAddresses;
    NSArray *_contactRelations;
    NSArray *_socialProfiles;
    NSArray *_instantMessageAddresses;
    long long _birthday;
    PBNonGregorianDate *_nonGregorianBirthday;
    NSArray *_dates;
    NSString *_md5;
}

@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSArray *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) PBNonGregorianDate *nonGregorianBirthday; // @synthesize nonGregorianBirthday=_nonGregorianBirthday;
@property(nonatomic) long long birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(retain, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain, nonatomic) NSArray *contactRelations; // @synthesize contactRelations=_contactRelations;
@property(retain, nonatomic) NSArray *urlAddresses; // @synthesize urlAddresses=_urlAddresses;
@property(retain, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(retain, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(retain, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(retain, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(retain, nonatomic) NSString *sysFullName; // @synthesize sysFullName=_sysFullName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (_Bool)isSamePersonWith:(id)arg1;
- (id)genFullName;
- (void)genHashValue;
- (id)stringFromArray:(id)arg1;
- (id)description;
- (id)stringForIvar:(id)arg1;
- (id)init;

@end

