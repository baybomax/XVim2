//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSOpenSavePanelDelegate-Protocol.h>

@class NSSet, NSString;

@interface _IDEStructureNavigatorAddFilesOpenPanelDelegate : NSObject <NSOpenSavePanelDelegate>
{
    NSSet *_urls;
}

- (void).cxx_destruct;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

