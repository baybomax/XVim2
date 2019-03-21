//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSButton, NSImage, NSImageView, NSString, NSURL;

@interface IDEDistributionResultSuccessViewController : IDEViewController
{
    NSString *_message;
    NSURL *_link;
    NSString *_linkToolTip;
    NSImage *_image;
    NSImageView *_successImageView;
    NSButton *_jumpButton;
}

@property(retain) NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain) NSImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *linkToolTip; // @synthesize linkToolTip=_linkToolTip;
@property(copy) NSURL *link; // @synthesize link=_link;
@property(copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)jumpButtonClicked:(id)arg1;
- (void)loadView;
- (id)nibName;

@end

