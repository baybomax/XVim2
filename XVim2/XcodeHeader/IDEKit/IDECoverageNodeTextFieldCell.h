//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray;

@interface IDECoverageNodeTextFieldCell : NSTextFieldCell
{
    NSArray *_highlightSubranges;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
@property(copy, nonatomic) NSArray *highlightSubranges; // @synthesize highlightSubranges=_highlightSubranges;
- (void).cxx_destruct;
- (id)attributedStringValue;

@end

