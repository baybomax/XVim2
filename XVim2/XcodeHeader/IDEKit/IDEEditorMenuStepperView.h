//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorStepperView.h>

@class IDEActionButton;
@protocol IDEEditorMenuStepperViewDelegate;

@interface IDEEditorMenuStepperView : IDEEditorStepperView
{
    IDEActionButton *_actionButton;
    id <IDEEditorMenuStepperViewDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingCanMove;
@property(retain) id <IDEEditorMenuStepperViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (BOOL)canMove;
- (id)menuForActionButton;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
- (id)newCenterView;
- (id)_toolTipForRightArrow;
- (id)_toolTipForLeftArrow;
- (void)setImage:(id)arg1;

@end

