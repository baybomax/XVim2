//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTSourceTextView.h>

@class DVTTextSidebarView;

@interface DVTScriptSourceTextView : DVTSourceTextView
{
    DVTTextSidebarView *_sidebarView;
    BOOL _showingPlaceholder;
}

+ (id)placeholder;
@property(readonly, getter=isShowingPlaceholder) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
- (void).cxx_destruct;
@property(readonly) unsigned long long lineCount;
- (BOOL)becomeFirstResponder;
- (void)showPlaceholder;
- (void)installSidebarViewIfNeeded;
@property(readonly) DVTTextSidebarView *sidebarView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_commonInitDVTScriptSourceTextView;

@end

