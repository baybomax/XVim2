//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSArray, NSButton, NSString;
@protocol IDEProvisioningStyleDataSource;

@interface IDEProvisioningStyleSettingsViewController : IDEViewController <NSMenuDelegate>
{
    id <IDEProvisioningStyleDataSource> _dataSource;
    NSArray *_dataSourceProvisioningStyleObservers;
    NSButton *_provisioningStyleCheckBoxButton;
}

@property __weak NSButton *provisioningStyleCheckBoxButton; // @synthesize provisioningStyleCheckBoxButton=_provisioningStyleCheckBoxButton;
@property(retain, nonatomic) NSArray *dataSourceProvisioningStyleObservers; // @synthesize dataSourceProvisioningStyleObservers=_dataSourceProvisioningStyleObservers;
@property(retain, nonatomic) id <IDEProvisioningStyleDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)startObservations;
- (void)clickedProvisioningStyleSelecthionCheckBoxButton:(id)arg1;
- (void)updateProvisioningStyleSelection;
- (long long)checkboxStateBasedOnProvisioningStyle;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

