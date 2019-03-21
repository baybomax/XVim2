//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTTextCompletionItem-Protocol.h>

@class DVTSourceCodeSymbolKind, NSArray, NSAttributedString, NSImage, NSString;

@interface DVTStringTextCompletionItem : NSObject <DVTTextCompletionItem>
{
    double _priority;
    double _fuzzyMatchingScore;
    NSString *_name;
    NSString *_localizedName;
    DVTSourceCodeSymbolKind *_symbolKind;
    long long _priorityBucket;
    unsigned long long _priorityComparatorKind;
}

@property unsigned long long priorityComparatorKind; // @synthesize priorityComparatorKind=_priorityComparatorKind;
@property long long priorityBucket; // @synthesize priorityBucket=_priorityBucket;
@property(copy) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy) NSString *name; // @synthesize name=_name;
@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore=_fuzzyMatchingScore;
@property double priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
@property(readonly) BOOL notRecommended;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly) NSImage *icon;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *parentText;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *displayText;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

