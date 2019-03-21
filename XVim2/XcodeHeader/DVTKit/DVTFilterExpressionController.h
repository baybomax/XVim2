//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSSet, NSString, _DVTFilterSession;
@protocol DVTFilterExpressionPresentationDelegate, DVTFilteredDataSource, DVTFilteredDataViewingContext;

@interface DVTFilterExpressionController : NSObject <DVTInvalidation>
{
    NSSet *_matches;
    id <DVTFilteredDataViewingContext> _viewingContext;
    id <DVTFilterExpressionPresentationDelegate> _presentationDelegate;
    id <DVTFilteredDataSource> _filteredDataSource;
    _DVTFilterSession *_currentFilterSession;
}

+ (id)keyPathsForValuesAffectingFilterProgress;
+ (id)filterExpressionControlllerWithDataSource:(id)arg1 presentationDelegate:(id)arg2 viewingContext:(id)arg3;
+ (void)initialize;
@property(retain) _DVTFilterSession *currentFilterSession; // @synthesize currentFilterSession=_currentFilterSession;
@property(retain) NSSet *matches; // @synthesize matches=_matches;
@property(readonly) id <DVTFilteredDataSource> filteredDataSource; // @synthesize filteredDataSource=_filteredDataSource;
@property(retain) id <DVTFilterExpressionPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain) id <DVTFilteredDataViewingContext> viewingContext; // @synthesize viewingContext=_viewingContext;
- (void).cxx_destruct;
- (void)setHighlightFragmentsForExpression:(id)arg1;
@property(readonly) long long filterProgress;
- (void)_clearFilter;
- (void)setMatches:(id)arg1 forFilterSession:(id)arg2;
- (void)filterExpressionDidUpdate:(id)arg1;
- (void)_endCurrentFilterSession;
- (void)primitiveInvalidate;
- (id)initWithFilteredDataSource:(id)arg1 presentationDelegate:(id)arg2 viewingContext:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

