//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEScheme, IDESchemeAction;

@interface IDELaunchActionOptionViewController : IDEViewController
{
    IDEScheme *_scheme;
    IDESchemeAction *_schemeAction;
}

+ (BOOL)availableForScheme:(id)arg1;
@property(readonly) IDESchemeAction *schemeAction; // @synthesize schemeAction=_schemeAction;
@property(readonly) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithScheme:(id)arg1 schemeAction:(id)arg2;
- (id)initUsingDefaultNib;

@end

