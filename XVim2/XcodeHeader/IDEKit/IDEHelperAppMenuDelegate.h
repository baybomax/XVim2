//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IDEHelperAppMenuDelegate : NSObject <NSMenuDelegate>
{
}

+ (void)_addGetMoreToolsMenuItemTo:(id)arg1;
+ (void)addInternalHelperAppLaunchMenuItemsTo:(id)arg1;
+ (void)addHelperAppLaunchMenuItemsTo:(id)arg1;
+ (id)_menuItemForPath:(id)arg1;
+ (void)_openURL:(id)arg1;
+ (void)_startHelperApp:(id)arg1;
- (void)menuWillOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

