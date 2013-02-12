/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSLock, _NSIndexPathUniqueTreeNode;

@interface _NSIndexPathUniqueTree : NSObject {
    NSLock *_lock;
    _NSIndexPathUniqueTreeNode *_root;
}

- (void)_willDeallocIndexPath:(void*)arg1 withIndexes:(NSUInteger*)arg2 length:(NSUInteger)arg3;
- (void)awake;
- (void)dealloc;
- (void)lock;
- (id)uniqueIndexPath:(id)arg1 withIndexes:(NSUInteger*)arg2 count:(NSUInteger)arg3;
- (void)unlock;

@end
