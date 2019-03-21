//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDETestReportPopoverGraphDetailDividerView, NSAttributedString, NSPopover, NSTrackingArea;
@protocol IDETestReport_PerfMetric;

@interface IDETestReportPerfMetricIterationsGraphView : NSView
{
    NSPopover *_iterationPopover;
    NSTrackingArea *_mouseEnteredTrackingArea;
    double _averageYOrigin;
    NSAttributedString *_detailViewValueAttributedString;
    struct CGRect _detailView_valueLabelFrame;
    IDETestReportPopoverGraphDetailDividerView *_dividerView;
    struct CGRect _graphViewBounds;
    NSView *_scrollingContentView;
    id <IDETestReport_PerfMetric> _testPerfMetric;
}

+ (void)barHeightsForIterations:(id)arg1 compareToAverage:(double)arg2 maxBarHeight:(double)arg3 graphViewBounds:(struct CGRect)arg4 graphView:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (double)minBarHeight;
+ (double)percentChangedBetweenIterationValueAndAverage:(double)arg1 average:(double)arg2;
@property(retain, nonatomic) id <IDETestReport_PerfMetric> testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)showPopoverForBarView:(id)arg1;
- (void)layoutViews;
- (void)updateDetailViewWithIterationNumber:(unsigned long long)arg1;
- (id)precisionFormatter;
- (id)detailViewBackgroundColor;
- (void)pointDividerViewTo:(id)arg1;
- (void)addDividerView;
- (void)addBars;
- (void)addHorizontalScrollView;
- (double)scrollingContentWidth;
- (void)addIterationNumbersView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@end

