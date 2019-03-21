//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTLogAspect, DVTStackBacktrace, NSArray, NSString;
@protocol DVTSigningCertificateSourceDelegate;

@interface DVTSigningCertificateSource : NSObject <DVTInvalidation>
{
    BOOL _wantsAllApplicationsToAccessKeychainItems;
    id <DVTSigningCertificateSourceDelegate> _delegate;
    NSArray *_keychainSearchList;
    DVTLogAspect *_logAspect;
}

+ (BOOL)supportsInvalidationPrevention;
+ (id)_defaultKeychainSearchList;
+ (void)initialize;
@property(nonatomic) BOOL wantsAllApplicationsToAccessKeychainItems; // @synthesize wantsAllApplicationsToAccessKeychainItems=_wantsAllApplicationsToAccessKeychainItems;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) NSArray *keychainSearchList; // @synthesize keychainSearchList=_keychainSearchList;
@property(retain, nonatomic) id <DVTSigningCertificateSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keychainUnknownEvent;
- (void)_keychainKeyAddedOrDeleted;
- (void)_keychainCertificateDeleted:(struct OpaqueSecCertificateRef *)arg1;
- (void)_keychainCertificateAdded:(struct OpaqueSecCertificateRef *)arg1;
- (void)_stopListeningForKeychainEvents;
- (void)_startListeningForKeychainEvents;
- (void)_registerKeychainCallback;
- (id)_fetchSigningCertificates;
- (BOOL)_isCertificateAnIdentity:(id)arg1;
- (BOOL)_installPrivateKey:(struct OpaqueSecKeyRef *)arg1 privateKeyName:(id)arg2 error:(id *)arg3;
- (BOOL)_installCertificate:(id)arg1 error:(id *)arg2;
- (BOOL)_installCertificate:(id)arg1 privateKey:(struct OpaqueSecKeyRef *)arg2 keyName:(id)arg3 error:(id *)arg4;
- (struct OpaqueSecKeychainRef *)_installKeychain;
- (id)allSigningCertificates;
- (id)initWithKeychainSearchList:(id)arg1 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg2 logAspect:(id)arg3;
- (id)initWithLogAspect:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

