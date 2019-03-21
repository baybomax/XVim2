//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/DVTMessageBubbleAnnotationDelegate-Protocol.h>
#import <IDEKit/DVTScopeBarContentController-Protocol.h>

@class DVTNotificationToken, IDEActivityLogAnalyzerResultMessage, IDEAnalyzerResultsVisualization, IDEEditor, NSArray, NSArrayController, NSImageView, NSLayoutConstraint, NSMutableArray, NSPopUpButton, NSSegmentedControl, NSString, NSView;
@protocol IDEAnalyzerResultsHostingEditor;

@interface IDEAnalyzerResultsExplorer : DVTViewController <DVTScopeBarContentController, DVTMessageBubbleAnnotationDelegate>
{
    NSImageView *_iconImageView;
    NSPopUpButton *_stepsPopupButton;
    NSSegmentedControl *_navSegmentedControl;
    NSArrayController *_stepMessagesController;
    DVTNotificationToken *_stepsPoupButtonWillPopUpNotificationToken;
    NSMutableArray *_stepAnnotations;
    IDEEditor<IDEAnalyzerResultsHostingEditor> *_editor;
    IDEActivityLogAnalyzerResultMessage *_analyzerMessage;
    NSArray *_eventStepMessages;
    IDEAnalyzerResultsVisualization *_stepsVisualization;
    long long _currentStepIndex;
    double _preferredViewHeight;
    NSView *_containerView;
    NSLayoutConstraint *_containerViewHeight;
    NSLayoutConstraint *_forwardBackButtonHeight;
    NSLayoutConstraint *_doneButtonHeight;
}

+ (id)keyPathsForValuesAffectingCanShowPreviousStep;
+ (id)keyPathsForValuesAffectingCanShowNextStep;
+ (void)initialize;
@property __weak NSLayoutConstraint *doneButtonHeight; // @synthesize doneButtonHeight=_doneButtonHeight;
@property __weak NSLayoutConstraint *forwardBackButtonHeight; // @synthesize forwardBackButtonHeight=_forwardBackButtonHeight;
@property __weak NSLayoutConstraint *containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
@property(retain) IDEAnalyzerResultsVisualization *stepsVisualization; // @synthesize stepsVisualization=_stepsVisualization;
@property(retain) NSArray *eventStepMessages; // @synthesize eventStepMessages=_eventStepMessages;
@property(retain, nonatomic) IDEActivityLogAnalyzerResultMessage *analyzerMessage; // @synthesize analyzerMessage=_analyzerMessage;
@property(retain) IDEEditor<IDEAnalyzerResultsHostingEditor> *editor; // @synthesize editor=_editor;
@property(nonatomic) long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
- (void).cxx_destruct;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)segmentedNavButtonAction:(id)arg1;
- (void)showPreviousStep:(id)arg1;
- (void)showNextStep:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)didPressDismissOnScopeBar:(id)arg1;
- (void)willBeDismissedAnimate:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_clearAnnotations;
- (BOOL)shouldCloseOnEscape;
- (void)wasAssociatedWithScopeBarController:(id)arg1;
@property(readonly) BOOL canShowPreviousStep;
@property(readonly) BOOL canShowNextStep;
- (void)setCurrentStepIssue:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initUsingDefaultNib;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

