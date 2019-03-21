//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEInspectorLayoutGroup, NSMutableArray, NSString;

@interface IDEInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    NSMutableArray *_borderViews;
    BOOL _drawBackground;
    IDEInspectorLayoutGroup *_layoutStack;
}

+ (void)initialize;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
@property(readonly, nonatomic) IDEInspectorLayoutGroup *layoutStack; // @synthesize layoutStack=_layoutStack;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateBorderViews;
- (struct CGRect)bottomBorderRectForSubgroup:(id)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)enumeratePropertiesInLayoutGroup:(id)arg1 outStop:(char *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)visualElementDidTriggerRefresh:(id)arg1;
- (void)didUninstallLayoutGroup:(id)arg1;
- (void)didInstallLayoutGroup:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 layoutStack:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

