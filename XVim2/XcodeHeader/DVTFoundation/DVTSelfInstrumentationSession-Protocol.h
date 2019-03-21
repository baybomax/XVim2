//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSString;

@protocol DVTSelfInstrumentationSession <NSObject>
+ (NSString *)fileExtensionForTimeProfile;
+ (id)timeProfileSessionOrError:(id *)arg1;
+ (void)sendStopSignalWithName:(NSString *)arg1;
+ (void)sendPointSignalWithName:(NSString *)arg1;
+ (void)sendStartSignalWithName:(NSString *)arg1;
- (BOOL)endSessionAndDiscardResultsWithError:(id *)arg1;
- (NSString *)endSessionAndSaveToPath:(NSString *)arg1 error:(id *)arg2;
@end

