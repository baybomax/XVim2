//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundDataHandler-Protocol.h>

@class NSString;
@protocol IDEPlaygroundDataHandlerDelegate;

@interface IDEValueHistoryToyDataHandler : NSObject <IDEPlaygroundDataHandler>
{
    id <IDEPlaygroundDataHandlerDelegate> _delegate;
}

@property __weak id <IDEPlaygroundDataHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)handlePlaygroundData:(id)arg1 dataIdentifier:(id)arg2 resultDate:(id)arg3 dataVersion:(unsigned long long)arg4 executionParameters:(id)arg5 error:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

