//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDelayedInvocationScheduler.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTDelayedInvocationNotificationScheduler : DVTDelayedInvocationScheduler <NSCopying>
{
    NSString *_notificationName;
    id _object;
    long long _priority;
}

+ (id)schedulerWithNotificationName:(id)arg1 object:(id)arg2 priority:(long long)arg3;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToScheduler:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNotificationName:(id)arg1 object:(id)arg2 priority:(long long)arg3;

@end

