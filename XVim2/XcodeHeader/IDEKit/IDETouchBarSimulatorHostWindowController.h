//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSWindowDelegate-Protocol.h>

@class IDETouchBarSimulatorRemoteViewController, NSObject, NSString;
@protocol IDETouchBarSimulatorHostWindowControllerDelegate, OS_dispatch_queue;

@interface IDETouchBarSimulatorHostWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _viewServiceRequested;
    id <IDETouchBarSimulatorHostWindowControllerDelegate> _delegate;
    IDETouchBarSimulatorRemoteViewController *_simulatorRemoteViewController;
    NSObject<OS_dispatch_queue> *_viewServiceRequestQueue;
}

+ (id)simulatorHostWindowController;
@property(retain) NSObject<OS_dispatch_queue> *viewServiceRequestQueue; // @synthesize viewServiceRequestQueue=_viewServiceRequestQueue;
@property BOOL viewServiceRequested; // @synthesize viewServiceRequested=_viewServiceRequested;
@property(retain) IDETouchBarSimulatorRemoteViewController *simulatorRemoteViewController; // @synthesize simulatorRemoteViewController=_simulatorRemoteViewController;
@property __weak id <IDETouchBarSimulatorHostWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_viewServiceRequestQueue_waitForSimulatorRemoteViewControllerWithTimeout:(double)arg1;
- (void)_viewServiceRequestQueue_safeAccessToSimulatorRemoteViewControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)_viewServiceRequestQueue_requestSimulatoRemoteViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_viewServiceRequestQueue_configureViewServiceBeforeCallingBlock:(CDUnknownBlockType)arg1;
- (void)_synchronizedAccessToSimulatorRemoteViewControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)disableSimulatorService;
- (void)enableSimulatorService;
- (BOOL)isWindowVisible;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

