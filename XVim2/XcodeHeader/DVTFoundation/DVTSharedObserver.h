//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DVTSharedObserver : NSObject
{
    NSString *_keyPath;
    id _observedObject;
    NSMutableArray *_activeObservingTokens;
    unsigned int _numTombstones;
    unsigned int _numRegisteredObservers;
    BOOL _needsRebalancing;
    struct os_unfair_lock_s _tokensLock;
}

- (void).cxx_destruct;
- (void)_locked_rebalanceObservingTokens;
@property(readonly) BOOL _hasRegisteredObservers;
- (void)_removeObserverWithTrackingIndex:(unsigned int)arg1;
- (id)_setObserverWithCreationBacktrace:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)_initWithObservedObject:(id)arg1 keyPath:(id)arg2;

@end

