//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDelayedInvocationScheduler.h>

@interface DVTDelayedInvocationDelayScheduler : DVTDelayedInvocationScheduler
{
    double _delay;
}

+ (id)schedulerWithDelay:(double)arg1;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)initWithDelay:(double)arg1;

@end

