//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorLayoutGroup.h>

@class NSView;

@interface IDEInspectorLayoutViewWrapper : IDEInspectorLayoutGroup
{
    NSView *_view;
}

- (void).cxx_destruct;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)pushFrameOriginsToViews;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (id)attributeDescription;
- (id)initWithView:(id)arg1;

@end

