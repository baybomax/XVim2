//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class DVTFilePath, DVTOutlineView, DVTSplitView, DVTWrapperView, IDEDistributionItemSummaryNode, IDEDistributionItemSummaryViewController, NSProgressIndicator, NSString, NSTabView, NSTextField;

@interface IDEDistributionSummaryStepViewController : IDEDistributionStepViewController <DVTOutlineViewDelegate, NSOutlineViewDataSource, NSSplitViewDelegate>
{
    BOOL _canNavigate;
    NSTabView *_tabView;
    DVTSplitView *_splitView;
    DVTOutlineView *_masterOutlineView;
    DVTWrapperView *_detailWrapperView;
    NSProgressIndicator *_spinner;
    NSTextField *_progressMessage;
    DVTFilePath *_packagePath;
    IDEDistributionItemSummaryNode *_rootItem;
    IDEDistributionItemSummaryViewController *_detailViewController;
}

+ (id)keyPathsForValuesAffectingCanPerformAdditionalAction;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingCanGoNext;
@property(nonatomic) BOOL canNavigate; // @synthesize canNavigate=_canNavigate;
@property(retain, nonatomic) IDEDistributionItemSummaryViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) IDEDistributionItemSummaryNode *rootItem; // @synthesize rootItem=_rootItem;
@property(retain, nonatomic) DVTFilePath *packagePath; // @synthesize packagePath=_packagePath;
@property(retain, nonatomic) NSTextField *progressMessage; // @synthesize progressMessage=_progressMessage;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) DVTWrapperView *detailWrapperView; // @synthesize detailWrapperView=_detailWrapperView;
@property(retain, nonatomic) DVTOutlineView *masterOutlineView; // @synthesize masterOutlineView=_masterOutlineView;
@property(retain, nonatomic) DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (BOOL)canPerformAdditionalAction;
- (id)nextButtonTitle;
- (id)title;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

