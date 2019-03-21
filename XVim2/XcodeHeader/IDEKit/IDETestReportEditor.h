//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/IDETestReport_RootObject-Protocol.h>

@class DVTReplacementView, IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSSet, NSString;

@interface IDETestReportEditor : IDEEditor <DVTReplacementViewDelegate, IDETestReport_RootObject>
{
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
    DVTReplacementView *_replacementView;
    NSSet *_passingTestGroups;
    NSSet *_failingTestGroups;
    NSArray *_performanceMetricsForDisplay;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    double _totalDuration;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(copy, nonatomic) NSArray *performanceMetricsForDisplay; // @synthesize performanceMetricsForDisplay=_performanceMetricsForDisplay;
@property(copy, nonatomic) NSSet *failingTestGroups; // @synthesize failingTestGroups=_failingTestGroups;
@property(copy, nonatomic) NSSet *passingTestGroups; // @synthesize passingTestGroups=_passingTestGroups;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(id)arg1;
- (id)ide_testReport_rootObject_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
- (id)testGroupsIncludePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
- (void)refreshTestableDataFromDocument;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)testReport;
- (id)reportDocument;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

