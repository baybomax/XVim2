//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTFuture;
@protocol DVTTestDevice;

@protocol DVTTestDeviceCloneProvider
- (void)returnClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)vendCloneOfDevice:(id <DVTTestDevice>)arg1;
@end

