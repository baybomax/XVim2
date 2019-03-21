//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSString;

@interface IDEInspectorKeyPath : NSObject <NSCopying>
{
    NSString *_observationKeyPath;
    NSString *_applicationKeyPath;
}

+ (void)addKeyPathPrefixesToStripForHumanReadableName:(id)arg1;
+ (id)keyPathWithApplicationKeyPath:(id)arg1;
@property(readonly) NSString *applicationKeyPath; // @synthesize applicationKeyPath=_applicationKeyPath;
@property(readonly) NSString *observationKeyPath; // @synthesize observationKeyPath=_observationKeyPath;
- (void).cxx_destruct;
- (id)humanReadableName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationKeyPath:(id)arg1;

@end

