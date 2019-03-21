//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IDEGraphDelegate, IDEGraphModelChartsModificationDelegate;

@interface IDEGraphModel : NSObject
{
    id <IDEGraphDelegate> _delegate;
    id <IDEGraphModelChartsModificationDelegate> _chartsModificationDelegate;
    NSArray *_charts;
}

@property(retain) NSArray *charts; // @synthesize charts=_charts;
@property __weak id <IDEGraphModelChartsModificationDelegate> chartsModificationDelegate; // @synthesize chartsModificationDelegate=_chartsModificationDelegate;
@property __weak id <IDEGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_chartNamed:(id)arg1;
- (id)chartNamed:(id)arg1;
- (id)init;

@end

