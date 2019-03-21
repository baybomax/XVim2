//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTDealloc2Main_WindowController.h>

#import <IDEKit/IDESourceControlCredentialViewDelegate-Protocol.h>

@class DVTSourceControlRemoteRepository, IDESourceControlCredentialViewController, NSButton, NSLayoutConstraint, NSStackView, NSString, NSURL, NSWindow;

@interface IDESourceControlCredentialWindowController : DVTDealloc2Main_WindowController <IDESourceControlCredentialViewDelegate>
{
    IDESourceControlCredentialViewController *_credentialViewController;
    NSString *_sshKeyComment;
    NSURL *_sshFolderURL;
    DVTSourceControlRemoteRepository *_remoteRepository;
    unsigned long long _otherSimilarRepos;
    NSWindow *_sheetOwner;
    NSStackView *_stackView;
    NSButton *_okButton;
    NSButton *_applyToAllButton;
    NSLayoutConstraint *_okButtonConstraint;
}

@property __weak NSLayoutConstraint *okButtonConstraint; // @synthesize okButtonConstraint=_okButtonConstraint;
@property __weak NSButton *applyToAllButton; // @synthesize applyToAllButton=_applyToAllButton;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSWindow *sheetOwner; // @synthesize sheetOwner=_sheetOwner;
@property unsigned long long otherSimilarRepos; // @synthesize otherSimilarRepos=_otherSimilarRepos;
@property(retain) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void).cxx_destruct;
- (void)close;
- (void)cancelCredentialSheet:(id)arg1;
- (void)_completeOperation:(id)arg1;
- (void)commitCredentialSheet:(id)arg1;
- (void)setStatus:(long long)arg1 withText:(id)arg2 action:(long long)arg3;
- (void)retryOperation:(id)arg1;
- (void)viewNeedsHeight:(double)arg1;
- (void)windowDidLoad;
@property(readonly) BOOL applyToOthers;
- (id)initWithRemoteRepository:(id)arg1 othersToOffer:(unsigned long long)arg2 sshKeyComment:(id)arg3 sshKeyFolderURL:(id)arg4 owningWindow:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

