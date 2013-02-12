/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary;

@interface MessageDetails : NSObject {
    NSUInteger dateReceived;
    NSUInteger encoding;
    BOOL isInvalid;
    MessageLibrary *library;
    NSUInteger libraryID;
    NSInteger mailboxID;
    NSUInteger messageFlags;
    NSUInteger uid;
}

- (double)dateReceivedAsTimeIntervalSince1970;
- (id)description;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)libraryID;
- (id)mailbox;
- (NSUInteger)mailboxID;
- (unsigned long)messageFlags;
- (id)messageID;
- (id)remoteID;
- (unsigned long)uid;

@end
