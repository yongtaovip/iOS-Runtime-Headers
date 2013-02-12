/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class IMAPConnection, LibraryIMAPStore, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface SyncResponseQueue : BufferedMessageQueue {
    IMAPConnection *_connection;
    NSUInteger _currentUID;
    NSRecursiveLock *_flagChangesLock;
    NSArray *_libraryDetails;
    NSMutableArray *_missingUIDs;
    BOOL _shouldCompact;
    BOOL _shouldFetch;
    LibraryIMAPStore *_store;
    NSString *_url;
}

- (BOOL)addItem:(id)arg1;
- (void)dealloc;
- (BOOL)handleItems:(id)arg1;
- (id)init;
- (NSUInteger)sizeForItem:(id)arg1;

@end
