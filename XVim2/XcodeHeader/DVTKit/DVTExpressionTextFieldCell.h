//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTWarningTextFieldCell.h>

@class NSExpression, NSString;

@interface DVTExpressionTextFieldCell : DVTWarningTextFieldCell
{
    NSString *_initialStringValue;
}

@property(copy) NSString *initialStringValue; // @synthesize initialStringValue=_initialStringValue;
- (void).cxx_destruct;
@property(copy) NSExpression *expression;
- (BOOL)shouldShowWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

