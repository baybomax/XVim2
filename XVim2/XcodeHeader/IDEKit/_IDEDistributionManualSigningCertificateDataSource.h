//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEProvisioningSigningCertificateSelectionDataSource-Protocol.h>

@class IDEDistributionContext, NSOrderedSet;
@protocol IDEProvisioningBasicSigningIdentity, IDEProvisioningBasicTeam;

@interface _IDEDistributionManualSigningCertificateDataSource : NSObject <IDEProvisioningSigningCertificateSelectionDataSource>
{
    id <IDEProvisioningBasicSigningIdentity> _automaticIdentity;
    BOOL _manageInstallerCerts;
    IDEDistributionContext *_context;
    NSOrderedSet *_signingIdentities;
}

+ (id)keyPathsForValuesAffectingSigningIdentity;
@property(retain, nonatomic) NSOrderedSet *signingIdentities; // @synthesize signingIdentities=_signingIdentities;
@property(readonly, nonatomic) IDEDistributionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly) BOOL wantsTeamSelectionRegardlessOfSigningStyle;
- (void)enableDevelopmentSigning;
@property(readonly) long long signingStyle;
@property(retain, nonatomic) id <IDEProvisioningBasicSigningIdentity> signingIdentity;
@property(readonly) BOOL isSigningIdentityChangeable;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team;
@property(readonly, nonatomic) BOOL isTeamSelectionRequired;
@property(readonly, getter=isRepairBusy) BOOL repairBusy;
- (void)_reloadCertificates;
- (id)initWithContext:(id)arg1 manageInstallerCerts:(BOOL)arg2;
- (id)initInstallerCertificateDataSourceWithContext:(id)arg1;
- (id)initCertificateDataSourceWithContext:(id)arg1;

@end

