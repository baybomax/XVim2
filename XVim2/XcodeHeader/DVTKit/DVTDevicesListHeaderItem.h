//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTDevicesListItem-Protocol.h>

@class DVTDevice, NSMutableArray, NSString;

@interface DVTDevicesListHeaderItem : NSObject <DVTDevicesListItem>
{
    NSString *_name;
    NSMutableArray *_children;
    DVTDevice *_device;
}

+ (id)headerItemWithName:(id)arg1;
@property(retain) DVTDevice *device; // @synthesize device=_device;
@property(readonly) NSMutableArray *children; // @synthesize children=_children;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, getter=isGroupItem) BOOL groupItem;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly, getter=isLeaf) BOOL leaf;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

