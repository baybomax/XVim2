//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;

@protocol IDETestContainer <NSObject>
@property(readonly, copy) NSArray *arrangedSubtests;
@property(readonly, copy) NSSet *subtests;
@property(readonly) BOOL canHaveSubtests;
@property(readonly, copy) NSString *name;
@end

