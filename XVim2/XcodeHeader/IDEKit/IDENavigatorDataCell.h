//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTImageAndTextCell.h>

@interface IDENavigatorDataCell : DVTImageAndTextCell
{
    BOOL _usesGroupHeaderStyle;
}

+ (void)initialize;
@property(nonatomic) BOOL usesGroupHeaderStyle; // @synthesize usesGroupHeaderStyle=_usesGroupHeaderStyle;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)subtitleFont;
- (void)setFont:(id)arg1;
- (struct CGRect)dvt_frameOfOutlineCellForBounds:(struct CGRect)arg1 proposedFrame:(struct CGRect)arg2;
- (void)setBaseImageSize:(struct CGSize)arg1;
- (void)_setBaseImageSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

@end

