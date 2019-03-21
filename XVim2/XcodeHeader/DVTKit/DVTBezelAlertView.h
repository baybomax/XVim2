//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSDictionary, NSImage, NSString;

@interface DVTBezelAlertView : NSView
{
    NSImage *_icon;
    NSString *_message;
    NSDictionary *_messageAttributes;
    NSColor *_backgroundColor;
    struct CGRect _iconRect;
    struct CGRect _messageRect;
}

@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)tile;
- (BOOL)allowsVibrancy;
- (id)initWithIcon:(id)arg1 message:(id)arg2;

@end

