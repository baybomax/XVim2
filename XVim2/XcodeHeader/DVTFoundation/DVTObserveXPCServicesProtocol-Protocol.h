//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol DVTObserveXPCServicesProtocol
- (void)enableExtensionWithIdentifier:(NSString *)arg1;
- (void)stopObservingServicesForPid:(int)arg1;
- (void)observerServiceNamed:(NSString *)arg1 parentPid:(int)arg2 args:(NSArray *)arg3 env:(NSDictionary *)arg4 startSuspended:(BOOL)arg5 interposeBinaryAtPath:(NSString *)arg6;
@end

