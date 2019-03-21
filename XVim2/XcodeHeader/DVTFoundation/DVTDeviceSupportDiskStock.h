//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTDiskStock-Protocol.h>

@class DVTPlatform, NSString;

@interface DVTDeviceSupportDiskStock : NSObject <DVTDiskStock>
{
    DVTPlatform *_platform;
}

+ (id)diskStockForPlatform:(id)arg1;
+ (id)_diskStockIdentifierForPlatform:(id)arg1;
- (void).cxx_destruct;
- (void)diskStockManager:(id)arg1 didCullDiskStockMembers:(id)arg2;
- (BOOL)diskStockManager:(id)arg1 willCullDiskStockMembers:(id)arg2;
@property(readonly) NSString *diskStockDisplayName;
@property(readonly) NSString *diskStockIdentifier;
@property(readonly) float diskStockLowWaterTarget;
@property(readonly) unsigned long long diskStockCapacity;
- (id)diskStockMembers;
- (id)initWithPlatform:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

