/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, NSURLCacheNode, NSURLQueue;

@interface NSURLCacheInternal : NSObject {
    struct _CFURLCache { } *_cacheRef;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
    NSUInteger currentDiskUsage;
    NSUInteger currentMemoryUsage;
    NSLock *diskCacheGuard;
    NSUInteger diskCacheItemLengthThreshold;
    struct NSLRUFileList { } *diskCacheLRUList;
    BOOL diskCacheLeftoverFilesRemovedFlag;
    NSURLQueue *diskCachePendingOperations;
    NSMutableSet *diskCachePendingRemovals;
    NSMutableDictionary *diskCachePendingWrites;
    double diskCacheTouchTime;
    NSUInteger diskCapacity;
    NSString *diskPath;
    NSMutableDictionary *memoryCache;
    NSLock *memoryCacheGuard;
    NSUInteger memoryCacheItemLengthThreshold;
    NSURLCacheNode *memoryCacheLRUHead;
    NSURLCacheNode *memoryCacheLRUTail;
    NSUInteger memoryCapacity;
    NSUInteger syncSkipCount;
    NSUInteger timerResetCount;
}

- (void)dealloc;
- (void)finalize;

@end
