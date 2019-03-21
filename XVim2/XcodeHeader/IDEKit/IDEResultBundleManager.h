//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface IDEResultBundleManager : NSObject
{
    NSMapTable *_bundleProcessorsByInvocationRecord;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)processorForResultBundleAtURL:(id)arg1;
- (id)processedRecordForInvocationRecord:(id)arg1;
- (void)clearRecord:(id)arg1;
- (void)processRecord:(id)arg1 fromResultBundleURL:(id)arg2;
- (id)init;

@end

