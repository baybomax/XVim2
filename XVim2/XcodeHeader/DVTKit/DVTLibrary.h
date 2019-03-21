//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTLibraryController, DVTMutableOrderedDictionary, DVTStackBacktrace, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DVTLibrary : NSObject <DVTInvalidation>
{
    DVTMutableOrderedDictionary *_librarySourcesToRootGroups;
    NSMutableDictionary *_librarySourcesToAssetIDs;
    NSMutableDictionary *_assetIDsToGroups;
    NSString *_title;
    NSArray *_assets;
    NSDictionary *_identifiedAssets;
    NSString *_identifier;
    DVTExtension *_representedExtension;
    NSArray *_detailControllerIdentifiers;
    CDUnknownBlockType _groupComparator;
    DVTLibraryController *_libraryController;
}

+ (void)initialize;
@property(retain) DVTLibraryController *libraryController; // @synthesize libraryController=_libraryController;
@property(copy, nonatomic) CDUnknownBlockType groupComparator; // @synthesize groupComparator=_groupComparator;
@property(copy, nonatomic) NSArray *detailControllerIdentifiers; // @synthesize detailControllerIdentifiers=_detailControllerIdentifiers;
@property(readonly) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)removeAllAssets;
- (void)removeAsset:(id)arg1;
- (void)removeLibrarySourceWithIdentifier:(id)arg1;
- (void)addLibrarySourceWithIdentifier:(id)arg1 andTitle:(id)arg2;
- (void)insertLibrarySourceWithIdentifier:(id)arg1 andTitle:(id)arg2 atIndex:(long long)arg3;
- (void)addAsset:(id)arg1 toLibrarySourceWithIdentifier:(id)arg2 subpath:(id)arg3;
- (id)assetWithIdentifier:(id)arg1;
@property(readonly) NSDictionary *identifiedAssets;
@property(readonly, copy) NSArray *assets;
- (void)dropCachesAndNotifyChange;
@property(readonly, copy) NSArray *orderedLibrarySourceIdentifiers;
- (void)primitiveInvalidate;
- (id)initWithExtension:(id)arg1 andLibraryController:(id)arg2;
- (id)initWithIdentifier:(id)arg1 andTitle:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

