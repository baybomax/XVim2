//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface DVTDiagnosticsProcessor : NSObject
{
    NSOperationQueue *_extensionsQueue;
    NSOperationQueue *_toolsQueue;
    NSMutableDictionary *_paths;
    NSLock *_pathsLock;
    NSMutableDictionary *_tools;
    NSLock *_toolsLock;
    NSDictionary *_options;
    unsigned long long _toolCounter;
    NSMutableArray *_toolsInFlight;
}

+ (id)_stringByTrimmingTrailingCharactersInSet:(id)arg1 fromString:(id)arg2;
+ (id)_stringByTrimmingTrailingWhitespaceAndNewlineCharactersFromString:(id)arg1;
+ (id)serializeErrors:(id)arg1;
+ (id)launchAtPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 captureOutput:(BOOL)arg4;
+ (id)sharedDirectoryPath;
+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *toolsInFlight; // @synthesize toolsInFlight=_toolsInFlight;
@property(nonatomic) unsigned long long toolCounter; // @synthesize toolCounter=_toolCounter;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSLock *toolsLock; // @synthesize toolsLock=_toolsLock;
@property(retain, nonatomic) NSMutableDictionary *tools; // @synthesize tools=_tools;
@property(retain, nonatomic) NSLock *pathsLock; // @synthesize pathsLock=_pathsLock;
@property(retain, nonatomic) NSMutableDictionary *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSOperationQueue *toolsQueue; // @synthesize toolsQueue=_toolsQueue;
@property(retain, nonatomic) NSOperationQueue *extensionsQueue; // @synthesize extensionsQueue=_extensionsQueue;
- (void).cxx_destruct;
- (void)sendDiagnosticsFinalizedNotification;
- (void)_taskCompleted:(id)arg1;
- (void)_launchTool:(id)arg1 collectors:(id)arg2;
- (void)_addTool:(id)arg1 usingCollectorDictionaryRepresentation:(id)arg2;
- (void)_invokeExtensions:(id)arg1;
- (void)_broadcastExtensionInventoryNotification:(id)arg1;
- (BOOL)_loadAndSummonDiagnosticClientsAtPath:(id)arg1 error:(id *)arg2;
- (void)_copyPhaseWithDiagnosticsPath:(id)arg1 errors:(id *)arg2;
- (void)_toolsPhaseWithDiagnosticsPath:(id)arg1;
- (BOOL)_diagnosticsPhaseWithDiagnosticsPath:(id)arg1 errors:(id *)arg2;
- (void)_captureSystemTraceToDirectory:(id)arg1;
- (id)_performanceDurationTimeString;
- (BOOL)_isXCDiagnoseDisabled;
- (BOOL)runToolAtFilePath:(id)arg1 arguments:(id)arg2 forceSaveToSharedDirectory:(BOOL)arg3 outputFileName:(id)arg4 extension:(id)arg5 collector:(id)arg6;
- (BOOL)runToolOfType:(unsigned long long)arg1 usingCollector:(id)arg2;
- (void)addResourcesToCopyPhase:(id)arg1 usingCollector:(id)arg2;
- (void)appendErrors:(id)arg1 toMainErrors:(id)arg2;
- (void)runPhases:(id)arg1;
- (void)performDiagnosticsWithErrors:(id *)arg1;
- (void)performDiagnostics:(id)arg1;
- (void)dealloc;
- (id)init;

@end

