//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface DVTPatternString : NSString
{
    NSString *_pattern;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)init;
- (id)initWithPatternCharacter:(unsigned short)arg1 count:(unsigned long long)arg2;
- (id)initWithPatternString:(id)arg1 count:(unsigned long long)arg2;

@end

