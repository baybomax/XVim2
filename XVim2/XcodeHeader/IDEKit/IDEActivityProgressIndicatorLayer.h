//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CABasicAnimation, DVTDelayedInvocation, IDESpinnerLayer, NSImage;

@interface IDEActivityProgressIndicatorLayer : CALayer
{
    CABasicAnimation *_indeterminateDiagonalsAnimation;
    unsigned long long _progressStyle;
    NSImage *_indeterminateDiagonalsLayerContents;
    IDESpinnerLayer *_indeterminateSpinnerLayer;
    DVTDelayedInvocation *_progressInvocation;
    CALayer *_progressContainerLayer;
    NSImage *_containerLayerContents;
    NSImage *_progressLayerContents;
    CALayer *_progressLayer;
    NSImage *_shadowLayerContents;
    CALayer *_containerLayer;
    double _doubleValue;
    double _minValue;
    double _maxValue;
    struct {
        unsigned int indeterminate:1;
        unsigned int willGoBackwards:1;
        unsigned int _reserved:6;
    } _flags;
    BOOL _isActiveWindowStyle;
    double _spaceNeededForMultiActionIndicator;
    double _spaceNeededForIndeterminateIndicator;
}

+ (id)defaultActionForKey:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
@property(nonatomic) double spaceNeededForIndeterminateIndicator; // @synthesize spaceNeededForIndeterminateIndicator=_spaceNeededForIndeterminateIndicator;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(nonatomic) unsigned long long progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)invalidateProgressState;
- (void)validateProgressStateIfNeeded;
- (void)_updateProgressLayerColor;
- (void)updateProgressLayer;
- (void)reflectStyle;
- (struct CGRect)effectiveProgressLayerBoundsCalculatingPercentage;
- (struct CGRect)effectiveProgressContainerLayerBounds;
- (struct CGPoint)effectiveProgressContainerLayerPosition;
- (void)updateContainerLayerContents;
- (void)clearCachedContainerLayerContents;
- (void)reflectIndeterminateState;
- (void)setupLayers;
- (id)_buildProgressLayerInRect:(struct CGRect)arg1;
- (id)_buildProgressContainerLayer;
- (id)_buildIndeterminateSpinnerLayer;
- (void)_updateSpinnerConstraintsOnLayer:(id)arg1;
- (struct CGRect)_rectForIndeterminateSpinningIndicator;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
@property(getter=isIndeterminate) BOOL indeterminate;
- (double)effectivePercentage;
- (void)cancelProgressUpdater;
- (id)init;
- (void)updateBoundValue;
- (id)dvt_extraBindings;

@end

