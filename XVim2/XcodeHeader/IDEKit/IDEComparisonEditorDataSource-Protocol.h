//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDocumentLocation, IDENavigableItem, IDENavigableItemCoordinator, NSString;
@protocol DVTInvalidation;

@protocol IDEComparisonEditorDataSource <NSObject>
- (id <DVTInvalidation>)documentForSecondaryDocumentLocation:(DVTDocumentLocation *)arg1 completionBlock:(void (^)(IDEEditorDocument *, long long, NSError *))arg2;
- (id <DVTInvalidation>)documentForPrimaryDocumentLocation:(DVTDocumentLocation *)arg1 completionBlock:(void (^)(IDEEditorDocument *, long long, NSError *))arg2;

@optional
- (BOOL)secondaryEditorShowsDocumentPreview;
- (BOOL)primaryEditorShowsDocumentPreview;
- (NSString *)contentStringForSecondaryEmptyEditorWithDocumentLocation:(DVTDocumentLocation *)arg1;
- (NSString *)contentStringForPrimaryEmptyEditorWithDocumentLocation:(DVTDocumentLocation *)arg1;
- (BOOL)shouldShowEmptyEditorForSecondaryDocumentLocation:(DVTDocumentLocation *)arg1 submodeType:(int)arg2;
- (BOOL)shouldShowEmptyEditorForPrimaryDocumentLocation:(DVTDocumentLocation *)arg1 submodeType:(int)arg2;
- (id <DVTInvalidation>)documentForAncestorDocumentLocation:(DVTDocumentLocation *)arg1 completionBlock:(void (^)(IDEEditorDocument *, long long, NSError *))arg2;
- (id <DVTInvalidation>)navigableItemsForSecondaryDocumentLocation:(DVTDocumentLocation *)arg1 usingNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg2 completionBlock:(void (^)(IDENavigableItem *, IDENavigableItem *, NSError *))arg3;
- (id <DVTInvalidation>)navigableItemsForPrimaryDocumentLocation:(DVTDocumentLocation *)arg1 usingNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg2 completionBlock:(void (^)(IDENavigableItem *, IDENavigableItem *, NSError *))arg3;
- (id <DVTInvalidation>)navigableItemsForPrimaryDocumentLocation:(DVTDocumentLocation *)arg1 secondaryDocumentLocation:(DVTDocumentLocation *)arg2 usingNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg3 forceReload:(BOOL)arg4 completionBlock:(void (^)(IDENavigableItem *, IDENavigableItem *, IDENavigableItem *, NSError *))arg5;
- (BOOL)shouldSelectFirstDiff;
- (DVTDocumentLocation *)secondaryDocumentLocationForNavigableItem:(IDENavigableItem *)arg1;
- (DVTDocumentLocation *)primaryDocumentLocationForNavigableItem:(IDENavigableItem *)arg1;
@end

