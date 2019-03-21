//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString, NSURL;
@protocol DVTPathCellItem;

@interface DVTExplorableJumpBarControllerHandle : NSObject
{
    // Error parsing type: , name: controller
    // Error parsing type: , name: identifier
    // Error parsing type: , name: name
    // Error parsing type: , name: image
    // Error parsing type: , name: toolTip
    // Error parsing type: , name: isEnabled
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *accessibilityIdentifier;
@property(nonatomic, readonly) NSURL *representedURLForExternalDrag;
@property(nonatomic, readonly) NSURL *representedURL;
@property(nonatomic, readonly) NSString *groupIdentifier;
- (BOOL)isVisible;
- (BOOL)isValid;
- (BOOL)representsDocumentRoot;
@property(nonatomic, readonly) id representedObject;
@property(nonatomic, readonly) id <DVTPathCellItem> parentItem;
@property(nonatomic) BOOL enabled; // @synthesize enabled=isEnabled;
- (BOOL)isEnabled;
@property(nonatomic, copy) NSString *toolTip; // @synthesize toolTip;
@property(nonatomic, retain) NSImage *image; // @synthesize image;
@property(nonatomic, copy) NSString *name; // @synthesize name;
- (BOOL)isLeaf;
@property(nonatomic, readonly) NSArray *childItems;
@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(nonatomic, readonly) BOOL leaf;
@property(nonatomic, readonly) BOOL valid;
@property(nonatomic, readonly) BOOL visible;

@end

