//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/DVTFindBarFindable-Protocol.h>
#import <IDEKit/DVTScopeBarHost-Protocol.h>
#import <IDEKit/IDEBuildResultsOutlineDelegate-Protocol.h>
#import <IDEKit/IDELogEditorScopeBarDelegate-Protocol.h>

@class DVTObservingToken, IDEActivityLogSection, IDEBuildResultsOutlineLogic, IDELogEditorScopeBar, NSArray, NSBox, NSIndexPath, NSPopUpButton, NSScrollView, NSString, NSView, XCBuildResultsOutlineView;

@interface IDELogEditor : IDEEditor <IDEBuildResultsOutlineDelegate, IDELogEditorScopeBarDelegate, DVTScopeBarHost, DVTFindBarFindable>
{
    XCBuildResultsOutlineView *_buildResultsOutlineView;
    XCBuildResultsOutlineView *_buildIssuesOutlineView;
    NSBox *_activeViewHolder;
    IDEBuildResultsOutlineLogic *_outlineLogic;
    NSPopUpButton *_scopeBarMessagesPopup;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    NSIndexPath *_lastFindResultIndexPath;
    struct _NSRange _lastFindResultRange;
    IDEActivityLogSection *_lastFindResultSection;
    IDELogEditorScopeBar *_logEditorScopeBar;
    BOOL _showBySteps;
    BOOL _showAllResults;
    BOOL _lastFindResult;
    NSView *_buildResultsEnclosingView;
    NSView *_buildIssuesEnclosingView;
    DVTObservingToken *_documentObserver;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(readonly) IDEActivityLogSection *lastFindResultSection; // @synthesize lastFindResultSection=_lastFindResultSection;
@property(readonly) struct _NSRange lastFindResultRange; // @synthesize lastFindResultRange=_lastFindResultRange;
@property(readonly) BOOL lastFindResult; // @synthesize lastFindResult=_lastFindResult;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (void).cxx_destruct;
- (id)activityLogSection;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (void)menuCmd_showErrorsOnly:(id)arg1;
- (void)menuCmd_showAllIssues:(id)arg1;
- (void)menuCmd_showAllMessages:(id)arg1;
- (void)menuCmd_showRecentResults:(id)arg1;
- (void)menuCmd_showAllResults:(id)arg1;
- (void)menuCmd_copyShownTranscripts:(id)arg1;
- (void)menuCmd_copySelectedTranscripts:(id)arg1;
- (void)menuCmd_collapseAllTranscripts:(id)arg1;
- (void)menuCmd_expandAllTranscripts:(id)arg1;
- (void)menuCmd_collapseSelectedTranscripts:(id)arg1;
- (void)menuCmd_expandSelectedTranscripts:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)doubleClickDocumentLocation:(id)arg1;
- (void)showFindIndicatorInTranscriptForDocumentLocation:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (void)processNewSelectedIndexPaths:(id)arg1;
- (void)takeFocus;
- (void)viewDidInstall;
@property(readonly) NSView *scopeBarsBaseView;
- (void)loadView;
- (void)logEditorScopeBarCopyShownTranscripts:(id)arg1;
- (void)logEditorScopeBarSaveReport:(id)arg1;
- (void)logEditorScopeBar:(id)arg1 searchTextChanged:(id)arg2;
- (void)logEditorScopeBar:(id)arg1 showAllResultsChanged:(BOOL)arg2;
- (void)_setShowAllResults:(BOOL)arg1;
- (void)logEditorScopeBar:(id)arg1 stateChanged:(int)arg2;
- (id)attributesForScopeBarMenuItems;
- (void)showAllMessages:(id)arg1;
- (void)_showAnalyzerResultsForSelectability;
- (void)_showWarningsForSelectability;
- (void)_showErrorsForSelectability;
- (void)scopeBarMenuStaticAnalysisResultsOnly:(id)arg1;
- (void)scopeBarMenuErrorsOnly:(id)arg1;
- (void)scopeBarMenuErrorsAndWarningsOnly:(id)arg1;
- (void)scopeBarMenuAllIssues:(id)arg1;
- (void)scopeBarMenuAllMessages:(id)arg1;
- (void)_updateShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)_setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showTestFailure:(BOOL)arg4 showAnalyzerResults:(BOOL)arg5;
- (void)showLatestResults:(id)arg1;
- (void)showAllResults:(id)arg1;
- (void)_updateShownView;
- (void)_updateScopeBar;
- (id)activeView;
- (id)localizedString:(id)arg1 explanation:(id)arg2;
- (id)configureOutlineView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;

@end

