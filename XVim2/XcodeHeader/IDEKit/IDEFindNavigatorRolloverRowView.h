//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@protocol IDEFindNavigatorRolloverRowViewDelegate;

@interface IDEFindNavigatorRolloverRowView : NSTableRowView
{
    id <IDEFindNavigatorRolloverRowViewDelegate> _delegate;
    id _representedObject;
}

@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

