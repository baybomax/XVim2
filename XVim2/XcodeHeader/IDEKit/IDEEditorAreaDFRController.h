//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DFRNavigationMode, DVTObservingToken, NSSegmentedControl;

@interface IDEEditorAreaDFRController : NSObject
{
    DVTObservingToken *_editorAreaDocumentObserver;
    DFRNavigationMode *_modeForFileHistoryNavigation;
    NSSegmentedControl *_fileHistoryControl;
}

@property(retain) NSSegmentedControl *fileHistoryControl; // @synthesize fileHistoryControl=_fileHistoryControl;
@property(retain) DFRNavigationMode *modeForFileHistoryNavigation; // @synthesize modeForFileHistoryNavigation=_modeForFileHistoryNavigation;
@property(retain) DVTObservingToken *editorAreaDocumentObserver; // @synthesize editorAreaDocumentObserver=_editorAreaDocumentObserver;
- (void).cxx_destruct;

@end

