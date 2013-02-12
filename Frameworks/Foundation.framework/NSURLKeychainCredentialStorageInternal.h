/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface NSURLKeychainCredentialStorageInternal : NSObject {
    BOOL _pad[3];
    NSMutableDictionary *credentials;
    NSMutableDictionary *defaultUsernames;
    NSMutableSet *keychainItems;
    NSRecursiveLock *lock;
    id notificationObject;
    BOOL notificationPending;
}

- (void)dealloc;
- (id)initWithNotificationObject:(id)arg1;

@end
