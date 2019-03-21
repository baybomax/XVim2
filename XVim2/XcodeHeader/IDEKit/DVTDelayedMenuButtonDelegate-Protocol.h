//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDelayedMenuButton, NSMenu, NSMenuItem;

@protocol DVTDelayedMenuButtonDelegate <NSObject>

@optional
- (void)delayedMenuButton:(DVTDelayedMenuButton *)arg1 sendClickAction:(SEL)arg2 to:(id)arg3 from:(id)arg4;
- (NSMenu *)updatedMenuForDelayedMenuButton:(DVTDelayedMenuButton *)arg1;
- (NSMenuItem *)delayedMenuButton:(DVTDelayedMenuButton *)arg1 willSetCurrentMenuItem:(NSMenuItem *)arg2;
@end

