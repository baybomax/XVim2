//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSegmentedControl;

@interface IDEInspectorResizableSegmentedControlView : NSView
{
    NSSegmentedControl *segmentedControl;
}

- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)sizeSegmentedControlToFit;
- (void)legacySizeSegmentedControlToFit;
- (void)optimallySizeSegments;
- (double)autosizedSegmentWidthForSegment:(long long)arg1;

@end

