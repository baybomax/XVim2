//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTDiagnosticsCollector;

@protocol DVTDiagnosticsClient <NSObject>
- (void)collect:(DVTDiagnosticsCollector *)arg1;

@optional
- (void)willCollect;
@end

