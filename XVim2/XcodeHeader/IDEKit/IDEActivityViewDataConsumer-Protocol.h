//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEActivityReport, IDEActivityStatusCategory, IDEActivityViewDataSource, NSString;

@protocol IDEActivityViewDataConsumer <NSObject>
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 issueCountDidChangeForIssueCategory:(IDEActivityStatusCategory *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 workspaceRepresentingTypeStringDidChangeTo:(NSString *)arg2;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(IDEActivityViewDataSource *)arg1;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 activityReportDidComplete:(IDEActivityReport *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 displayDelayTimeWasMetForActivityReport:(IDEActivityReport *)arg2;
- (void)activityViewDataSource:(IDEActivityViewDataSource *)arg1 minimumDisplayTimeWasMetForActivityReport:(IDEActivityReport *)arg2;
- (void)activityReportListDidChangeForActivityViewDataSource:(IDEActivityViewDataSource *)arg1;
@end

