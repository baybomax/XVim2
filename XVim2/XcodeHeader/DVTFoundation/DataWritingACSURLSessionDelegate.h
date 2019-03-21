//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/ACSURLSessionDataDelegate-Protocol.h>
#import <DVTFoundation/ACSURLSessionTaskDelegate-Protocol.h>
#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTPromise, DVTStackBacktrace, NSFileHandle, NSString, NSURLResponse;

@interface DataWritingACSURLSessionDelegate : NSObject <ACSURLSessionTaskDelegate, ACSURLSessionDataDelegate, DVTInvalidation>
{
    NSURLResponse *_lastResponse;
    unsigned long long _maxLength;
    NSFileHandle *_fileHandle;
    DVTPromise *_promise;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)primitiveInvalidate;
- (id)initWithMaxLength:(unsigned long long)arg1 fileHandle:(id)arg2 promise:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

