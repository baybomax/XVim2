//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEActivityStatusCategory, IDEWorkspaceDocument, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol DVTCancellable, DVTInvalidation;

@interface IDEActivityViewDataSource : NSObject <DVTInvalidation>
{
    IDEWorkspaceDocument *_workspaceDocument;
    NSMutableSet *_registeredConsumers;
    BOOL _haveRegisteredFirstConsumer;
    NSString *_debugName;
    DVTObservingToken *_activityReportManagerCompletedReportsObservingToken;
    DVTObservingToken *_activityReportManagerValidObservingToken;
    id <DVTInvalidation> _activityReportManagerObservingToken;
    NSMapTable *_strongReportToStrongMinimumTimeTimerMap;
    NSMutableSet *_activityReportsUnderMinimumDisplayTime;
    NSMutableArray *_backgroundActivitiesLongerThanDelay;
    NSMapTable *_strongDelayedInvocationsByStrongReport;
    NSMapTable *_strongIssueCategoryToIssueCountByURLTable;
    DVTObservingToken *_containerLabelObservingToken;
    DVTObservingToken *_issueManagerObservingToken;
    id <DVTCancellable> _issueObservingToken;
    IDEActivityStatusCategory *_warningsIssueCategory;
    IDEActivityStatusCategory *_analyzerIssueCategory;
    IDEActivityStatusCategory *_errorsIssueCategory;
    IDEActivityStatusCategory *_testFailuresIssueCategory;
    IDEActivityStatusCategory *_runtimeIssueCategory;
    IDEActivityStatusCategory *_toolchainIssueCategory;
    IDEActivityStatusCategory *_legacyBuildSystemIssueCategory;
    IDEActivityStatusCategory *_newBuildSystemIssueCategory;
    IDEActivityStatusCategory *_slowBuildIssueCategory;
    NSArray *_issueCategories;
    double _minimumReportTime;
}

+ (void)initialize;
@property(nonatomic) double minimumReportTime; // @synthesize minimumReportTime=_minimumReportTime;
@property(copy) NSString *debugName; // @synthesize debugName=_debugName;
@property(copy) NSArray *issueCategories; // @synthesize issueCategories=_issueCategories;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void).cxx_destruct;
- (void)_openIssuesNavigator:(BOOL)arg1 clearFilterType:(unsigned long long)arg2;
- (void)_openTestNavigator;
- (void)stopObservingActivityReports;
- (void)startObservingActivityReports;
- (void)tearDown;
- (void)stopObservingIssues;
- (void)startObservingIssues;
- (void)updateIssuesForAllURLsWithIssues;
- (void)updateNumberOfIssuesForURL:(id)arg1;
- (void)_updateCategory:(id)arg1 withCurrent:(unsigned long long)arg2 andNew:(unsigned long long)arg3;
- (id)issuesForDocumentURLOrSharedPlaceholderURL:(id)arg1;
- (id)activityViewLocalURLForIssueManagerURL:(id)arg1;
- (id)sharedPlaceholderURLForIssuesWithNoDocument;
- (void)setNumberOfIssues:(long long)arg1 forURL:(id)arg2 inCategory:(id)arg3;
- (long long)numberOfIssuesForURL:(id)arg1 inCategory:(id)arg2;
- (id)oldestKnownBackgroundActivityReportThatHasMetDisplayDelayTime;
- (BOOL)haveReachedDisplayDelayTimeForActivityReport:(id)arg1;
- (void)startTrackingDisplayDelayTimeIfNeededForReport:(id)arg1;
- (void)startPreDisplayDelayValidatorForReport:(id)arg1;
- (void)startTrackingMinimumDisplayTimeForActivityReport:(id)arg1;
- (void)stopTrackingMinimumDisplayTimeForActivityReport:(id)arg1;
- (void)startMinimumDisplayTimeTimerForActivityReport:(id)arg1;
- (id)minimumDisplayTimeTimerForActivityReport:(id)arg1;
- (void)minimumTimeTimerForActivityReportDidExpire:(id)arg1;
- (void)minimumTimeForActivityReportDidExpire:(id)arg1;
- (void)setHaveReachedMinimumDisplayTime:(BOOL)arg1 forActivityReport:(id)arg2;
- (BOOL)haveReachedMinimumDisplayTimeForActivityReport:(id)arg1;
- (void)enumerateConsumersUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
@property(readonly) NSArray *orderedActivityReportsForListStylePresentation;
- (id)effectiveDebugName;
- (id)activityReports;
@property(readonly) NSArray *orderedActivityReports;
- (id)activityReportManager;
- (id)workspace;
- (id)dataSourceByCloningReportTimingData;
- (void)primitiveInvalidate;
- (id)_slowBuildIcon;
- (id)initWithWorkspaceDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

