//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTTextCompletionDataSourceDelegate-Protocol.h>
#import <DVTKit/DVTTextCompletionListDataSource-Protocol.h>

@class DVTObservingToken, DVTPerformanceMetric, DVTStackBacktrace, DVTTextCompletionListWindowController, NSArray, NSDictionary, NSString;
@protocol DVTTextCompletionSupportingTextView;

@interface DVTTextCompletionSession : NSObject <DVTTextCompletionDataSourceDelegate, DVTTextCompletionListDataSource, DVTInvalidation>
{
    id <DVTTextCompletionSupportingTextView> _textView;
    DVTTextCompletionListWindowController *_listWindowController;
    unsigned long long _wordStartLocation;
    unsigned long long _cursorLocation;
    NSString *_filteringPrefix;
    DVTObservingToken *_readyToShowListener;
    NSArray *_allCompletions;
    NSArray *_filteredCompletionsAlpha;
    NSString *_usefulPrefix;
    long long _selectedCompletionIndex;
    NSDictionary *_priorityCoefficients;
    DVTPerformanceMetric *_currentMetric;
    int _pendingRequestState;
    BOOL _generatingCompletions;
    double _startGeneratingCompletionsTime;
    BOOL _insertingFullCompletion;
    BOOL _insertingPartialCompletion;
    BOOL _hidingCompletions;
    BOOL _autoCompleteTimerExpired;
    BOOL _shownExplicitly;
    NSDictionary *_currentCompletionContext;
    NSArray *_highlyLikelyCompletions;
}

+ (void)_addToRecentCompletions:(id)arg1;
+ (id)completionPriorityCoefficientsForLanguage:(id)arg1;
+ (id)keyPathsForValuesAffectingShowingCompletions;
+ (id)infrequentTextCompletionsSetForLanguage:(id)arg1;
+ (id)infrequentTextCompletionsForLanguage:(id)arg1;
+ (id)frequentTextCompletionsSetForLanguage:(id)arg1;
+ (id)frequentTextCompletionsForLanguage:(id)arg1;
+ (id)_frequentTextCompletionsDictionaryForLanguage:(id)arg1;
+ (void)_appendFrequentTextCompletions:(id)arg1 named:(id)arg2 inBundle:(id)arg3;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingReadyToShowCompletions;
@property(copy) NSString *filteringPrefix; // @synthesize filteringPrefix=_filteringPrefix;
@property(retain) NSArray *highlyLikelyCompletions; // @synthesize highlyLikelyCompletions=_highlyLikelyCompletions;
@property(getter=isShownExplicitly) BOOL shownExplicitly; // @synthesize shownExplicitly=_shownExplicitly;
@property(readonly, nonatomic) NSDictionary *currentCompletionContext; // @synthesize currentCompletionContext=_currentCompletionContext;
@property BOOL autoCompleteTimerExpired; // @synthesize autoCompleteTimerExpired=_autoCompleteTimerExpired;
@property(nonatomic) long long selectedCompletionIndex; // @synthesize selectedCompletionIndex=_selectedCompletionIndex;
@property(copy) NSString *usefulPrefix; // @synthesize usefulPrefix=_usefulPrefix;
@property(retain) NSArray *filteredCompletionsAlpha; // @synthesize filteredCompletionsAlpha=_filteredCompletionsAlpha;
@property(retain) NSArray *allCompletions; // @synthesize allCompletions=_allCompletions;
@property(nonatomic) unsigned long long cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(readonly) unsigned long long wordStartLocation; // @synthesize wordStartLocation=_wordStartLocation;
@property(readonly) DVTTextCompletionListWindowController *listWindowController; // @synthesize listWindowController=_listWindowController;
@property(readonly) id <DVTTextCompletionSupportingTextView> textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
@property(readonly) NSString *debugStateString;
- (void)primitiveInvalidate;
- (BOOL)showInfoPanelForSelectedCompletion;
- (struct _NSRange)replacementRangeForSuggestedRange:(struct _NSRange)arg1;
- (id)_prefixForCurrentLocation;
- (struct _NSRange)rangeOfFirstWordInString:(id)arg1;
- (void)completionsChangedForDataSource:(id)arg1;
- (long long)_indexOfItem:(id)arg1 inAlphabeticalList:(id)arg2;
- (id)_commonPrefixForItems:(id)arg1;
- (id)_usefulPartialCompletionPrefixForItems:(id)arg1 selectedIndex:(unsigned long long)arg2 filteringPrefix:(id)arg3;
- (long long)_priorityBucketForItem:(id)arg1 usingPrefix:(id)arg2;
- (double)_intrinsicPriorityForItem:(id)arg1 usingPrefix:(id)arg2;
- (id)filterCompletionItems:(id)arg1 openQuicklyPattern:(id)arg2;
- (id)_doFilterCompletionItems:(id)arg1 range:(struct _NSRange)arg2 openQuicklyPattern:(id)arg3 language:(id)arg4 highestPriority:(double *)arg5 highestPriorityBucket:(long long *)arg6;
- (void)_setFilteringPrefix:(id)arg1 forceFilter:(BOOL)arg2;
- (void)_ensureCompletionsUpToDate;
- (id)attributesForCompletionAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (BOOL)_gotUsefulCompletionsToShowInList:(id)arg1;
- (BOOL)_shouldSetCursorLocation:(unsigned long long)arg1;
- (BOOL)shouldBeDismissedForSelectionChange;
- (BOOL)_shouldAcceptPartialCompletionForCursorLocation:(unsigned long long)arg1;
- (BOOL)shouldAutoSuggestForTextChange;
- (void)_scrollMayHaveFinished;
- (void)handleTextViewDidScroll;
- (BOOL)handleSelectNextPlaceholder;
- (BOOL)handleMoveToEndOfDocument;
- (BOOL)handleMoveToBeginningOfDocument;
- (BOOL)handlePageDown;
- (BOOL)handlePageUp;
- (BOOL)handleMoveDown;
- (BOOL)handleMoveUp;
- (BOOL)handleDeleteBackward;
- (BOOL)handleTextViewShouldSetMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)handleTextViewShouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)handleInsertText:(id)arg1;
- (void)selectPreviousCompletionAlpha;
- (void)selectNextCompletionAlpha;
- (BOOL)_insertCurrentCompletionNameCharacters:(unsigned long long)arg1;
- (BOOL)insertUsefulPrefix;
- (BOOL)insertCurrentCompletion;
- (void)hideCompletionsWithReason:(int)arg1;
- (void)showTemporarilyHiddenCompletionsForReasonMask:(unsigned long long)arg1;
- (void)showCompletionsExplicitly:(BOOL)arg1;
- (void)_autoCompletionWaitIsOver;
@property(readonly) BOOL readyToShowCompletions;
- (id)_listWindowController;
- (void)setPendingRequestState:(int)arg1;
@property(readonly, getter=isShowingCompletions) BOOL showingCompletions;
- (id)initWithTextView:(id)arg1 atLocation:(unsigned long long)arg2 cursorLocation:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

