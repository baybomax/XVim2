//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTByteBuffer, NSData, NSError;

@interface DVTSimpleDeserializer : NSObject
{
    NSData *_inputData;
    DVTByteBuffer *_buffer;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (unsigned long long)streamFormatVersion;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

