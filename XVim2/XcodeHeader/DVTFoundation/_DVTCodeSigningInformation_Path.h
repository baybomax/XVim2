//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTCodeSigningInformation.h>

@class DVTFilePath, NSNumber;

@interface _DVTCodeSigningInformation_Path : DVTCodeSigningInformation
{
    NSNumber *_appleSigned;
    DVTFilePath *_path;
}

@property(readonly) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)isAppleSigned;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;

@end

