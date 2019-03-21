//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSCopying-Protocol.h>
#import <DVTKit/NSSecureCoding-Protocol.h>

@class NSImage, NSString;

@interface DVTFilterTokenType : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_displayString;
    NSImage *_displayImage;
    NSString *_menuDisplayString;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *menuDisplayString; // @synthesize menuDisplayString=_menuDisplayString;
@property(readonly, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(readonly, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 displayImage:(id)arg3 menuDisplayString:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 displayImage:(id)arg3;

@end

