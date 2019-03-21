//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextFold.h>

@class XCSourceCodeTreeNode;

@interface DVTSourceCodeTreeNodeFold : DVTTextFold
{
    XCSourceCodeTreeNode *_rootSourceCodeTreeNode;
    XCSourceCodeTreeNode *_sourceCodeTreeNode;
    struct _NSRange _rootSourceCodeTreeRange;
}

+ (Class)_inlineTokenAttachmentCellClass;
@property(retain) XCSourceCodeTreeNode *sourceCodeTreeNode; // @synthesize sourceCodeTreeNode=_sourceCodeTreeNode;
@property struct _NSRange rootSourceCodeTreeRange; // @synthesize rootSourceCodeTreeRange=_rootSourceCodeTreeRange;
@property(retain) XCSourceCodeTreeNode *rootSourceCodeTreeNode; // @synthesize rootSourceCodeTreeNode=_rootSourceCodeTreeNode;
- (void).cxx_destruct;
- (struct _NSRange)fixedSelectionRangeForRange:(struct _NSRange)arg1 affinity:(unsigned long long)arg2 inTextView:(id)arg3;
- (void)offsetBy:(long long)arg1;
- (struct _NSRange)replacementRange;
- (id)replacementString;

@end

