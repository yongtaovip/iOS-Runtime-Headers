/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ActivityMonitor, MailAccount, MailboxUid, NSMutableArray, NSMutableSet, NSTimer, ObjectCache;

@interface MessageStore : SafeObserver {
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int rebuildingTOC : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 22; 
    union { 
        struct { 
            ObjectCache *_headerDataCache; 
            ObjectCache *_headerCache; 
            ObjectCache *_bodyDataCache; 
            ObjectCache *_bodyCache; 
        } objectCaches; 
        struct { 
            struct __CFDictionary {} *_headerDataCache; 
            struct __CFDictionary {} *_headerCache; 
            struct __CFDictionary {} *_bodyDataCache; 
            struct __CFDictionary {} *_bodyCache; 
        } intKeyCaches; 
    MailAccount *_account;
    NSMutableArray *_allMessages;
    NSUInteger _allMessagesSize;
    } _caches;
    NSUInteger _deletedMessageCount;
    NSUInteger _deletedMessagesSize;
    } _flags;
    NSUInteger _generationNumber;
    NSUInteger _lastFetchCount;
    MailboxUid *_mailboxUid;
    ActivityMonitor *_openMonitor;
    NSInteger _state;
    NSTimer *_timer;
    NSMutableSet *_uniqueStrings;
    NSUInteger _unreadMessageCount;
    double timeOfLastAutosaveOperation;
}

+ (void)_autosaveMessageStore:(void*)arg1;
+ (BOOL)cheapStoreAtPathIsEmpty:(id)arg1;
+ (NSInteger)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;

- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)_cancelAutosave;
- (id)_defaultRouterDestination;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_fetchBodyForMessage:(id)arg1 updateFlags:(BOOL)arg2;
- (id)_fetchBodyForMessage:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllCaches;
- (void)_flushAllMessageData;
- (void)_invalidate;
- (void)_invalidateInBackground;
- (BOOL)_isReadyToBeInvalidated;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_saveChanges;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (void)_setFlagsForMessages:(id)arg1 mask:(unsigned long)arg2;
- (void)_setNeedsAutosave;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2;
- (BOOL)_shouldCallCompactWhenClosing;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)account;
- (BOOL)allowsAppend;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (id)bestAlternativeForMessage:(id)arg1 inPart:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (BOOL)canCompact;
- (BOOL)canRebuild;
- (void)cancelOpen;
- (void)close;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(NSUInteger)arg1 limit:(NSUInteger)arg2;
- (id)copyOfAllMessagesWithOptions:(NSUInteger)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3;
- (id)dataForMimePart:(id)arg1;
- (void)dealloc;
- (id)defaultAlternativeForMessage:(id)arg1 inPart:(id)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(NSInteger)arg1 compact:(BOOL)arg2;
- (void)deletedCount:(NSUInteger*)arg1 andSize:(NSUInteger*)arg2;
- (id)description;
- (void)didOpen;
- (id)displayName;
- (const char *)displayNameForLogging;
- (void)doCompact;
- (NSInteger)fetchMessagesReceivedBetween:(id)arg1 and:(id)arg2 synchronize:(BOOL)arg3;
- (NSInteger)fetchMobileSynchronously:(NSUInteger)arg1 preservingUID:(id)arg2;
- (NSInteger)fetchMobileSynchronously:(NSUInteger)arg1;
- (NSInteger)fetchNewMessagesAndSynchronizeOldMessages:(BOOL)arg1;
- (NSInteger)fetchNumMessages:(NSUInteger)arg1 beforeUID:(NSUInteger)arg2 synchronize:(BOOL)arg3;
- (NSInteger)fetchNumMessages:(NSUInteger)arg1 preservingUID:(id)arg2 beforeUID:(NSUInteger)arg3 synchronize:(BOOL)arg4;
- (NSInteger)fetchSynchronously;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)fullBodyDataForMessage:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (BOOL)hasMoreMessages:(NSUInteger)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headersForMessage:(id)arg1;
- (NSUInteger)indexOfMessage:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)invalidateSavingChanges:(BOOL)arg1;
- (BOOL)isDrafts;
- (BOOL)isOpened;
- (BOOL)isReadOnly;
- (BOOL)isTrash;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)mailboxUid;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (id)messageWithValue:(id)arg1 forHeader:(id)arg2 options:(NSUInteger)arg3;
- (void)messagesWereAdded:(id)arg1 forIncrementalLoading:(BOOL)arg2;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (NSUInteger)nonDeletedCount;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)purgeMessagesBeyond:(NSUInteger)arg1;
- (void)queueSaveChangesInvocation;
- (void)rebuildTableOfContentsAsynchronously;
- (NSUInteger)serverMessageCount;
- (NSUInteger)serverUnreadCount;
- (void)setData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessage:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (void)startSynchronization;
- (id)status;
- (id)storePathRelativeToAccount;
- (void)structureDidChange;
- (void)syncOlderMessages;
- (NSUInteger)totalCount;
- (NSUInteger)totalMessageSize;
- (void)undeleteMessages:(id)arg1;
- (id)uniquedString:(id)arg1;
- (NSUInteger)unreadCount;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (void)updateMessages:(id)arg1 updateColor:(BOOL)arg2 updateNumberOfAttachments:(BOOL)arg3;
- (void)updateUserInfoToLatestValues;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)willBeReleased;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;

@end
