//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTObservingToken, IDEEditorDocument;

@interface IDEDocumentStructureProvidingNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_documentObservingToken;
    BOOL _invalidatingTopLevelObjects;
    IDEEditorDocument *_document;
}

@property(retain, nonatomic) IDEEditorDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (BOOL)isDocumentNavigableItem;
- (id)_structureProvidingEditorDocument;
- (id)_editorDocument;
- (void)updateEditorDocument:(id)arg1;
- (void)invalidateChildItems;
- (void)_documentDidClose;
- (void)primitiveInvalidate;

@end

