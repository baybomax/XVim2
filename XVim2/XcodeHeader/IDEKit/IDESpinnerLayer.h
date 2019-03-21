//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSColor;

@interface IDESpinnerLayer : CALayer
{
    NSColor *_color;
    unsigned long long _animationStyle;
    CALayer *_containerLayer;
    double _centerMagnitude;
    double _spokeWidth;
    double _spokeHeight;
    double _bottomRadiusToWidthFactor;
    double _topRadiusToWidthFactor;
    double _speedMultiplier;
    double _dimPercent;
}

@property double dimPercent; // @synthesize dimPercent=_dimPercent;
@property double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property double topRadiusToWidthFactor; // @synthesize topRadiusToWidthFactor=_topRadiusToWidthFactor;
@property double bottomRadiusToWidthFactor; // @synthesize bottomRadiusToWidthFactor=_bottomRadiusToWidthFactor;
@property double spokeHeight; // @synthesize spokeHeight=_spokeHeight;
@property double spokeWidth; // @synthesize spokeWidth=_spokeWidth;
@property double centerMagnitude; // @synthesize centerMagnitude=_centerMagnitude;
@property(retain) CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (struct CAShapeLayer *)_generateSpokeLayer;
- (id)_mutableColorsArray:(struct CGColor *)arg1 stops:(unsigned long long)arg2;
- (void)_addBrightnessAnimationToContainerLayer;
- (void)_addRotationAnimationToContainerLayer;
- (void)_addAnimationToContainerLayer;
- (void)_positionAndRotateSpokeLayers;
- (void)_generatePathsOnLayers;
- (void)_addAndRemoveSpokeLayersForSize:(struct CGSize)arg1;
- (void)_prepareLayersForAnimation;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSublayers;
- (id)init;

@end

