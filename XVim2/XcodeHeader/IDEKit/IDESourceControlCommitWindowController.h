//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>
#import <IDEKit/_TtP6IDEKit37IDESourceControlAuthenticationContext_-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTextViewWithPlaceholder, IDEComparisonEditorDFRController, IDEEditorDocument, IDESourceControlReviewFilesDataSource, IDESourceControlWorkspaceUIHandler, NSArray, NSButton, NSImageView, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSPopUpButton, NSSplitView, NSString, NSTextField, NSTouchBar, _TtC6IDEKit43IDESourceControlCommitAndPushMenuController;
@protocol DVTSourceControlCancellable, OS_dispatch_queue, OS_dispatch_semaphore;

@interface IDESourceControlCommitWindowController : IDESourceControlReviewFilesWindowController <NSTouchBarProvider, NSTouchBarDelegate, _TtP6IDEKit37IDESourceControlAuthenticationContext_, IDENavigableItemCoordinatorDelegate>
{
    IDEComparisonEditorDFRController *_commitSheetDFRController;
    NSSplitView *_splitView;
    DVTTextViewWithPlaceholder *_commitMessageTextView;
    NSButton *_commitButton;
    NSButton *_cancelButton;
    DVTBorderedView *_reviewFilesView;
    DVTBorderedView *_contentView;
    DVTBorderedView *_textViewBorderedView;
    NSImageView *_issuesCountImageView;
    NSTextField *_issuesCountTextField;
    NSButton *_enablePushCheckbox;
    NSPopUpButton *_remotesPopUpButton;
    NSString *_commitMessage;
    IDESourceControlReviewFilesDataSource *_workspaceDataSource;
    IDESourceControlReviewFilesDataSource *_fileSystemDataSource;
    IDESourceControlReviewFilesDataSource *_flatDataSource;
    NSObject<OS_dispatch_semaphore> *_multipleFileSaveWaiter;
    NSArray *_pushInfos;
    NSObject<OS_dispatch_queue> *_commitAndPushQueue;
    NSOperationQueue *_pushOperationQueue;
    NSMutableDictionary *_pushTokenDictionary;
    BOOL _shouldEnablePushButtons;
    DVTObservingToken *_checkedFilePathsToken2;
    NSMutableArray *_localStatusTokens;
    IDEEditorDocument *_currentReadOnlyDocument;
    BOOL _pushToRemoteEnabled;
    _TtC6IDEKit43IDESourceControlCommitAndPushMenuController *_singlePushMenuController;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    NSArray *_forcedPushInfos;
    CDUnknownBlockType _commitWindowCompletionBlock;
    NSString *_statusText;
    id <DVTSourceControlCancellable> _commitToken;
}

+ (id)sourceControlCommitWindowLogAspect;
@property(retain) id <DVTSourceControlCancellable> commitToken; // @synthesize commitToken=_commitToken;
@property(retain) NSString *statusText; // @synthesize statusText=_statusText;
@property(getter=isPushToRemoteEnabled) BOOL pushToRemoteEnabled; // @synthesize pushToRemoteEnabled=_pushToRemoteEnabled;
@property(copy) CDUnknownBlockType commitWindowCompletionBlock; // @synthesize commitWindowCompletionBlock=_commitWindowCompletionBlock;
@property(retain) NSArray *forcedPushInfos; // @synthesize forcedPushInfos=_forcedPushInfos;
@property(retain) IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property(retain) _TtC6IDEKit43IDESourceControlCommitAndPushMenuController *singlePushMenuController; // @synthesize singlePushMenuController=_singlePushMenuController;
@property(copy) NSString *commitMessage; // @synthesize commitMessage=_commitMessage;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)cancel:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)teardown;
- (void)displayErrorMessages:(id)arg1;
- (void)commit:(id)arg1;
- (void)_pushInfos:(id)arg1 forWorkingCopiesCommittedSuccessfully:(id)arg2;
- (void)setupPushWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_performPreCommitOperation:(CDUnknownBlockType)arg1 onFiles:(id)arg2;
- (void)_commit;
- (void)finishInteractiveCommitForFiles:(id)arg1;
- (void)startInteractiveCommitForFiles:(id)arg1;
- (void)handleErrors:(id)arg1 singularErrorMessage:(id)arg2 pluralErrorMessage:(id)arg3;
- (BOOL)shouldEnableCommitButton;
- (void)saveFilesAtFilePaths:(id)arg1;
- (unsigned long long)countOfCheckedItems;
- (unsigned long long)countOfItemsThatCanBeCommitted;
- (id)defaultDisabledFilePaths;
- (BOOL)_checkWorkingTreeItemStatusForDefaultDisabledPath:(id)arg1;
- (id)defaultCheckedFilePaths;
- (BOOL)_checkWorkingTreeItemStatusForDefaultCheckedPath:(id)arg1;
- (void)updateCommitAndPush:(id)arg1;
- (id)commitButtonTitle;
- (void)_updateCommitButton;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (id)navigableItem:(id)arg1 childRepresentedObjectsForArray:(id)arg2;
- (id)workingTreeWithLocation:(id)arg1;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
- (void)beginReviewFiles;
- (void)beginStatusUpdate;
- (void)setEditorMessages:(id)arg1;
- (void)_registerReadOnlyDocumentLocation:(id)arg1;
- (void)willOpenDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)populateCommitAndPush;
- (id)workingCopies;
- (void)beginSheetForWindow:(id)arg1;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (BOOL)enableDiffToggles;
- (void)selectRepository:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleAllowCommit:(id)arg1;
- (void)comparisonMenu_toggleCommitSelectedDiffDescriptor:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;
- (BOOL)containsWorkingCopyForRepository:(id)arg1;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle;
- (id)commitSheetDFRController;
- (id)_navigationItemWithIdentifier:(id)arg1;
- (void)_updateDFRCommitFilesButton:(id)arg1;
- (id)_modeActionItemWithIdentifier:(id)arg1;
- (id)_commitItem;
- (id)_cancelItemWithIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

