/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSRecursiveLock, NSString;

@interface YahooAccount : IMAPAccount {
    NSRecursiveLock *_cookieLock;
    unsigned char _deviceID[16];
    BOOL _initializedDeviceID;
    void *_manager;
    NSUInteger _nonce;
    unsigned short _sequenceNumber;
    BOOL _shouldListenForNotifications;
    NSString *_signature;
    struct __CFSocket { } *_socket;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
    NSInteger _stores;
    NSString *_temporaryPassword;
    double _timeLastEncounteredAuthenticationError;
    double _timeLastProvisioned;
    double _timeLastReceivedPacket;
    double _timeLastSentPacket;
}

+ (id)accountInfoValueForKey:(id)arg1 value:(id)arg2;
+ (id)createAccountWithDictionary:(id)arg1;
+ (id)deliveryAccountHostname;
+ (NSUInteger)deliveryAccountPortNumber;
+ (BOOL)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (BOOL)getConfigurationFromServerForEmail:(id)arg1;
+ (id)hostname;
+ (void)initialize;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)usernameIsEmailAddress;

- (id)URLForMessage:(id)arg1;
- (id)XYMPKISignature;
- (BOOL)_canReceiveNewMailNotifications;
- (id)_defaultSpecialMailboxNameForType:(NSInteger)arg1;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (void)_reallyStopListeningForNotifications;
- (void)_scheduleWakeAtDate:(id)arg1;
- (void)_setAccountInfo:(id)arg1;
- (id)accountNameForKeychain;
- (BOOL)acquireCredentialsWithPassword:(id)arg1;
- (id)apiHostname;
- (BOOL)archiveSentMessages;
- (BOOL)canForwardWithoutDownload;
- (void)cancelKeepalive;
- (Class)connectionClass;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(NSInteger)arg3;
- (id)cookieForKey:(id)arg1;
- (void)cookiesExpired;
- (void)dealloc;
- (id)devtypeParameter;
- (id)displayUsername;
- (id)emailAddresses;
- (id)errorForDeliveryResponse:(id)arg1;
- (id)hostname;
- (id)init;
- (BOOL)isPasswordMissing;
- (NSUInteger)minUID;
- (BOOL)needsCredentials;
- (id)password;
- (NSUInteger)portNumber;
- (id)preferredAuthScheme;
- (void)removeCookie:(id)arg1;
- (void)removeSource:(struct __CFRunLoopSource { }*)arg1;
- (void)scheduleKeepaliveAfterDelay;
- (void)scheduleKeepaliveImmediately;
- (void)scheduleRetryLater;
- (void)scheduleSource;
- (void)scheduleTimer;
- (id)securityToken;
- (void)sendKeepalive:(id)arg1;
- (void)sendUDPAuthentication;
- (void)setCookie:(id)arg1 forKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setSecurityToken:(id)arg1;
- (void)setXYMPKISignature:(id)arg1;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (void)shutdownListener;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (BOOL)storesPassword;
- (id)temporaryPassword;
- (id)transferDisabledMailboxUids;
- (id)valueInAccountInfoForKey:(id)arg1;
- (id)yahooParameterForKey:(id)arg1;

@end
