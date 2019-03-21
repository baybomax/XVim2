//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSArray, NSFileManager, NSMutableArray;
@protocol DVTPackageInstallerHelperDelegate;

@interface DVTFirstLaunchPackageInstallationHelper : NSObject
{
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    NSArray *_packagesToInstall;
    NSMutableArray *_downgradedBundleIDs;
    NSFileManager *_fm;
}

+ (void)initialize;
@property(readonly) NSFileManager *fm; // @synthesize fm=_fm;
@property(retain) NSMutableArray *downgradedBundleIDs; // @synthesize downgradedBundleIDs=_downgradedBundleIDs;
@property(retain) NSArray *packagesToInstall; // @synthesize packagesToInstall=_packagesToInstall;
- (void).cxx_destruct;
- (long long)_compareVersionComponents:(id)arg1 toComponents:(id)arg2;
- (id)_getComparableComponents:(id)arg1;
- (BOOL)_isPackageVersion:(id)arg1 greaterThanVersion:(id)arg2;
- (BOOL)_shouldUpgradePackage:(id)arg1;
- (id)_interestingFileURLsForID:(id)arg1;
- (BOOL)_allInterestingFilesExistForID:(id)arg1;
- (BOOL)_allCacheFilesAreUpToDateForID:(id)arg1;
- (BOOL)shouldInstallPackage:(id)arg1;
- (id)uncachedPackagesToInstall;
- (void)installPackagesWithAuthRef:(const struct AuthorizationOpaqueRef *)arg1;
- (id)_packageURLsToInstall;
- (id)_allPackagesInPackagesFolder;
- (BOOL)_needToInstallMobileDevicePackage:(id)arg1;
- (void)_createCacheFile:(id)arg1;
- (id)_coreSimulatorCacheFileURL;
- (id)_mobileDeviceCacheFileURL;
- (id)_cacheFileNameWithComponent:(id)arg1;
- (id)_cacheFilesForID:(id)arg1;
- (void)_createCacheFileIfNeeded:(id)arg1;
- (id)initWithDelegate:(id)arg1 packagesOnly:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1;
@property __weak id <DVTPackageInstallerHelperDelegate> delegate;

@end

