//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DVTCustomDataStoring;

@interface DVTPortalDeviceNameStore : NSObject
{
    id <DVTCustomDataStoring> _store;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (void)storeDeviceInfo:(id)arg1 forTeamID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)deviceInfoForTeamID:(id)arg1 error:(id *)arg2;
- (id)_specifierWithTeamID:(id)arg1;
- (id)initWithCustomDataStore:(id)arg1;

@end

