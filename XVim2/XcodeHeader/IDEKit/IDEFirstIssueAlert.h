//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@class NSString;

@interface IDEFirstIssueAlert : IDEAlert
{
    NSString *_destination;
}

@property(retain) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_finishSelectIssue:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)findLogInItem:(id)arg1;
- (id)findLogInWorkspace:(id)arg1;
- (id)findIssue:(id)arg1 inItem:(id)arg2;
- (id)destinations;
- (id)init;

@end

