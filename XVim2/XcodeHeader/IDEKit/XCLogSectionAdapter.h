//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/XCLogItemAdapter.h>

@interface XCLogSectionAdapter : XCLogItemAdapter
{
}

- (struct CGRect)dataNode:(id)arg1 frameOfOutlineCellAtRow:(long long)arg2 defaultFrame:(struct CGRect)arg3;
- (BOOL)dataNode:(id)arg1 handleMouseDown:(id)arg2 forOutlineView:(id)arg3 inRow:(long long)arg4 atRelativeLocation:(struct CGPoint)arg5;
- (id)createTextViewForDataNode:(id)arg1;
- (void)_drawOptionalTextInFrame:(struct CGRect)arg1 inView:(id)arg2 forDataNode:(id)arg3;
- (double)heightOfRowForDataNode:(id)arg1;
- (double)_baseHeightOfRowForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (id)subitemsForDataNode:(id)arg1;
- (unsigned long long)analyzerResultsForDataNode:(id)arg1;
- (unsigned long long)analyzerWarningsForDataNode:(id)arg1;
- (unsigned long long)warningsForDataNode:(id)arg1;
- (unsigned long long)testFailuresForDataNode:(id)arg1;
- (unsigned long long)errorsForDataNode:(id)arg1;
- (id)badgeImageForDataNode:(id)arg1;
- (id)imageForDataNode:(id)arg1;
- (id)titleForDataNode:(id)arg1;

@end

