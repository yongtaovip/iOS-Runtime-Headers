/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLKeychainCredentialStorageInternal;

@interface NSURLKeychainCredentialStorage : NSObject {
    NSURLKeychainCredentialStorageInternal *_internal;
}

- (void)_addCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)_initializeFromKeychain;
- (id)_saveCredential:(id)arg1 forProtectionSpace:(id)arg2 isDefault:(BOOL)arg3;
- (void)_scheduleChangeNotification;
- (void)_sendChangeNotification;
- (void)_updateDefaultState:(BOOL)arg1 forCredential:(id)arg2 protectionSpace:(id)arg3;
- (void)addCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (BOOL)hasCredentials;
- (id)initWithNotificationObject:(id)arg1;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;

@end
