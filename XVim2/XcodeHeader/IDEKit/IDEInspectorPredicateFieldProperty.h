//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTPredicateTextField, IDEInspectorKeyPath, NSString;

@interface IDEInspectorPredicateFieldProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    DVTPredicateTextField *_predicateField;
}

@property(retain, nonatomic) DVTPredicateTextField *predicateField; // @synthesize predicateField=_predicateField;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)view;
- (double)baseline;

@end

