//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/_DVTFilterTokenStateValue.h>

@class NSArray;

@interface _DVTFilterExpressionStateValue : _DVTFilterTokenStateValue
{
    NSArray *_enabledButtonFilterIdentifiers;
}

@property(readonly) NSArray *enabledButtonFilterIdentifiers; // @synthesize enabledButtonFilterIdentifiers=_enabledButtonFilterIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTokenFieldObjectValue:(id)arg1 operatorType:(int)arg2 recentFilterItems:(id)arg3 enabledButtonFilterIdentifiers:(id)arg4;

@end

