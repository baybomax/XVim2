//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorNumberStepperView.h>

@class DVTBindingToken, DVTDiffSession, DVTObservingToken, IDEComparisonEditorTimelineNavBar;

@interface IDEComparisonEditorChangesStepperView : IDEEditorNumberStepperView
{
    DVTBindingToken *_leftArrowEnabledToken;
    DVTBindingToken *_rightArrowEnabledToken;
    DVTObservingToken *_visibleModifiedDescriptorIndexesToken;
    DVTObservingToken *_selectedDiffDescriptorIndexToken;
    DVTDiffSession *_diffSession;
    IDEComparisonEditorTimelineNavBar *_timelineNavBar;
    unsigned long long _indexOfSelectedDiff;
}

+ (id)keyPathsForValuesAffectingCanSelectPrevious;
+ (id)keyPathsForValuesAffectingCanSelectNext;
+ (id)keyPathsForValuesAffectingIndexOfSelectedDiff;
@property unsigned long long indexOfSelectedDiff; // @synthesize indexOfSelectedDiff=_indexOfSelectedDiff;
@property(retain) IDEComparisonEditorTimelineNavBar *timelineNavBar; // @synthesize timelineNavBar=_timelineNavBar;
@property(retain) DVTDiffSession *diffSession; // @synthesize diffSession=_diffSession;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (double)centerViewOverlap;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
- (void)invalidateLayout;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (BOOL)canSelectPrevious;
- (BOOL)canSelectNext;
- (id)initWithFrame:(struct CGRect)arg1;

@end

