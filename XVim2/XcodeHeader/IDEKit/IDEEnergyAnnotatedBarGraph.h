//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTStackedBarGraph.h>

@class NSString;
@protocol IDEEnergyAnnotatedBarGraphDelegate;

@interface IDEEnergyAnnotatedBarGraph : DTStackedBarGraph
{
    id <IDEEnergyAnnotatedBarGraphDelegate> _modelDelegate;
    BOOL _hasOSXAppNapGuidance;
    BOOL _hasColorForGuidance;
    NSString *_guidancePaddingString;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)_paddingString;
- (id)labelAttributes;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)canDrawBeyondContentRect;
- (void)addHorizontalLinesToBezierPath:(id)arg1 inStacks:(id)arg2 withHeight:(double)arg3;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;
- (id)modelDelegate;

@end

