//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStatefulObject-Protocol.h>

@class NSURL;
@protocol _TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_;

@protocol _TtP6DVTKit30DVTExplorerNavigatorCommonCore_ <DVTStatefulObject>
- (void)updateWithImplementationSpecifics:(id)arg1;
- (void)updateWithURL:(NSURL *)arg1;
- (void)revertState;
- (void)commitState;
@property(nonatomic, retain) id <_TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_> delegate;
@end

