//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSAlert, NSString;
@protocol IDESelectionSource;

@interface IDESourceControlCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
    NSAlert *_waitingOnInitialScanAlert;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
@property(readonly) NSAlert *waitingOnInitialScanAlert; // @synthesize waitingOnInitialScanAlert=_waitingOnInitialScanAlert;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void).cxx_destruct;
- (void)refreshFileStatusCommand:(id)arg1;
- (void)resolvedCommand:(id)arg1;
- (void)revertSelectedFilesCommand:(id)arg1;
- (void)addCommand:(id)arg1;
- (void)_commitSelectedFilePaths:(id)arg1;
- (void)commitSelectedFilesCommand:(id)arg1;
- (void)revertWorkingCopiesCommand:(id)arg1;
- (void)pushCommand:(id)arg1;
- (void)updateCommand:(id)arg1;
- (void)commitCommand:(id)arg1;
- (void)createWorkingCopyCommand:(id)arg1;
- (void)presentWaitingForInitialScanToCompleteWithContinuationBlock:(CDUnknownBlockType)arg1;
- (void)presentInvalidSelectionError;
- (void)presentNoSelectionError;
- (void)presentNoWorkingCopiesError;
- (BOOL)hasSelection;
- (BOOL)hasValidWorkingCopy;
- (BOOL)hasValidWorkspace;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)filePathsOfSelectedItems;
- (id)filePathsOfSelectedNavigableItemsWithStatus:(unsigned long long)arg1;
- (id)selectedNavigableItemArchivableRepresentations;
- (void)displayError:(id)arg1;
- (BOOL)initialWorkspaceScanIsComplete;
- (BOOL)didScanWorkspace;
- (CDUnknownBlockType)continuationBlock;
- (id)workspace;
- (id)workspaceDocument;
- (id)_initWithSelectionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

