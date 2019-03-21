//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace, NSArray;

@interface IDEFindNavigatorQueryHistoryManager : NSObject
{
    IDEWorkspace *_workspace;
    NSArray *_history;
}

@property(readonly) NSArray *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)addQueryHistoryItem:(id)arg1;
- (void)clearHistory;
- (void)scheduleSavingHistory;
- (void)saveQueryHistory;
- (void)beginPersistingHistoryForWorkspace:(id)arg1;
- (id)init;

@end

