//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCHDInviteInfoModel<Optional>, DCHomeWordingInfoModel<Optional>, DCTripInfo<Optional>, NSString<Optional>;

@interface DCHomePublishRouteModel : JSONModel
{
    NSString<Optional> *_departure_time;
    NSString<Optional> *_from_name;
    NSString<Optional> *_to_name;
    DCTripInfo<Optional> *_trip_info;
    DCHomeWordingInfoModel<Optional> *_wording_info;
    DCHDInviteInfoModel<Optional> *_invite_info;
}

@property(retain, nonatomic) DCHDInviteInfoModel<Optional> *invite_info; // @synthesize invite_info=_invite_info;
@property(retain, nonatomic) DCHomeWordingInfoModel<Optional> *wording_info; // @synthesize wording_info=_wording_info;
@property(retain, nonatomic) DCTripInfo<Optional> *trip_info; // @synthesize trip_info=_trip_info;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
- (void).cxx_destruct;
- (id)inviteInfo;
- (id)wordingModel;

@end
