//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSControl;

@interface IDEFindNavigatorTwoControlLeftPriorityLayout : DVTLayoutView_ML
{
    struct CGPoint _leftOffset;
    struct CGPoint _rightOffset;
    NSControl *_leftControl;
    NSControl *_rightControl;
    double _horizontalSpacing;
}

@property double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(retain) NSControl *rightControl; // @synthesize rightControl=_rightControl;
@property(retain) NSControl *leftControl; // @synthesize leftControl=_leftControl;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)awakeFromNib;

@end

