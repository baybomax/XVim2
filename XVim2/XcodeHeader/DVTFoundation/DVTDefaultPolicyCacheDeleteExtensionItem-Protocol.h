//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTFilePath, NSDate;

@protocol DVTDefaultPolicyCacheDeleteExtensionItem <NSObject>
@property(readonly) unsigned long long size;
@property(readonly) BOOL isOrphaned;
@property(readonly) NSDate *lastAccessedDate;
@property(readonly) DVTFilePath *volume;
- (BOOL)deleteWithError:(id *)arg1;
@end

