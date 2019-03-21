//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEWorkspaceDFRDebugBarItemFactoryControlDelegate-Protocol.h>

@class DVTObservingToken, IDEWorkspaceDFRController, IDEWorkspaceWindowController, NSButton, NSString;

@interface GPUDFRController : NSObject <IDEWorkspaceDFRDebugBarItemFactoryControlDelegate>
{
    IDEWorkspaceDFRController *_workspaceDFRController;
    NSButton *_continueOrPauseButton;
    DVTObservingToken *_gpuDebugStateObservingToken;
}

@property(retain) DVTObservingToken *gpuDebugStateObservingToken; // @synthesize gpuDebugStateObservingToken=_gpuDebugStateObservingToken;
@property(retain) NSButton *continueOrPauseButton; // @synthesize continueOrPauseButton=_continueOrPauseButton;
@property __weak IDEWorkspaceDFRController *workspaceDFRController; // @synthesize workspaceDFRController=_workspaceDFRController;
- (void).cxx_destruct;
- (BOOL)stopActionShouldPromptToChooseProcessForDebugBarItemFactory:(id)arg1;
- (void)debugBarItemFactory:(id)arg1 stopPopoverFunctionBarItemWasCreated:(id)arg2;
- (id)stopControlForDebugBarItemFactory:(id)arg1;
- (id)_makeGPUPauseContinueButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)_gpuResumeStopButtonOnProvider:(id)arg1;
- (void)_registerObserverForCaptureButton:(id)arg1 onProvider:(id)arg2;
- (id)debugPauseResumeControlForDebugBarItemFactory:(id)arg1;
- (id)debugSteppingSegmentedControlForDebugBarItemFactory:(id)arg1;
- (id)debugExtrasControlForDebugBarItemFactory:(id)arg1;
- (id)debugBreakpointsControlForDebugBarItemFactory:(id)arg1;
- (id)_debugBarContentProviderWithClassName:(id)arg1 debugBar:(id)arg2;
- (id)_activeDebugBar;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController;
- (id)initWithWorkspaceDFRController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

