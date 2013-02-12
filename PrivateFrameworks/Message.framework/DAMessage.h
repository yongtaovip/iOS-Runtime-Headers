/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailMessage, MailboxUid, Message;

@interface DAMessage : Message {
    DAMailMessage *_DAMailMessage;
    MailboxUid *_mailbox;
    Message *_rfc822CreatedMessage;
}

- (id)DAMailMessage;
- (void)dealloc;
- (id)headers;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)mailbox;
- (id)messageBody;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (unsigned long)messageFlags;
- (NSUInteger)messageSize;
- (id)remoteID;
- (id)remoteMailboxURL;

@end
