//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@interface IDEMultiStepIndexGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
}

- (void)_updateGeniusResultsWithMostRecentFetch:(CDUnknownBlockType)arg1;
- (BOOL)_fetchResultsFromIndex:(id)arg1 oldResults:(id)arg2 cancellationChecker:(CDUnknownBlockType)arg3;
- (BOOL)_shouldResultsFinderQueryIndex:(CDUnknownBlockType)arg1;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;

@end

