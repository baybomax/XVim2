//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTObservingToken, IDEEnableUITestingAccessViewController, IDELicenseAgreementViewController, IDEPackageInstallerViewController, IDEWelcomeWindowTransitionHelper, NSImageView, NSView;

@interface IDEFirstLaunchExperienceViewController : NSViewController
{
    IDELicenseAgreementViewController *_licenseViewController;
    IDEPackageInstallerViewController *_packageInstallerViewController;
    IDEEnableUITestingAccessViewController *_enableUITestingAccessViewController;
    IDEWelcomeWindowTransitionHelper *_transitionHelper;
    NSImageView *_appImageView;
    NSView *_currentView;
    DVTObservingToken *_agreementStatusObserver;
    BOOL _needToInstallPackages;
    BOOL _didShowLicense;
    BOOL _didRequestUITestingAccess;
    BOOL _waitingOnFirstLaunchExperience;
}

+ (void)setTitle:(id)arg1 forRightAnchoredButton:(id)arg2;
+ (id)sharedFirstLaunchExperienceViewController;
+ (BOOL)needToQuitAfterFLE;
@property(getter=isWaitingOnFirstLaunchExperience) BOOL waitingOnFirstLaunchExperience; // @synthesize waitingOnFirstLaunchExperience=_waitingOnFirstLaunchExperience;
- (void).cxx_destruct;
- (void)_restartXcode;
- (BOOL)_isXcodeSystemResourcesAlreadyLoaded;
- (BOOL)_isMobileDeviceAlreadyLoaded;
- (BOOL)_isPackagePartOfInstall:(id)arg1;
- (BOOL)_needToRestartXcode;
- (void)_nestView:(id)arg1 inView:(id)arg2;
- (void)_doneWithFirstLaunchExperience;
- (void)_setCurrentView:(id)arg1;
- (void)_promptForUITestingAccessIfNecessary;
- (BOOL)_shouldPromptForUITestingAccess;
- (void)_handlePackageInstallationComplete;
- (void)_showPackagesToInstallIfNecessary;
- (void)_showLicenseIfNecessary;
- (BOOL)_firstLaunchExperienceNeeded;
- (BOOL)showFirstLaunchExperienceModallyIfNecessary;
- (id)initWithDefaultNib;

@end

