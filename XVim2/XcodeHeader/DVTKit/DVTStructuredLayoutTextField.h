//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <DVTKit/DVTStructuredLayoutView-Protocol.h>

@class DVTStructuredLayoutViewState, NSNumber;

@interface DVTStructuredLayoutTextField : NSTextField <DVTStructuredLayoutView>
{
    NSNumber *_knownValidFrameHeight;
    DVTStructuredLayoutViewState *_dvt_layoutState;
    NSNumber *_fixedAlignmentWidth;
    NSNumber *_maximumAlignmentWidth;
    NSNumber *_fixedFrameHeight;
}

+ (Class)cellClass;
+ (void)initialize;
@property(copy, nonatomic) NSNumber *fixedFrameHeight; // @synthesize fixedFrameHeight=_fixedFrameHeight;
@property(copy, nonatomic) NSNumber *maximumAlignmentWidth; // @synthesize maximumAlignmentWidth=_maximumAlignmentWidth;
@property(copy, nonatomic) NSNumber *fixedAlignmentWidth; // @synthesize fixedAlignmentWidth=_fixedAlignmentWidth;
@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState; // @synthesize dvt_layoutState=_dvt_layoutState;
- (void).cxx_destruct;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (id)shortCircuitedFrameSizeGivenMaximumFrameWidth:(double)arg1;
- (double)frameWidthForAlignmentWidth:(double)arg1;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)textDidChange:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setUsesSingleLineMode:(BOOL)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setPlaceholderAttributedString:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1;
- (void)setBezelStyle:(unsigned long long)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setMaximumNumberOfLines:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)DVTStructuredLayoutTextField_commonInit;
- (void)dvt_invalidateLayoutPreservingHeightCache;
- (void)dvt_invalidateLayoutClearingHeightCache;

@end

