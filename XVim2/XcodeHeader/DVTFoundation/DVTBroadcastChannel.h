//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@protocol DVTBroadcastName;

@interface DVTBroadcastChannel : NSObject <NSCopying>
{
    id <DVTBroadcastName> _name;
    id _source;
}

@property(readonly) id source; // @synthesize source=_source;
@property(readonly) id <DVTBroadcastName> name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBroadcastChannel:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(id)arg1 name:(id)arg2;

@end

