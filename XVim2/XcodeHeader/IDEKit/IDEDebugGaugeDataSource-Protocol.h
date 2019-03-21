//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSImage, NSNumber, NSString;
@protocol IDEDataSourceReloadable;

@protocol IDEDebugGaugeDataSource <NSObject>
@property(nonatomic) BOOL suppressSuddenIncreases;
@property(copy, nonatomic) NSImage *icon;
@property(nonatomic) double warningPoint;
@property(nonatomic) unsigned long long lastCountOfDisplayableBars;
@property(nonatomic) double barWidth;
@property(nonatomic) double failingPoint;
@property(nonatomic) BOOL largerValueIsBetter;
@property(nonatomic) int valueButtonFormat;
@property(nonatomic) unsigned long long specificValue;
@property(nonatomic) double realMaxValue;
@property(nonatomic) double maxValueFromValues;
@property(nonatomic) double maximumValue;
@property(getter=isDisabled) BOOL disabled;
@property(copy) NSString *toolTip;
@property __weak id <IDEDataSourceReloadable> visualDelegate;
@property(copy) NSString *label;
- (NSNumber *)barValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfBarValues;
- (void)enqueueBarValue:(NSNumber *)arg1;
- (id)initWithLabel:(NSString *)arg1;
@end

