//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class DVTExtension, IDEWorkspaceTabController, NSCell, NSMenu;
@protocol IDEDebugGaugeDataSource, IDEDebuggingAddition;

@protocol IDEDebuggingAdditionUIController <NSObject, DVTInvalidation>
- (DVTExtension *)extension;
- (id)initWithWorkspaceTabController:(IDEWorkspaceTabController *)arg1 withDebuggingAddition:(id <IDEDebuggingAddition>)arg2 forExtension:(DVTExtension *)arg3;

@optional
- (id <IDEDebugGaugeDataSource>)dataSourceForNavigationProcessHeader;
- (NSCell *)trayCellForNavigationProcessHeader;
- (NSMenu *)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
@end

