//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface _DVTDelayedInvocationNotificationHandlerNotificationKey : NSObject <NSCopying>
{
    NSString *_notificationName;
    id _object;
}

@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToNotificationKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithNotificationName:(id)arg1 object:(id)arg2;

@end

