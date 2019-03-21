//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTRolloverImageButton, DVTScrollView, DVTTableView, IDEFirstLaunchExperienceViewController, IDERecentsHelper, IDEWelcomeWindowHighlightButton, NSArrayController, NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField, NSTouchBar, NSTrackingArea, NSView;
@protocol IDEWelcomeWindowButtonProvider;

@interface IDEWelcomeWindowController : NSWindowController <NSTouchBarProvider, NSTouchBarDelegate>
{
    DVTTableView *_projectsTableView;
    IDEWelcomeWindowHighlightButton *_newProjectAssistantButton;
    IDEWelcomeWindowHighlightButton *_sourceControlButton;
    NSTextField *_newProjectAssistantButtonTitle;
    NSTextField *_sourceControlButtonTitle;
    NSTextField *_newProjectAssistantButtonDescription;
    NSTextField *_sourceControlButtonDescription;
    NSView *_welcomeWindowView;
    NSProgressIndicator *_progressIndicator;
    NSTrackingArea *_fadeControlsTrackingArea;
    IDEFirstLaunchExperienceViewController *_firstLaunchExperienceViewController;
    BOOL _showingFirstLaunchExperience;
    DVTNotificationToken *_projectsScrollViewFrameChangeNotificationToken;
    DVTObservingToken *_projectsListChangedNotificationToken;
    DVTObservingToken *_toolchainDescriptionObserver;
    IDERecentsHelper *_recentsHelper;
    id <IDEWelcomeWindowButtonProvider> _secretButtonProvider;
    BOOL _transientControlsHidden;
    NSArrayController *_projectsArrayController;
    NSView *_leftContentsArea;
    NSImageView *_xcodeIconView;
    NSTextField *_welcomeToXcodeLabel_10_10;
    NSTextField *_versionLabel;
    NSTextField *_toolchainLabel;
    DVTRolloverImageButton *_toolchainButton;
    DVTRolloverImageButton *_closeButton;
    DVTScrollView *_projectsScrollView;
    NSButton *_showWindowCheckbox;
    NSButton *_openAnotherProjectButton;
    IDEWelcomeWindowHighlightButton *_createPlaygroundButton;
    NSTextField *_createPlaygroundButtonTitle;
    DVTBorderedView *_openAnotherProjectContainerView;
}

+ (BOOL)_canCoexistWithWindow:(id)arg1;
+ (id)keyPathsForValuesAffectingToolchainDescription;
+ (BOOL)wantsReopenedWelcomeWindow;
+ (id)sharedWelcomeWindowController;
+ (id)currentlyOpenOrNewWelcomeWindowController;
+ (id)currentlyOpenWelcomeWindowController;
+ (void)initialize;
@property __weak DVTBorderedView *openAnotherProjectContainerView; // @synthesize openAnotherProjectContainerView=_openAnotherProjectContainerView;
@property __weak NSTextField *createPlaygroundButtonTitle; // @synthesize createPlaygroundButtonTitle=_createPlaygroundButtonTitle;
@property __weak IDEWelcomeWindowHighlightButton *createPlaygroundButton; // @synthesize createPlaygroundButton=_createPlaygroundButton;
@property __weak NSButton *openAnotherProjectButton; // @synthesize openAnotherProjectButton=_openAnotherProjectButton;
@property __weak NSButton *showWindowCheckbox; // @synthesize showWindowCheckbox=_showWindowCheckbox;
@property __weak DVTScrollView *projectsScrollView; // @synthesize projectsScrollView=_projectsScrollView;
@property __weak DVTRolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property __weak DVTRolloverImageButton *toolchainButton; // @synthesize toolchainButton=_toolchainButton;
@property __weak NSTextField *toolchainLabel; // @synthesize toolchainLabel=_toolchainLabel;
@property __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
@property __weak NSTextField *welcomeToXcodeLabel_10_10; // @synthesize welcomeToXcodeLabel_10_10=_welcomeToXcodeLabel_10_10;
@property __weak NSImageView *xcodeIconView; // @synthesize xcodeIconView=_xcodeIconView;
@property __weak NSView *leftContentsArea; // @synthesize leftContentsArea=_leftContentsArea;
@property(nonatomic) BOOL transientControlsHidden; // @synthesize transientControlsHidden=_transientControlsHidden;
@property(retain) NSArrayController *projectsArrayController; // @synthesize projectsArrayController=_projectsArrayController;
- (void).cxx_destruct;
- (void)_windowDidBecomeKeyOrMain:(id)arg1;
- (void)_addWindowNotificationObservers;
- (void)_removeWindowNotificationObservers;
- (void)doSpecialButtonAction:(id)arg1;
- (void)openSourceControl:(id)arg1;
- (void)openNewProjectAssistant:(id)arg1;
- (void)createNewPlayground:(id)arg1;
- (void)showToolchains:(id)arg1;
- (void)_showInFinder:(id)arg1;
- (void)openSelected:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)closeWelcomeWindow:(id)arg1;
- (void)runOpenPanel:(id)arg1;
- (void)_openWelcomeWindowIfAppropriate;
- (void)_prepareXcodeForUIWithRegistrationAndSetupOfExtraServices:(BOOL)arg1;
- (BOOL)_showFirstLaunchExperienceIfAppropriate;
- (BOOL)_waitingForFirstLaunch;
- (BOOL)isShowingFirstLaunchExperience;
- (void)showFirstLaunchExperienceIfAppropriate;
- (void)openWelcomeWindowAfterWorkspaceWindowClosedIfAppropriate:(id)arg1;
- (void)openWelcomeWindowAfterFirstLaunchExperienceIfAppropriate:(id)arg1;
- (void)openWelcomeWindow:(id)arg1;
- (void)_openWelcomeWindowWithAutoCloseEnabled:(BOOL)arg1;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)_configureWindowAdditionalAccessibility;
- (void)_updateProjectsTableViewEmptyContentString;
- (void)_updateToolchainJumpImage;
- (void)_configureWindowControlEyeCandy;
- (void)_configureWindow;
- (void)windowDidLoad;
- (void)_setProgressIndicatorVisible:(BOOL)arg1;
- (void)windowWillLoad;
@property(readonly) NSString *toolchainDescription;
- (id)_toolchainRegistry;
@property(readonly) NSString *xcodeVersion;
- (id)_newProjectButton;
- (id)_newPlaygroundButton;
- (id)_newCheckoutButton;
- (id)_newCheckoutItemWithIdentifier:(id)arg1;
- (id)_newPlaygroundItemWithIdentifier:(id)arg1;
- (id)_newProjectItemWithIdentifier:(id)arg1;
- (id)_createTouchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)updateTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

