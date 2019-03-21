//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDEWorkspace, NSArray, NSImage, NSNull, NSOperationQueue, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDESymbolNavigatorRootGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSArray *_groups;
    IDEWorkspace *_workspace;
    unsigned long long _generation;
    NSOperationQueue *_queue;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (id)groups;
- (void)cancelOperations;
- (void)setSymbolNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;
- (void)childrenWithNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;
- (CDUnknownBlockType)_cancelBlockWithNavigator:(id)arg1 generation:(unsigned long long)arg2;
- (id)_indexProtocolSymbolsForNavigator:(id)arg1 index:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)_indexClassSymbolsForNavigator:(id)arg1 index:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)navigatorSymbolForIndexSymbol:(id)arg1 withNavigator:(id)arg2;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

