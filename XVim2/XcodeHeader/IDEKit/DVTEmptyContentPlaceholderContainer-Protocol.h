//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSFont, NSString;

@protocol DVTEmptyContentPlaceholderContainer
@property(nonatomic) BOOL hasContent;
@property(copy, nonatomic) NSFont *emptyContentFont;
@property(nonatomic) int emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString;

@optional
@property(nonatomic) BOOL followsFontAndColorTheme;
- (void)willHideEmptyContentString;
- (void)willShowEmptyContentString;
@end

