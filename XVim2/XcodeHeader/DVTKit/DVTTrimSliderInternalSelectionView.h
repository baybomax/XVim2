//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DVTTrimSliderInternalSelectionView : NSView
{
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (id)_backgroundColorHighlighted;
- (id)_backgroundColorNormal;
- (void)_updateColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

