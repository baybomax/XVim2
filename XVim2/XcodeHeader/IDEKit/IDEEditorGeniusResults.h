//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTFileDataType, DVTStackBacktrace, IDEEditorDocument, IDENavigableItemCoordinator, IDEWorkspaceTabController, NSArray, NSDictionary, NSString;

@interface IDEEditorGeniusResults : NSObject <DVTInvalidation>
{
    IDEWorkspaceTabController *_workspaceTabController;
    IDENavigableItemCoordinator *_navItemCoordinator;
    IDEEditorDocument *_editorDocument;
    NSArray *_documentLocations;
    BOOL _didChangeDocument;
    DVTExtension *_editorDocumentExtension;
    DVTFileDataType *_fileDataType;
    NSArray *_finders;
    NSArray *_geniusCategories;
    BOOL _ignoreGeniusResultsUpdates;
    BOOL _idle;
    NSDictionary *_geniusResults;
    unsigned long long _numberOfGeniusResults;
    NSString *_editorDocumentIdentifier;
}

+ (BOOL)automaticallyNotifiesObserversOfGeniusResults;
+ (BOOL)hideSubitemCountForGeniusCategory:(id)arg1;
+ (BOOL)showHierarchyForSingleResultsCategoryForGeniusCategory:(id)arg1;
+ (BOOL)opensInManualModeForGeniusCategory:(id)arg1;
+ (BOOL)singleResultsCategoryForGeniusCategory:(id)arg1;
+ (id)groupForGeniusCategory:(id)arg1;
+ (id)nameForGeniusCategory:(id)arg1;
+ (id)_geniusCategoryExtensions;
+ (BOOL)validGeniusCategory:(id)arg1 forEditorDocumentIdentifier:(id)arg2;
+ (id)_geniusCategoriesForFinderExtensions:(id)arg1;
+ (id)_finderExtensionsForEditorDocumentIdentifier:(id)arg1 fileDataType:(id)arg2;
+ (id)indexRequestsQueue;
+ (void)initialize;
@property(readonly, copy) NSString *editorDocumentIdentifier; // @synthesize editorDocumentIdentifier=_editorDocumentIdentifier;
@property BOOL idle; // @synthesize idle=_idle;
@property(readonly) unsigned long long numberOfGeniusResults; // @synthesize numberOfGeniusResults=_numberOfGeniusResults;
@property(readonly, copy) NSDictionary *geniusResults; // @synthesize geniusResults=_geniusResults;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)_updateGeniusResults;
- (void)_setGeniusResults:(id)arg1;
- (void)_breakIdleCoalescingOfGeniusResultsUpdates;
- (void)_doUpdateGeniusResults;
- (id)geniusCategories;
- (void)_doFindGeniusResults;
- (void)findGeniusResultsForEditorDocument:(id)arg1 editorDocumentExtension:(id)arg2 selectedDocumentLocations:(id)arg3;
- (void)_setFindResultsTimer;
- (void)_clearFindResultsTimer;
- (void)_setForcedUpdateTimer;
- (void)_clearForcedUpdateTimer;
- (void)_doUpdateGeniusResultsAfterOneSecond;
- (BOOL)_allGeniusFindersAreIdle;
@property(readonly, copy) NSString *description;
- (id)initWithWorkspaceTabController:(id)arg1 navigableItemCoordinator:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

