//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTFilterTokenBasedFieldController.h>

@class DVTCompoundFilterExpression, DVTFilterExpressionController, NSMutableDictionary, NSMutableSet;
@protocol DVTFilterExpressionPresentationDelegate;

@interface DVTFilterExpressionFieldController : DVTFilterTokenBasedFieldController
{
    NSMutableDictionary *_buttonsToFilterIdentifiers;
    NSMutableSet *_toggleButtonExpressions;
    DVTFilterExpressionController *_filteringController;
    BOOL _allowsANYOperator;
    int _defaultGlobalOperator;
    DVTCompoundFilterExpression *_currentFilterExpression;
    id <DVTFilterExpressionPresentationDelegate> _presentationDelegate;
}

+ (id)logAspect;
@property(nonatomic) int defaultGlobalOperator; // @synthesize defaultGlobalOperator=_defaultGlobalOperator;
@property(nonatomic) BOOL allowsANYOperator; // @synthesize allowsANYOperator=_allowsANYOperator;
@property(nonatomic) __weak id <DVTFilterExpressionPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain) DVTCompoundFilterExpression *currentFilterExpression; // @synthesize currentFilterExpression=_currentFilterExpression;
- (void).cxx_destruct;
- (id)tokenFieldCompletion:(id)arg1 rowStringFor:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)_updateValuesWith:(id)arg1 editingString:(id)arg2;
- (void)_notifySomethingChanged;
- (void)_tokenFieldMenuItemDidClick:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (void)tokenField:(id)arg1 globalOperatorDidChange:(int)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (id)_menuItemTitleForExpression:(id)arg1;
- (id)_menuItemTitleForCategoryExpression:(id)arg1;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_attachmentCellForToken:(id)arg1;
- (void)_handleCompletionFromStorage:(id)arg1 andLastChangeID:(unsigned long long)arg2;
- (Class)_tokenClass;
- (void)clearField;
- (id)toggleButtons;
- (void)configureAdditionalFilterMenuItems;
- (void)_addToggleExpression:(id)arg1;
- (void)removeFilterToken:(id)arg1;
- (void)configureToggleButtons;
- (void)toggleButtonPressed:(id)arg1;
- (id)stateValue;
- (void)setStateValue:(id)arg1;
- (void)clearControlBarConfiguration;
- (void)configureWithFilteredDataSource:(id)arg1 viewingContext:(id)arg2 presentationDelegate:(id)arg3;
- (void)dealloc;
- (id)initWithTokenField:(id)arg1 filteredDataSource:(id)arg2 presentationDelegate:(id)arg3 viewingContext:(id)arg4;
- (id)initWithTokenField:(id)arg1;

// Remaining properties
@property(retain) NSMutableDictionary *completionData; // @dynamic completionData;

@end

