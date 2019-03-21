//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTLocale : NSObject <NSCopying, NSCoding>
{
    NSString *_displayName;
    NSString *_localeIdentifier;
    DVTLocale *_canonicalLocale;
    BOOL _legacy;
}

+ (void)initialize;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)_legacyLocaleForIdentifier:(id)arg1 canonicalLocale:(id)arg2;
+ (id)systemLanguages;
+ (void)addAvailableLocale:(id)arg1 forIdentifier:(id)arg2;
+ (id)availableLocaleForIdentifier:(id)arg1;
+ (void)prepopulateAvailableLocalesbyIdentifierIfNeeded;
+ (id)availableLocalesbyIdentifier;
+ (id)globalLocale;
+ (id)baseLocale;
+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
+ (id)_xcodeLocale;
+ (id)systemLocale;
@property(readonly, getter=isLegacy) BOOL legacy; // @synthesize legacy=_legacy;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) DVTLocale *canonicalLocale;
- (id)rootLanguage;
- (id)localeComponents;
@property(readonly, copy) NSString *localeIdentifier;
- (id)description;
- (id)initWithLocaleIdentifier:(id)arg1 canonicalLocaleIdentifier:(id)arg2 displayName:(id)arg3 isLegacy:(BOOL)arg4;
- (id)init;

@end

