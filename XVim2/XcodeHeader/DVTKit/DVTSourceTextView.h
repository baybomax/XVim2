//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTCompletingTextView.h>

#import <DVTKit/DVTColorLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <DVTKit/DVTFileLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <DVTKit/DVTImageLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <DVTKit/DVTSourceCodeComparisonTextView-Protocol.h>
#import <DVTKit/DVTSourceEditorViewProtocol-Protocol.h>
#import <DVTKit/DVTSourceTextScrollViewDelegate-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>
#import <DVTKit/NSLayoutManagerDelegate-Protocol.h>

@class DVTAnnotationManager, DVTMutableRangeArray, DVTObservingToken, DVTSourceCodeLanguage, DVTTextAnnotationIndicatorAnimation, DVTTextDocumentLocation, DVTTextPageGuideVisualization, NSAnimation, NSArray, NSColor, NSHashTable, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, NSTimer, NSView, NSWindow;
@protocol DVTCancellable, DVTSourceTextViewDelegate, DVTSourceTextViewQuickEditDataSource;

@interface DVTSourceTextView : DVTCompletingTextView <DVTSourceCodeComparisonTextView, DVTSourceEditorViewProtocol, NSAnimationDelegate, NSLayoutManagerDelegate, DVTSourceTextScrollViewDelegate, DVTColorLiteralQuickEditViewControllerDelegate, DVTFileLiteralQuickEditViewControllerDelegate, DVTImageLiteralQuickEditViewControllerDelegate>
{
    unsigned long long _oldFocusLocation;
    NSAnimation *_blockAnimation;
    struct CGPoint _lastMouseMovedLocation;
    struct _NSRange _foldingHoverRange;
    DVTTextAnnotationIndicatorAnimation *_annotationIndicatorAnimation;
    unsigned long long _temporaryLinkHoverModifierFlags;
    unsigned long long _temporaryLinkHoverAltModifierFlags;
    NSArray *_clickedTemporaryLinkRanges;
    NSMutableArray *_clickedLinkProgressIndicators;
    struct _NSRange _ghostStringRange;
    NSTimer *_autoHighlightTokenMenuTimer;
    struct _NSRange _autoHighlightTokenMenuRange;
    double _autoHighlightTokenMenuAnimationDuration;
    NSTimer *_autoHighlightTokenMenuAnimationTimer;
    double _autoHighlightTokenMenuAnimationStartTime;
    NSWindow *_autoHighlightTokenWindow;
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
    NSMutableArray *_visualizations;
    unsigned long long _pageGuideColumn;
    DVTTextPageGuideVisualization *_pageGuideVisualization;
    unsigned long long _locationOfAutoOpenedCloseBracket;
    unsigned long long _locationOfOpenBracePendingClose;
    NSTimer *_scrollbarMarkerUpdateTimer;
    DVTAnnotationManager *_annotationManager;
    NSHashTable *_preparedViewAnnotations;
    NSView *_staticVisualizationView;
    DVTMutableRangeArray *_typeOverCompletionRanges;
    DVTMutableRangeArray *_typeOverCompletionOpenRanges;
    NSString *_pendingTypeOverCompletion;
    struct _NSRange _pendingTypeOverCompletionOpenRange;
    NSMutableIndexSet *_linesNeedingToTrimTrailingShitespace;
    BOOL _didChangeText;
    struct {
        unsigned int dDidFinishAnimatingScroll:1;
        unsigned int dDidScroll:1;
        unsigned int delegateRespondsToWillReturnPrintJobTitle:1;
        unsigned int updatingInsertionPoint:1;
        unsigned int wasPostsFrameChangedNotifications:1;
        unsigned int doingDidChangeSelection:1;
        unsigned int disableDrawingCurrentLineHighlight:1;
        unsigned int delegateRespondsToConstrainMinAccessoryAnnotationWidth:1;
        unsigned int delegateRespondsToConstrainMaxAccessoryAnnotationWidth:1;
        unsigned int delegateRespondsToConstrainAccessoryAnnotationWidth:1;
    } _sFlags;
    BOOL _isDoingBatchEdit;
    BOOL _allowsCodeFolding;
    BOOL _showingCodeFocus;
    BOOL _lastMouseEventWasClick;
    BOOL _tokenizedEditingEnabled;
    BOOL _animatesCurrentScroll;
    BOOL _disableUpdatingInsertionPointCount;
    BOOL _currentlyAutoCompletingBracket;
    BOOL _wrapsLines;
    BOOL _postsLayoutManagerNotifications;
    BOOL _scrollingInScrollView;
    DVTObservingToken *_autoHighlightTokenRangesObservingToken;
    id <DVTCancellable> _delayedAnnotationLayoutToken;
    struct _NSRange _selectedRangeBeforeMouseDown;
    BOOL _ensuringLayoutForScroll;
    BOOL _suppressRecentColorTracking;
    NSColor *_recentlySelectedColorToTrack;
    struct _NSRange _recentlySelectedColorLiteralRange;
    NSMapTable *_accessibilityProxiesByRange;
    id <DVTSourceTextViewQuickEditDataSource> _quickEditDataSource;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (BOOL)_shouldEnableResponsiveScrolling;
+ (id)keyPathsForValuesAffectingAccessoryAnnotationCollapsed;
+ (id)performanceLogAspect;
+ (id)foldingLogAspect;
+ (id)drawingLogAspect;
+ (void)initialize;
@property id <DVTSourceTextViewQuickEditDataSource> quickEditDataSource; // @synthesize quickEditDataSource=_quickEditDataSource;
@property BOOL postsLayoutManagerNotifications; // @synthesize postsLayoutManagerNotifications=_postsLayoutManagerNotifications;
@property(nonatomic) unsigned long long pageGuideColumn; // @synthesize pageGuideColumn=_pageGuideColumn;
@property(readonly) NSArray *visualizations; // @synthesize visualizations=_visualizations;
@property(nonatomic) struct _NSRange ghostStringRange; // @synthesize ghostStringRange=_ghostStringRange;
@property unsigned long long temporaryLinkHoverAltModifierFlags; // @synthesize temporaryLinkHoverAltModifierFlags=_temporaryLinkHoverAltModifierFlags;
@property unsigned long long temporaryLinkHoverModifierFlags; // @synthesize temporaryLinkHoverModifierFlags=_temporaryLinkHoverModifierFlags;
@property(nonatomic) BOOL wrapsLines; // @synthesize wrapsLines=_wrapsLines;
- (void).cxx_destruct;
- (id)mediaResourceProviderForLiteralInLayoutManager:(id)arg1;
- (id)directoriesForLiteralInLayoutManager:(id)arg1;
- (id)foldingTokenTypesForLayoutManager:(id)arg1;
- (void)doubleClickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (void)colorQuickEdit:(id)arg1 didSelectMoreColorOptions:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didSelectColor:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didHighlightColor:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)fileQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)fileQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)changeColor:(id)arg1;
- (void)updateSelectedColorLiteralWithColor:(id)arg1;
- (void)presentOpenPanelForObjectLiteralAtFilePath:(id)arg1;
- (void)presentPopoverRelativeToSelection:(id)arg1;
- (void)presentObjectLiteralPickerForImageAtFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)presentObjectLiteralPickerForFileAtFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)presentObjectLiteralPickerForColor:(id)arg1 addDefaultColorToken:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)presentObjectLiteralPickerForTextFold:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)insertObjectLiteralSyntaxForObjects:(id)arg1 selectLastObjectLiteral:(BOOL)arg2;
- (BOOL)readObjectLiteralFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)dragOperationForDraggingInfo:(id)arg1 type:(id)arg2;
- (id)acceptableDragTypes;
- (id)_addingReadablePasteboardTypesForObjectLiterals:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (void)resignKeyWindow;
- (BOOL)resignFirstResponder;
- (void)_invalidateDisplayForViewStatusChange;
- (void)_reloadAnnotationProviders;
- (void)_unloadAnnotationProviders;
- (void)dvt_viewDidEndLiveAnimation;
- (void)dvt_viewWillBeginLiveAnimation;
- (void)_updateLayoutEstimation;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;
- (id)_findResultUnderlineColor;
- (id)_findResultCurrentUnderlineColor;
- (id)_findResultGradient;
- (id)_findResultCurrentGradient;
- (void)setCurrentFoundLocation:(id)arg1;
- (void)setFoundLocations:(id)arg1;
- (void)unfoldAllComments:(id)arg1;
- (void)foldAllComments:(id)arg1;
- (void)unfoldAllMethods:(id)arg1;
- (void)foldAllMethods:(id)arg1;
- (void)unfoldRecursive:(id)arg1;
- (void)unfold:(id)arg1;
- (void)unfoldAll:(id)arg1;
- (void)foldSelection:(id)arg1;
- (void)foldRecursive:(id)arg1;
- (void)fold:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (void)balance:(id)arg1;
- (void)shiftLeft:(id)arg1;
- (void)shiftRight:(id)arg1;
- (void)_indentSelectionByNumberOfLevels:(long long)arg1;
- (struct _NSRange)_indentInsertedTextIfNecessaryAtRange:(struct _NSRange)arg1;
- (void)indentSelectionIfIndentable:(id)arg1;
- (void)indentSelection:(id)arg1;
- (struct _NSRange)_adjustedSelectedRange:(struct _NSRange)arg1 fromChangeIndex:(unsigned long long)arg2;
- (void)moveCurrentLineDown:(id)arg1;
- (void)moveCurrentLineUp:(id)arg1;
- (void)_didChangeSelection:(id)arg1;
- (void)PBX_toggleShowsInvisibleCharacters:(id)arg1;
- (void)PBX_toggleShowsControlCharacters:(id)arg1;
- (void)useSelectionForReplace:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (id)accessibilityCustomChoosers;
- (id)_searchForItemWithPredicate:(id)arg1 ranges:(id)arg2;
- (BOOL)_accessibilityFilterText:(id)arg1 matchesRange:(struct _NSRange)arg2;
- (id)_accessibilityGetMarkRangesForLandmark:(id)arg1;
- (id)_accessibilityGetMethodRangesForLandmark:(id)arg1;
- (id)_accessibilityGetBreakpoints;
- (id)_accessibilityGetRangesAndDescriptionsOfTypeError:(BOOL)arg1;
- (id)_accessibilityPlaceholderAttributedStringForString:(id)arg1 range:(struct _NSRange)arg2;
- (id)_accessibilitySetCodeStyleAttributesForString:(id)arg1 characterRange:(struct _NSRange)arg2 inLine:(struct _NSRange)arg3;
- (struct _NSRange)_accessibilityRelativeRangeForCharacterRange:(struct _NSRange)arg1 inLine:(struct _NSRange)arg2;
- (id)_accessibilityCodeStyleAttributedStringForRange:(struct _NSRange)arg1 attributedString:(id)arg2;
- (id)accessibilityAXAttributedStringForCharacterRange:(struct _NSRange)arg1 parent:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (id)_accessibilityProxyForSelectedRange:(struct _NSRange)arg1;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (BOOL)shouldChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2;
- (void)_invalidateAllRevealovers;
- (BOOL)isEditable;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)_couldHaveBlinkTimer;
- (BOOL)_shouldHaveBlinkTimer;
- (void)_centeredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (void)scrollViewDidSetFrameSize:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_adjustAccessoryAnnotations;
- (void)viewWillDraw;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)breakUndoCoalescing;
- (void)didChangeText;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 animate:(BOOL)arg2;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)flagsChanged:(id)arg1;
- (void)selectPreviousToken:(id)arg1;
- (void)selectNextToken:(id)arg1;
- (void)toggleTokenizedEditing:(id)arg1;
- (void)textStorage:(id)arg1 didEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 willEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)didEndTokenizedEditingWithRanges:(id)arg1;
- (void)willStartTokenizedEditingWithRanges:(id)arg1;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_scheduleAutoHighlightTokenMenuTimerIfNeeded;
- (void)_showAutoHighlightTokenMenuWithTimer:(id)arg1;
- (id)_autoHighlightTokenWindowWithTokenRect:(struct CGRect)arg1;
- (void)_scheduleAutoHighlightTokenMenuAnimationTimerIfNeeded;
- (struct CGRect)_hitTestRectForAutoHighlightTokenWindow:(id)arg1;
- (struct CGRect)_autoHighlightTokenRectAtPoint:(struct CGPoint)arg1;
- (struct _NSRange)_autoHighlightTokenMenuRangeAtPoint:(struct CGPoint)arg1;
- (void)_animateAutoHighlightTokenMenuWithTimer:(id)arg1;
- (void)_popUpTokenMenu:(id)arg1;
- (id)_autoHighlightTokenMenu;
- (void)_clearAutoHighlightTokenMenu;
- (void)removeStaticVisualizationView;
- (void)addStaticVisualizationView:(id)arg1;
- (void)removeVisualization:(id)arg1 fadeOut:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addVisualization:(id)arg1 fadeIn:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)adjustTypeOverCompletionForSelectionChange:(struct _NSRange)arg1;
- (void)removeInvalidTypeOverCompletion;
- (void)removeTypeOverCompletionIfAppropriateForEditedRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)adjustTypeOverCompletionForEditedRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)addTypeOverCompletionForRange:(struct _NSRange)arg1 openRange:(struct _NSRange)arg2;
- (struct _NSRange)lastTypeOverCompletionRange;
- (struct _NSRange)typeOverCompletionRangeFollowingLocation:(unsigned long long)arg1;
- (void)textCompletionSession:(id)arg1 didInsertCompletionItem:(id)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)_suggestedOpenRangeForTypeOverRange:(struct _NSRange)arg1;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1;
- (BOOL)shouldSuppressTextCompletion;
- (id)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
- (void)autoInsertCloseBrace;
- (void)deleteExpressionBackward:(id)arg1;
- (void)deleteExpressionForward:(id)arg1;
- (void)moveExpressionBackwardAndModifySelection:(id)arg1;
- (void)moveExpressionBackward:(id)arg1;
- (void)moveExpressionForwardAndModifySelection:(id)arg1;
- (void)moveExpressionForward:(id)arg1;
- (void)deleteSubWordBackward:(id)arg1;
- (void)deleteSubWordForward:(id)arg1;
- (void)moveSubWordBackwardAndModifySelection:(id)arg1;
- (void)moveSubWordForwardAndModifySelection:(id)arg1;
- (void)moveSubWordBackward:(id)arg1;
- (void)moveSubWordForward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)pasteAndPreserveFormatting:(id)arg1;
- (void)paste:(id)arg1;
- (void)_paste:(id)arg1 indent:(BOOL)arg2;
- (void)insertNewline:(id)arg1;
- (BOOL)handleInsertNewline;
- (BOOL)handleInsertTab;
- (BOOL)handleSelectPreviousPlaceholder;
- (BOOL)handleSelectNextPlaceholder;
- (BOOL)isCandidateTypeOverString:(id)arg1;
- (id)autoCloseStringForString:(id)arg1;
- (void)insertText:(id)arg1;
- (id)foldString;
- (void)setFoldsFromString:(id)arg1;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 ignoreWhitespace:(BOOL)arg2;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (id)sourceLandmarkAtCharacterIndex:(unsigned long long)arg1;
@property(readonly) DVTSourceCodeLanguage *language;
- (id)sourceModel;
- (struct _NSRange)visibleParagraphRange;
- (long long)_currentLineNumber;
- (struct _NSRange)rangeOfCenterLine;
- (void)doingBatchEdit:(BOOL)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_clipViewAncestorDidScroll:(id)arg1;
- (void)_finishedAnimatingScroll;
- (void)mouseMoved:(id)arg1;
- (void)_mouseInside:(id)arg1;
- (void)resetCursorRects;
- (void)keyDown:(id)arg1;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)_refreshScrollerMarkers;
- (double)_markForLineNumber:(unsigned long long)arg1;
- (void)setUsesMarkedScrollbar:(BOOL)arg1;
- (id)attributedStringForCompletionPlaceholderCell:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withDefaultAttributes:(id)arg3;
- (void)clickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (void)_showTemporaryLinkForExpressionUnderMouse:(BOOL)arg1 isAlternate:(BOOL)arg2;
- (void)_didClickOnTemporaryLinkWithEvent:(id)arg1;
- (void)_updateTemporaryLinkUnderMouseForEvent:(id)arg1;
- (unsigned long long)_nonBlankCharacterIndexUnderMouse;
- (unsigned long long)_nonBlankCharacterIndexAtPoint:(struct CGPoint)arg1;
- (void)_clearClickedLinkProgressIndicators;
- (void)_adjustClickedLinkProgressIndicators;
- (void)_adjustClickedLinkProgressIndicator:(id)arg1 withRect:(struct CGRect)arg2;
- (void)_showClickedLinkProgressIndicators;
- (void)_invalidateClickedLinks;
- (id)_clickedLinkProgressIndicatorWithRect:(struct CGRect)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;
- (void)stopBlockHighlighting;
- (void)startBlockHighlighting;
- (id)codeFocusBlockAnimation;
- (void)focusLocationMayHaveChanged:(id)arg1;
- (void)toggleCodeFocus:(id)arg1;
- (BOOL)codeFocusFollowsSelection;
- (void)_drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)_drawCurrentLineHighlight:(struct CGRect)arg1;
- (void)_drawCaretForTextAnnotationsInRect:(struct CGRect)arg1;
- (void)drawTextAnnotationsInRect:(struct CGRect)arg1;
- (long long)_drawRoundedBackgroundForFoldableBlockRangeAtLocation:(unsigned long long)arg1;
- (double)_grayLevelForDepth:(long long)arg1;
- (id)alternateColor;
- (void)setFoldingHoverRange:(struct _NSRange)arg1;
- (struct _NSRange)foldingHoverRange;
- (void)_loadFontsAndColorsFromTheme:(id)arg1;
- (void)_textStorageDidChangeFontAndColorTheme:(id)arg1;
- (void)_fontAndColorSettingsChanged:(id)arg1;
- (void)_scheduleAnnotationLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (unsigned long long)foldedCharacterIndexForPoint:(struct CGPoint)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)_delayedTrimTrailingWhitespaceForLines;
- (void)trimTrailingWhitespaceOnLine:(unsigned long long)arg1;
- (void)_trimTrailingWhitespaceOnLineAfterIndent:(unsigned long long)arg1 trimWhitespaceOnlyLine:(BOOL)arg2;
- (void)trimTrailingWhitespaceOnLine:(unsigned long long)arg1 trimWhitespaceOnlyLine:(BOOL)arg2;
- (void)trimTrailingWhitespaceOnLineFromCharacterIndex:(unsigned long long)arg1 trimWhitespaceOnlyLine:(BOOL)arg2;
- (BOOL)shouldTrimTrailingWhitespace;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)contextMenu_toggleMessageBubbleShown:(id)arg1;
- (void)toggleMessageBubbleShown:(id)arg1;
- (void)_enumerateMessageBubbleAnnotationsInSelection:(CDUnknownBlockType)arg1;
@property(readonly, getter=isAccessoryAnnotationCollapsed) BOOL accessoryAnnotationCollapsed;
- (void)setAccessoryAnnotationWidth:(double)arg1;
- (double)_maxAllowableAccessoryAnnotationWidth;
- (double)_minAllowableAccessoryAnnotationWidth;
@property(readonly) double maxPossibleAccessoryAnnotationWidth;
@property(readonly) double minPossibleAccessoryAnnotationWidth;
- (void)_updateAccessoryAnnotationViewsInRect:(struct CGRect)arg1;
- (void)_adjustSizeOfAccessoryAnnotation:(id)arg1;
- (void)showAnnotation:(id)arg1 animateIndicator:(BOOL)arg2;
- (void)_animateBubbleView:(id)arg1;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didAddAnnotations:(id)arg1;
- (id)visibleAnnotationsForLineNumberRange:(struct _NSRange)arg1;
- (id)annotationForRepresentedObject:(id)arg1;
@property(readonly) NSArray *annotations;
@property(retain) DVTAnnotationManager *annotationManager; // @synthesize annotationManager=_annotationManager;
- (void)setShowsFoldingSidebar:(BOOL)arg1;
- (BOOL)showsFoldingSidebar;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineRange:(struct _NSRange)arg3 ensureLayout:(BOOL)arg4;
- (struct _NSRange)lineNumberRangeForBoundingRect:(struct CGRect)arg1;
- (unsigned long long)lineNumberForPoint:(struct CGPoint)arg1;
- (id)printJobTitle;
- (BOOL)allowsCodeFolding;
- (void)setAllowsCodeFolding:(BOOL)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextStorage:(id)arg1 keepOldLayout:(BOOL)arg2;
- (void)setTextContainer:(id)arg1;
@property id <DVTSourceTextViewDelegate> delegate; // @dynamic delegate;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_commonInitDVTSourceTextView;
- (id)menuForEvent:(id)arg1;
- (BOOL)shouldIndentPastedText:(id)arg1;
- (void)indentUserChangeBy:(long long)arg1;
@property(readonly) double defaultLineHeight;
@property(readonly) unsigned long long numberOfLines;
- (void)ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (double)fmc_startOfLine:(long long)arg1;
- (long long)fmc_lineNumberForPosition:(double)arg1;

// Remaining properties
@property(readonly, copy) NSColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

