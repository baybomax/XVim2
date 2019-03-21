//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSImage;

@interface DVTGradientImagePopUpButtonCell : NSPopUpButtonCell
{
    int _gradientStyle;
    unsigned long long _borderSides;
    unsigned long long _highlightSides;
    NSImage *_imageBlueOnImageDerivedFrom;
    NSImage *_blueOnImage;
}

@property unsigned long long highlightSides; // @synthesize highlightSides=_highlightSides;
@property unsigned long long borderSides; // @synthesize borderSides=_borderSides;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (void).cxx_destruct;
- (BOOL)_shouldUseColorPunchOutStyleForGradientStyle;
- (void)_updateImageIfNecessary;
- (struct NSEdgeInsets)_popupBezelInsets;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)interiorBackgroundStyle;

@end

