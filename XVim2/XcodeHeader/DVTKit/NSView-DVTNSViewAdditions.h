//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTViewController;

@interface NSView (DVTNSViewAdditions)
+ (double)dvt_floatValueForSizeStyle:(long long)arg1 smallValue:(double)arg2 mediumValue:(double)arg3 largeValue:(double)arg4;
+ (id)keyPathsForValuesAffectingDvt_isDark;
- (struct CGSize)dvt_ceilSizeForScaleFactor:(struct CGSize)arg1;
- (struct CGSize)dvt_floorSizeForScaleFactor:(struct CGSize)arg1;
- (struct CGPoint)dvt_ceilPointForScaleFactor:(struct CGPoint)arg1;
- (struct CGPoint)dvt_floorPointForScaleFactor:(struct CGPoint)arg1;
- (double)dvt_ceilValueForScaleFactor:(double)arg1;
- (double)dvt_floorValueForScaleFactor:(double)arg1;
- (double)dvt_scaleFactor;
- (BOOL)dvt_setBackgroundMaterialWindow;
- (BOOL)dvt_setBackgroundMaterialContent;
- (void)dvt_insertBackgroundVisualEffectView:(id)arg1;
- (id)dvt_backgroundVisualEffectViewCreatingIfNeeded:(BOOL)arg1;
- (void)dvt_setBackgroundMaterial:(long long)arg1;
- (void)dvt_addMinimumSizeAutolayoutConstraints:(struct CGSize)arg1;
@property(readonly) BOOL dvt_hasDarkAppearance;
@property(readonly) BOOL dvt_isDark;
- (void)dvt_setMinimumSizeAutolayoutConstraints:(struct CGSize)arg1;
- (void)_setCachedMinimumSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize dvt_minimumSize;
- (BOOL)dvt_viewShouldDrawActive;
- (void)dvt_invalidateCursorRects;
- (void)dvt_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)dvt_viewDidEndLiveAnimation;
- (void)dvt_viewWillBeginLiveAnimation;
- (void)dvt_synchronizeSubviewMembership:(id)arg1 shouldBeInstalled:(BOOL)arg2 propagatingBackgroundStyleOnInstall:(BOOL)arg3;
- (void)dvt_synchronizeSubviewMembership:(id)arg1 shouldBeInstalled:(BOOL)arg2 insertionAffinity:(long long)arg3 propagatingBackgroundStyleOnInstall:(BOOL)arg4;
- (void)dvt_setFrameWidth:(double)arg1;
- (void)dvt_setFrameHeight:(double)arg1;
- (void)dvt_setFrameMaxY:(double)arg1;
- (void)dvt_setFrameMaxX:(double)arg1;
- (void)dvt_setFrameY:(double)arg1;
- (void)dvt_setFrameX:(double)arg1;
- (void)dvt_setAlignmentFrameWidth:(double)arg1;
- (void)dvt_setAlignmentFrameHeight:(double)arg1;
- (void)dvt_centerAlignmentFrameHorizontallyInSuperview;
- (void)dvt_centerAlignmentFrameVerticallyInSuperview;
- (void)dvt_setAlignmentFrameMaxY:(double)arg1;
- (void)dvt_setAlignmentFrameMaxX:(double)arg1;
- (void)dvt_setAlignmentFrameY:(double)arg1;
- (void)dvt_setAlignmentFrameX:(double)arg1;
- (void)dvt_setAlignmentFrameSize:(struct CGSize)arg1;
- (void)dvt_setAlignmentFrameOrigin:(struct CGPoint)arg1;
- (void)dvt_setAlignmentFrame:(struct CGRect)arg1;
- (double)dvt_frameHeightForAlignmentFrameHeight:(double)arg1;
- (double)dvt_frameWidthForAlignmentFrameWidth:(double)arg1;
- (double)dvt_alignmentFrameHeightForFrameHeight:(double)arg1;
- (double)dvt_alignmentFrameWidthForFrameWidth:(double)arg1;
- (struct CGRect)dvt_alignmentFrame;
- (struct CGRect)dvt_alignmentBounds;
- (void)dvt_drawBubbledPlaceholderMessage:(id)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (struct CGRect)dvt_convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)dvt_convertRectToScreen:(struct CGRect)arg1;
- (struct CGPoint)dvt_convertPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)dvt_convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)dvt_integralPointInBase:(struct CGPoint)arg1;
- (struct CGRect)dvt_integralRectInBase:(struct CGRect)arg1;
- (void)dvt_performAdditionalInvalidation;
@property(nonatomic) BOOL dvt_isVisible;
@property(readonly, nonatomic) DVTViewController *dvt_closestViewController;
- (void)setDvt_viewController:(id)arg1;
@property(readonly, nonatomic) DVTViewController *dvt_viewController;

// Remaining properties
@property(nonatomic, getter=isHidden) BOOL hidden;
@end

