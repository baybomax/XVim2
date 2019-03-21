//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTScopeBarButton, NSButton, NSPopUpButton, NSView;
@protocol IDEResultBundleLogReportEditorScopeBarDelegate;

@interface IDEResultBundleLogReportEditorScopeBar : DVTViewController
{
    id <IDEResultBundleLogReportEditorScopeBarDelegate> _delegate;
    NSPopUpButton *_logsPopUp;
    NSButton *_showTextLogButton;
    NSView *_issuesScopeView;
    DVTScopeBarButton *_scopeAllMessagesButton;
    DVTScopeBarButton *_scopeAllIssuesButton;
    DVTScopeBarButton *_scopeErrorsOnlyButton;
}

+ (void)initialize;
@property __weak DVTScopeBarButton *scopeErrorsOnlyButton; // @synthesize scopeErrorsOnlyButton=_scopeErrorsOnlyButton;
@property __weak DVTScopeBarButton *scopeAllIssuesButton; // @synthesize scopeAllIssuesButton=_scopeAllIssuesButton;
@property __weak DVTScopeBarButton *scopeAllMessagesButton; // @synthesize scopeAllMessagesButton=_scopeAllMessagesButton;
@property __weak NSView *issuesScopeView; // @synthesize issuesScopeView=_issuesScopeView;
@property __weak NSButton *showTextLogButton; // @synthesize showTextLogButton=_showTextLogButton;
@property __weak NSPopUpButton *logsPopUp; // @synthesize logsPopUp=_logsPopUp;
@property(nonatomic) __weak id <IDEResultBundleLogReportEditorScopeBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorsOnly:(id)arg1;
- (void)showAllIssues:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)_updateShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)setScopeBarState:(int)arg1 showAllResults:(BOOL)arg2;
- (BOOL)itemIsBuildLog:(id)arg1;
- (id)selectedLogItem;
- (void)updateLogsPopUpWithItems:(id)arg1 target:(id)arg2;
- (void)hideIssuesScopeButtons:(BOOL)arg1;
- (void)disableTextLogButton:(BOOL)arg1;
- (BOOL)showTextLogs;
- (void)_restoreScopeFromDefaults;
- (void)loadView;

@end

