//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEToyViewController, NSColor, NSDate;

@protocol IDEToyViewControllerDelegate <NSObject>
@property(retain) NSColor *customRightBorderColor;
@property(retain) NSColor *customLeftBorderColor;

@optional
- (void)toyViewController:(IDEToyViewController *)arg1 didSelectNewResultDisplayDate:(NSDate *)arg2;
@end

