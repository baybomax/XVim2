//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IDELaunchInTerminalOptionViewController : IDELaunchActionOptionViewController
{
    NSButton *_useTerminalRadioButton;
    NSButton *_useXcodeBuiltInRadioButton;
}

+ (BOOL)availableForScheme:(id)arg1;
@property __weak NSButton *useXcodeBuiltInRadioButton; // @synthesize useXcodeBuiltInRadioButton=_useXcodeBuiltInRadioButton;
@property __weak NSButton *useTerminalRadioButton; // @synthesize useTerminalRadioButton=_useTerminalRadioButton;
- (void).cxx_destruct;
- (void)setConsoleMode:(long long)arg1;
- (void)changeConsoleSelection:(id)arg1;
- (void)updateRadioButtonState;
- (void)loadView;

@end

