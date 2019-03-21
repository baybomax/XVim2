//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTDealloc2Main_WindowController.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTTextCompletionTableViewScrollEventDelegate-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>
#import <DVTKit/NSTableViewDataSource-Protocol.h>
#import <DVTKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTObservingToken, DVTScaleInWindowAnimator, DVTStackBacktrace, DVTTextCompletionTableView, DVTViewController, NSScrollView, NSString, NSTableColumn, NSTextField, NSViewAnimation;
@protocol DVTInvalidation, DVTTextCompletionListDataSource;

@interface DVTTextCompletionListWindowController : DVTDealloc2Main_WindowController <DVTTextCompletionTableViewScrollEventDelegate, DVTInvalidation, NSTableViewDataSource, NSTableViewDelegate, NSAnimationDelegate>
{
    NSTextField *_messagesField;
    DVTTextCompletionTableView *_completionsTableView;
    NSTableColumn *_iconColumn;
    NSTableColumn *_typeColumn;
    NSTableColumn *_titleColumn;
    NSScrollView *_completionsScrollView;
    DVTBorderedView *_quickHelpView;
    DVTBorderedView *_divider;
    id <DVTTextCompletionListDataSource> _dataSource;
    struct CGRect _referenceFrameInView;
    DVTScaleInWindowAnimator *_fadeInAnimator;
    NSViewAnimation *_fadeOutAnimation;
    DVTObservingToken *_sessionCompletionsObserver;
    DVTObservingToken *_sessionSelectionObserver;
    int _hideReason;
    BOOL _showingWindow;
    BOOL _shouldIgnoreSelectionChange;
    BOOL _quickHelpOnTop;
    DVTDelayedInvocation *_delayedQuickHelpClearing;
    BOOL _tableViewHasScrolled;
    DVTViewController<DVTInvalidation> *_infoContentViewController;
    NSString *_debugStateString;
    DVTBorderedView *_contentView;
    NSTableColumn *_leftPaddingColumn;
}

+ (void)initialize;
@property BOOL tableViewHasScrolled; // @synthesize tableViewHasScrolled=_tableViewHasScrolled;
@property __weak NSTableColumn *leftPaddingColumn; // @synthesize leftPaddingColumn=_leftPaddingColumn;
@property __weak DVTBorderedView *contentView; // @synthesize contentView=_contentView;
@property(readonly) NSString *debugStateString; // @synthesize debugStateString=_debugStateString;
@property(readonly) DVTViewController<DVTInvalidation> *infoContentViewController; // @synthesize infoContentViewController=_infoContentViewController;
@property(nonatomic) int hideReason; // @synthesize hideReason=_hideReason;
@property(readonly) id <DVTTextCompletionListDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) BOOL showingWindow; // @synthesize showingWindow=_showingWindow;
@property(readonly) NSScrollView *completionsScrollView; // @synthesize completionsScrollView=_completionsScrollView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)viewportRowCountInTableView:(id)arg1;
- (void)_updateInfoNewSelection;
- (BOOL)showInfoForSelectedCompletionItem;
- (id)_selectedCompletionItem;
- (void)_updateInfoPaneForCompletionItem:(id)arg1 andViewController:(id)arg2;
- (void)_removeQuickHelpView;
- (void)showInfoPaneForCompletionItem:(id)arg1;
- (void)close;
- (struct CGRect)_preferredWindowFrameForTextFrame:(struct CGRect)arg1 columnsWidth:(double *)arg2 titleColumnX:(double)arg3;
- (void)_getTitleColumnWidth:(double *)arg1 typeColumnWidth:(double *)arg2;
- (void)_updateSelectedRow;
- (void)_updateCurrentDisplayState;
- (void)_updatePositionOfMessageLabelUsingWindowFrame:(struct CGRect)arg1;
- (double)_preferredHeightForMessageLabel;
- (void)_updateCurrentDisplayStateForQuickHelp;
- (void)selectedCompletionIndexChanged;
- (void)completionListChanged;
- (void)_doubleClickOnRow:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)hideWindowWithReason:(int)arg1;
- (void)_hideWindow;
- (void)showWindowForTextFrame:(struct CGRect)arg1 explicitAnimation:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)completionTableView:(id)arg1 didReceiveScrollWheelEvent:(id)arg2;
- (void)windowDidLoad;
- (id)initWithDataSource:(id)arg1;
- (id)window;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

