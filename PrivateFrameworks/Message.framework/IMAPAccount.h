/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class IMAPOperationCache, NSMutableArray, NSMutableSet, NSRecursiveLock, NSString;

@interface IMAPAccount : MailAccount <IMAPMailboxListFilter> {
    unsigned int _lastConnectionFailed : 1;
    unsigned int _readBufferSize : 31;
    struct __CFArray { } *_cachedConnections;
    NSRecursiveLock *_connectionLock;
    NSRecursiveLock *_flagChangesLock;
    NSUInteger _greatestInboxUid;
    struct __CFArray { } *_lastKnownCapabilities;
    struct __CFArray { } *_mailboxesToSynchronize;
    NSMutableSet *_mailboxesWithChangedUidNext;
    NSInteger _nextConnectionTag;
    IMAPOperationCache *_offlineCache;
    void *_packetContextAssertion;
    NSMutableArray *_recentFlagChanges;
    NSString *_separatorChar;
    double _timeLastFetchedMailboxList;
}

+ (void)_deleteQueuedMailboxes:(id)arg1;
+ (id)accountTypeString;
+ (void)initialize;
+ (id)saslProfileName;
+ (BOOL)supportsRemoteAppend;

- (id)_URLScheme;
- (void)_checkForNewMessagesInStore:(id)arg1 unreadCountDelta:(NSUInteger)arg2;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 existingMailboxUid:(id)arg4 permanentTag:(id)arg5 dictionary:(id)arg6;
- (id)_createMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 dictionary:(id)arg4;
- (id)_dataForTemporaryUid:(unsigned long)arg1;
- (BOOL)_deleteMailbox:(id)arg1;
- (void)_didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;
- (void)_fetchUnreadCountsCheckForNewMessages:(BOOL)arg1;
- (void)_fetchUnreadCountsForMailboxUid:(id)arg1 recursively:(BOOL)arg2 connection:(id)arg3 checkForNewMessages:(BOOL)arg4;
- (void)_fetchUnreadCountsForMailboxUid:(id)arg1 recursively:(BOOL)arg2 connection:(id)arg3;
- (id)_fileSystemServerPathPrefix;
- (id)_infoForMatchingURL:(id)arg1;
- (BOOL)_isMailboxTypeStoredLocally:(NSInteger)arg1;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3 withConnection:(id)arg4;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2;
- (id)_mailboxPathPrefix;
- (id)_mailboxUidForName:(id)arg1;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (id)_nameForMailboxUid:(id)arg1;
- (void)_networkConfigurationChanged;
- (id)_pathComponentForUidName:(id)arg1;
- (void)_purgeStaleFlagChanges;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 edgeForcedOnly:(BOOL)arg2 ifIdleForTimeInterval:(double)arg3;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (void)_setCapabilities:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_setIsOffline:(BOOL)arg1;
- (void)_setIsOfflineWrapper:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(NSInteger)arg2;
- (id)_specialMailboxUidWithType:(NSInteger)arg1 create:(BOOL)arg2;
- (void)_synchronizeAccountWithServer;
- (void)_synchronizeMailboxesSynchronously;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (void)_validateConnections;
- (void)_waitForMailboxListingLoadToComplete;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)acquireNetworkAssertion;
- (void)addFlagChanges:(id)arg1 forMailboxPath:(id)arg2 UID:(NSUInteger)arg3;
- (BOOL)allowsPartialDownloads;
- (BOOL)canBeSynchronized;
- (BOOL)canGoOffline;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (void)checkInConnection:(id)arg1;
- (void)checkInConnectionsForStore:(id)arg1;
- (BOOL)compactWhenClosingMailboxes;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg3;
- (BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg3;
- (Class)connectionClass;
- (void)connectionDidDisconnect:(id)arg1;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(NSInteger)arg3;
- (void)considerSynchronizingNow;
- (void)dealloc;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (BOOL)deleteInPlace;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(NSUInteger)arg2;
- (void)fetchMailboxList;
- (NSInteger)fetchSynchronously;
- (NSInteger)fetchSynchronouslyLite;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(NSInteger)arg3;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(NSUInteger)arg2 connectTime:(double)arg3;
- (id)flagChangesLock;
- (void)getMailboxListIfNecessaryWithConnection:(id)arg1;
- (NSInteger)greatestInboxUid;
- (void)handleAlertResponse:(id)arg1;
- (void)handleOpenMailboxError:(id)arg1;
- (BOOL)hasPendingOfflineOperations;
- (id)init;
- (id)lastKnownCapabilities;
- (id)mailboxPathExtension;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (void)messagesAdded:(id)arg1;
- (NSUInteger)minID;
- (NSUInteger)minUID;
- (NSUInteger)minimumPartialDownloadSize;
- (id)nameForMailboxUid:(id)arg1;
- (BOOL)needToSynchronizeMailboxCaches;
- (void)networkConfigurationChanged:(id)arg1;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (id)offlineCache;
- (id)offlineCacheDirectoryPath;
- (id)offlineCacheIfExists;
- (id)offlineCacheIfOffline;
- (NSUInteger)readBufferSize;
- (void)refreshMailboxListingRootedAtUid:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllConnectionsIdleForTimeInterval:(double)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseNetworkAssertion;
- (void)removeFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)removeFlagChangesCommittedBefore:(double)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)requiresAuthentication;
- (BOOL)requiresDataForOfflineTransfersFromStore:(id)arg1;
- (void)resetMailboxTimer;
- (void)saveState;
- (id)secureServiceName;
- (id)separatorChar;
- (id)serverPathPrefix;
- (id)serviceName;
- (void)setAllowsPartialDownloads:(BOOL)arg1;
- (void)setCommitTime:(double)arg1 forConnectionTag:(NSUInteger)arg2;
- (void)setCompactWhenClosingMailboxes:(BOOL)arg1;
- (void)setConnectionTag:(NSUInteger)arg1 forFlagChanges:(id)arg2 forMessages:(id)arg3;
- (void)setDisplayName:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)setLibrary:(id)arg1;
- (void)setReadBufferSize:(NSUInteger)arg1;
- (void)setServerPathPrefix:(id)arg1 shouldSync:(BOOL)arg2;
- (void)setServerPathPrefix:(id)arg1;
- (void)setStoreMailboxType:(NSInteger)arg1 onServer:(BOOL)arg2;
- (void)setUseIDLEIfAvailable:(BOOL)arg1;
- (void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldExpungeMessagesOnDelete;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (Class)storeClass;
- (BOOL)storeMailboxTypeOnServer:(NSInteger)arg1;
- (BOOL)supportsIDLE;
- (void)synchronizeAllMailboxes;
- (void)synchronizeMailboxes:(id)arg1;
- (void)unselectMailbox:(id)arg1;
- (BOOL)useIDLEIfAvailable;
- (void)validateConnections;
- (id)valueInAccountInfoForKey:(id)arg1;
- (BOOL)xListSupportedOnConnection:(id)arg1;

@end
