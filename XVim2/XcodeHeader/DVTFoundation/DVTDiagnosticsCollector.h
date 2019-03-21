//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, NSDate, NSFileManager, NSString;

@interface DVTDiagnosticsCollector : NSObject <DVTInvalidation>
{
    DVTFilePath *_path;
    NSString *_extensionIdentifier;
    NSString *_extensionName;
    CDUnknownBlockType _handler;
    NSFileManager *_fm;
    NSDate *_startCollectingDate;
    NSDate *_lastCollectingCheckpointDate;
}

+ (void)initialize;
@property(retain, nonatomic) NSDate *lastCollectingCheckpointDate; // @synthesize lastCollectingCheckpointDate=_lastCollectingCheckpointDate;
@property(retain, nonatomic) NSDate *startCollectingDate; // @synthesize startCollectingDate=_startCollectingDate;
@property(retain, nonatomic) NSFileManager *fm; // @synthesize fm=_fm;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(retain, nonatomic) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)_saveEnvironmentVariables;
- (void)markCheckpointNamed:(id)arg1;
- (BOOL)writeDictionary:(id)arg1 fileName:(id)arg2 subPath:(id)arg3 format:(unsigned long long)arg4;
- (BOOL)runToolAtFilePath:(id)arg1 arguments:(id)arg2 forceSaveToSharedDirectory:(BOOL)arg3 outputFileName:(id)arg4 extension:(id)arg5;
- (id)runToolAndCaptureOutputAtFilePath:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)runToolAndCaptureOutputAtFilePath:(id)arg1 arguments:(id)arg2;
- (BOOL)runToolOfType:(unsigned long long)arg1;
- (void)copyResourcesFromPaths:(id)arg1;
- (void)endCollectingWithErrors:(id)arg1;
- (void)startCollecting;
- (void)primitiveInvalidate;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 path:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

