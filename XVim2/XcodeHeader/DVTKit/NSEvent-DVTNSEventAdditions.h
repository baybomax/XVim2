//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSEvent.h>

@interface NSEvent (DVTNSEventAdditions)
+ (id)dvt_addLocalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)dvt_addGlobalMonitorForEventsMatchingMask:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)dvt_isDoubleClick;
- (struct CGPoint)dvt_locationInWindowRelativeToView:(id)arg1;
- (BOOL)dvt_isRightMouseButtonUp;
- (BOOL)dvt_isRightMouseButtonDown;
- (BOOL)dvt_isLeftMouseButtonUp;
- (BOOL)dvt_isLeftMouseButtonDown;
- (struct CGPoint)dvt_flooredLocationInWindow;
- (struct CGPoint)dvt_flooredLocationInView:(id)arg1;
- (BOOL)dvt_isDragEventAnIntentialLeftDragWithRespectToMouseDown:(id)arg1;
- (BOOL)dvt_isOptionalRevealGesture;
- (BOOL)dvt_isOptionalShowGesture;
- (BOOL)dvt_isRevealGesture;
- (BOOL)dvt_isShowGesture;
- (BOOL)dvt_isControlKeyDown;
- (BOOL)dvt_isCommandKeyDown;
- (BOOL)dvt_isShiftKeyDown;
- (BOOL)dvt_isOptionKeyDown;
- (BOOL)dvt_isDeleteOrBackspaceKeyEvent;
- (BOOL)dvt_isEscapeKeyDown;
- (struct CGPoint)dvt_locationOnScreen;
- (struct CGPoint)dvt_locationInWindow:(id)arg1;
- (struct CGPoint)dvt_locationInView:(id)arg1;
@end

