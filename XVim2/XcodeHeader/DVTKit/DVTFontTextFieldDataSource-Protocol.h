//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTFontTextField, NSArray, NSFont, NSString;

@protocol DVTFontTextFieldDataSource <NSObject>
- (BOOL)fontTextField:(DVTFontTextField *)arg1 value:(id)arg2 isEqualToValue:(id)arg3;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 displaySizeForValue:(id)arg2;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 displayNameForValue:(id)arg2;
- (double)fontTextField:(DVTFontTextField *)arg1 pointSizeForValue:(id)arg2;
- (id)fontTextField:(DVTFontTextField *)arg1 fontNameForValue:(id)arg2;
- (id)fontTextField:(DVTFontTextField *)arg1 familyForValue:(id)arg2;
- (id)fontTextField:(DVTFontTextField *)arg1 transformValue:(id)arg2 toHavePointSize:(double)arg3;
- (id)fontTextField:(DVTFontTextField *)arg1 transformValue:(id)arg2 toHaveSize:(id)arg3;
- (id)fontTextField:(DVTFontTextField *)arg1 transformValue:(id)arg2 toHaveFontName:(id)arg3;
- (id)fontTextField:(DVTFontTextField *)arg1 transformValue:(id)arg2 toHaveFamily:(id)arg3;
- (id)fontTextField:(DVTFontTextField *)arg1 transformValue:(id)arg2 toFontValue:(id)arg3;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 descriptionForFontName:(id)arg2;
- (NSArray *)fontTextField:(DVTFontTextField *)arg1 fontNamesForFontFamily:(id)arg2;
- (NSArray *)fontFamiliesForFontTextField:(DVTFontTextField *)arg1;
- (NSArray *)fontValuesForFontTextField:(DVTFontTextField *)arg1;

@optional
- (BOOL)fontTextFieldCanShowFontPanel:(DVTFontTextField *)arg1;
- (NSFont *)fontTextField:(DVTFontTextField *)arg1 displayFontForFamily:(NSString *)arg2 andValue:(id)arg3;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 sizePlaceholderForValue:(id)arg2;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 descriptionForFamily:(id)arg2;
- (unsigned long long)fontTextField:(DVTFontTextField *)arg1 settableAttributesForValue:(id)arg2;
- (BOOL)fontTextField:(DVTFontTextField *)arg1 isValueSpecial:(id)arg2;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 descriptionForValue:(id)arg2 type:(int *)arg3;
- (NSString *)fontTextField:(DVTFontTextField *)arg1 descriptionForValue:(id)arg2;
- (NSArray *)fontTextField:(DVTFontTextField *)arg1 fontNamesForFont:(NSFont *)arg2;
- (id)validateFontValue:(id)arg1;
@end

