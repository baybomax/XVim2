//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface DVTNonLossyASCIIFormatter : NSFormatter
{
    BOOL _escapeInvisibleASCII;
}

@property BOOL escapeInvisibleASCII; // @synthesize escapeInvisibleASCII=_escapeInvisibleASCII;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)nonLossyASCIIDataForString:(id)arg1;
- (id)init;
- (id)initWithEscapeInivisbleASCII:(BOOL)arg1;

@end

