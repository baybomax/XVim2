//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@interface IDEShowEditorAlert : IDEAlert
{
    int _action;
    int _visibility;
}

@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) int action; // @synthesize action=_action;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)visibilities;
- (id)actions;

@end

