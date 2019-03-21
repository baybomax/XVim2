//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDELogNavigator, NSArray, NSString, NSWindow;

@protocol IDEContinuousIntegrationLogNavigatorHelper <NSObject>
- (NSArray *)statusImagesForXCSItem:(id)arg1 status:(id)arg2 renderInWindow:(NSWindow *)arg3 rowIsDisclosed:(BOOL)arg4;
- (long long)statusOfIntegration:(id)arg1;
- (BOOL)isIntegrationFinished:(id)arg1;
- (void)performAction:(SEL)arg1 forNavigableItemSelection:(NSArray *)arg2 withNavigator:(IDELogNavigator *)arg3;
- (NSString *)titleForNavigableItemSelection:(NSArray *)arg1 action:(SEL)arg2 menuItemState:(id *)arg3;
- (BOOL)navigableItemSelection:(NSArray *)arg1 allowsAction:(SEL)arg2;
@end

