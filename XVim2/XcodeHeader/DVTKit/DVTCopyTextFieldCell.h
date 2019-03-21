//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSButtonCell;

@interface DVTCopyTextFieldCell : NSTextFieldCell
{
    NSButtonCell *_copyButtonCell;
}

- (void).cxx_destruct;
- (BOOL)eventIsInSubCellArea:(id)arg1 ofView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)_configureSubCells;
- (void)_refreshEnabledStates;
- (struct CGRect)_copyButtonFrameForCellFrame:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textBoundingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_maximumTextBoundsForBounds:(struct CGRect)arg1;
- (double)_claimedWidthForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)copyAction:(id)arg1;
- (void)_commonInit;

@end

