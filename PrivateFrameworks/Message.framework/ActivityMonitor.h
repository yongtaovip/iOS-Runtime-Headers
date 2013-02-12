/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class InvocationQueue, MFError, NSString;

@interface ActivityMonitor : NSObject {
    unsigned int _key : 13;
    unsigned int _canCancel : 1;
    unsigned int _shouldCancel : 1;
    unsigned int _isActive : 1;
    unsigned int _priority : 8;
    unsigned int _changeCount : 8;
    struct __CFMessagePort { } *_cancelPort;
    NSString *_cancelPortName;
    NSUInteger _currentCount;
    id _delegate;
    NSString *_descriptionString;
    NSString *_displayName;
    MFError *_error;
    NSUInteger _expectedLength;
    BOOL _gotNewMessages;
    double _lastTime;
    NSUInteger _maxCount;
    InvocationQueue *_ourQueue;
    double _percentDone;
    double _startTime;
    NSString *_statusMessage;
    id _target;
    NSString *_taskName;
    NSString *_uniqueID;
}

+ (id)currentMonitor;
+ (void)destroyMonitor;

- (void)_didChange;
- (BOOL)_lockedAddActivityTarget:(id)arg1;
- (NSInteger)acquireExclusiveAccessKey;
- (id)activityTarget;
- (id)activityTargets;
- (void)addActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (BOOL)canBeCancelled;
- (void)cancel;
- (struct __CFMessagePort { }*)cancelPort;
- (id)cancelPortName;
- (NSInteger)changeCount;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)error;
- (NSUInteger)expectedLength;
- (BOOL)gotNewMessages;
- (void)incrementCurrentCount;
- (id)init;
- (BOOL)isActive;
- (void)notifyConnectionEstablished;
- (double)percentDone;
- (void)postActivityFinished;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)primaryTarget;
- (unsigned char)priority;
- (void)relinquishExclusiveAccessKey:(NSInteger)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)reset;
- (void)setActivityTarget:(id)arg1;
- (void)setCanBeCancelled:(BOOL)arg1;
- (void)setCancelPortName:(id)arg1;
- (void)setCurrentCount:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(NSInteger)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpectedLength:(NSUInteger)arg1;
- (void)setGotNewMessages;
- (void)setInvocationQueue:(id)arg1;
- (void)setMaxCount:(NSInteger)arg1;
- (void)setPercentDone:(double)arg1 withKey:(NSInteger)arg2;
- (void)setPercentDone:(double)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (void)setPriority:(unsigned char)arg1;
- (void)setShouldCancel:(BOOL)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(NSInteger)arg3;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(NSInteger)arg2;
- (void)setStatusMessage:(id)arg1;
- (void)setTaskName:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (BOOL)shouldCancel;
- (id)statusMessage;
- (id)taskName;
- (id)uniqueId;
- (id)userInfoForNotification;

@end
