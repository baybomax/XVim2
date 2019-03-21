//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEComparisonEditorCollapsibleSourceList-Protocol.h>
#import <IDEKit/IDEEditorContextDelegate-Protocol.h>
#import <IDEKit/IDESourceControlMergeControllerContainer-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTSplitView, IDEComparisonEditor, IDEEditorVersionsMode, IDEReviewFilesNavigator, IDESourceControlConflictResolutionController, IDESourceControlInteractiveCommitController, NSString;
@protocol IDEReviewFilesViewControllerDelegate;

@interface IDEReviewFilesViewController : IDEViewController <IDEEditorContextDelegate, IDESourceControlMergeControllerContainer, IDEComparisonEditorCollapsibleSourceList, NSSplitViewDelegate>
{
    DVTSplitView *_splitView;
    DVTBorderedView *_structureBorderedView;
    DVTBorderedView *_comparisonBorderedView;
    IDEReviewFilesNavigator *_navigator;
    IDEEditorVersionsMode *_versionsMode;
    DVTObservingToken *_navigatorSelectedNavigatorObservingToken;
    DVTObservingToken *_navigatorSelectedObjectsObservingToken;
    id <IDEReviewFilesViewControllerDelegate> _delegate;
    IDESourceControlConflictResolutionController *_conflictResolutionController;
    IDESourceControlInteractiveCommitController *_interactiveCommitController;
    BOOL _displayingInSheet;
}

+ (id)keyPathsForValuesAffectingVersionsEditor;
+ (id)keyPathsForValuesAffectingComparisonEditor;
+ (struct CGRect)minimumSheetFrame;
+ (struct CGSize)sheetSizeForHostWindow:(id)arg1;
+ (id)reviewFilesLogAspect;
@property(retain) id <IDEReviewFilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEEditorVersionsMode *versionsMode; // @synthesize versionsMode=_versionsMode;
@property(readonly) IDEReviewFilesNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (id)workspaceForEditorContext:(id)arg1;
- (id)editorContext:(id)arg1 shouldEditNavigableItem:(id)arg2;
- (void)setStateToken:(id)arg1;
@property BOOL displayingInSheet; // @synthesize displayingInSheet=_displayingInSheet;
@property(readonly) BOOL enableDiffToggles;
@property(readonly) IDESourceControlInteractiveCommitController *interactiveCommitController; // @dynamic interactiveCommitController;
- (void)setupInteractiveCommitController;
@property(readonly) IDESourceControlConflictResolutionController *conflictResolutionController; // @dynamic conflictResolutionController;
- (void)setupConflictResolutionController;
- (void)primitiveInvalidate;
- (void)toggleSourceList;
@property(readonly) IDEEditorVersionsMode *versionsEditor;
@property(readonly) IDEComparisonEditor *comparisonEditor;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

