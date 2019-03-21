//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSColor, NSImage, NSString;

@interface IDEInspectorTextEnumerationOption : NSObject <NSCopying>
{
    BOOL _hidden;
    BOOL _enabled;
    NSString *_title;
    NSString *_selectedTitle;
    NSImage *_image;
    NSColor *_titleColor;
    long long _indent;
    id _value;
}

@property(readonly) id value; // @synthesize value=_value;
@property(readonly, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) long long indent; // @synthesize indent=_indent;
@property(readonly) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXMLElement:(id)arg1 targetingInspectorProperty:(id)arg2;
- (id)initWithValue:(id)arg1 title:(id)arg2 selectedTitle:(id)arg3 titleColor:(id)arg4 indent:(long long)arg5 image:(id)arg6 hidden:(BOOL)arg7 enabled:(BOOL)arg8;

@end

