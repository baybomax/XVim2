//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyBindingSet.h>

@interface IDETextKeyBindingSet : IDEKeyBindingSet
{
}

+ (id)_rawDefaultSystemTextBindings;
+ (id)defaultKeyBindingSet;
+ (Class)_defaultTextKeyBindingSetClass;
+ (void)initialize;
- (void)activate;
- (id)deltaDictionary;
- (void)updateDictionary;
- (void)_appendDictionaryRepresentationOfTextKeyBinding:(id)arg1 appendsEmptyKeyboardShortcuts:(BOOL)arg2 toDictionary:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

