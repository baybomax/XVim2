//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/XCLogItemAdapter.h>

@interface XCLogSummaryItemAdapter : XCLogItemAdapter
{
}

- (id)secondRowStringForDataNode:(id)arg1;
- (id)titleFontForDataNode:(id)arg1;
- (id)titleForDataNode:(id)arg1;
- (id)imageForDataNode:(id)arg1;
- (id)imageNamed:(id)arg1;
- (unsigned long long)analyzerWarningsForDataNode:(id)arg1;
- (unsigned long long)analyzerResultsForDataNode:(id)arg1;
- (unsigned long long)warningsForDataNode:(id)arg1;
- (unsigned long long)testFailuresForDataNode:(id)arg1;
- (unsigned long long)errorsForDataNode:(id)arg1;
- (BOOL)isSummaryAdapter;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (double)heightOfRowForDataNode:(id)arg1;

@end

