/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface DOMRange : DOMObject {
     /* Encoded args for previous method: @12@0:4^{Range=i{RefPtr<WebCore::Document>=^{Document}}{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::Node>=^{Node}}IB}8 */
     /* Encoded args for previous method: ^{Range=i{RefPtr<WebCore::Document>=^{Document}}{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::Node>=^{Node}}IB}8@0:4 */
     /* Encoded args for previous method: @12@0:4^{Range=i{RefPtr<WebCore::Document>=^{Document}}{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::Node>=^{Node}}IB}8 */
}

@property(retain,readonly) DOMNode *commonAncestorContainer;
@property(retain,readonly) DOMNode *endContainer;
@property(retain,readonly) DOMNode *startContainer;
@property(copy,readonly) NSString *text;
@property(readonly) BOOL collapsed;
@property(readonly) NSInteger endOffset;
@property(readonly) NSInteger startOffset;

+ (id)_wrapRange:(struct Range { NSInteger x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::Node> { struct Node {} *x_5_1_1; } x5; NSUInteger x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; }*)arg1;

- (id)_bridge;
- (id)_initWithRange:(struct Range { NSInteger x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::Node> { struct Node {} *x_5_1_1; } x5; NSUInteger x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; }*)arg1;
- (struct Range { NSInteger x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::Node> { struct Node {} *x_5_1_1; } x5; NSUInteger x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; }*)_range;
- (id)_text;
- (id)attachmentURLs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(BOOL)arg1;
- (BOOL)collapsed;
- (id)commonAncestorContainer;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(NSInteger)arg2;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (id)endContainer;
- (NSInteger)endOffset;
- (id)extractContents;
- (void)finalize;
- (void)insertNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (BOOL)isEquivalentToCollapsedRange;
- (BOOL)isPointInRange:(id)arg1 offset:(NSInteger)arg2;
- (id)lineBoxRects;
- (id)markupString;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 :(NSInteger)arg2;
- (void)setEnd:(id)arg1 offset:(NSInteger)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1 :(NSInteger)arg2;
- (void)setStart:(id)arg1 offset:(NSInteger)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (id)startContainer;
- (NSInteger)startOffset;
- (id)stringValue;
- (void)surroundContents:(id)arg1;
- (id)text;
- (id)toString;
- (id)webArchive;

@end
