//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTreeNode.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDESourceControlTreeNode (IDESourceControlTreeNodeNavigablePropertyAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlServerStatus;
+ (id)keyPathsForValuesAffectingNavigableItem_sourceControlLocalStatus;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
- (id)navigableItem_sourceControlServerStatus;
- (id)navigableItem_sourceControlLocalStatus;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly) Class superclass;
@end

