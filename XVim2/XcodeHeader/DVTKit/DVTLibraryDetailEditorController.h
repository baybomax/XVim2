//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTLibraryAsset, DVTLibraryDetailController, NSResponder;

@interface DVTLibraryDetailEditorController : DVTViewController
{
    CDUnknownBlockType _didEditHandlerBlock;
    DVTLibraryDetailController *_currentDetailController;
    NSResponder *_initialResponder;
    DVTLibraryAsset *_editedAsset;
}

@property(retain, nonatomic) DVTLibraryAsset *editedAsset; // @synthesize editedAsset=_editedAsset;
@property(retain) NSResponder *initialResponder; // @synthesize initialResponder=_initialResponder;
@property(retain) DVTLibraryDetailController *currentDetailController; // @synthesize currentDetailController=_currentDetailController;
@property(readonly, copy) CDUnknownBlockType didEditHandlerBlock; // @synthesize didEditHandlerBlock=_didEditHandlerBlock;
- (void).cxx_destruct;
- (void)didChangeCurrentDetailController;
- (void)willChangeCurrentDetailController;
- (void)primitiveInvalidate;
- (id)initWithDidEditHandlerBlock:(CDUnknownBlockType)arg1;

@end

