//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSLayoutConstraint;

@interface IDEProvisioningProfileDownloaderTableCellView : NSTableCellView
{
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSImageView *_provisioningProfileImageView;
}

@property(retain) NSImageView *provisioningProfileImageView; // @synthesize provisioningProfileImageView=_provisioningProfileImageView;
@property(retain) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
- (void).cxx_destruct;
- (id)downloadProfileImage;

@end

