/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface IMAPCompoundDownload : IMAPDownload {
    NSMutableArray *_subdownloads;
}

- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)addSubdownload:(id)arg1;
- (unsigned long)bytesFetched;
- (void)dealloc;
- (unsigned long)expectedLength;
- (BOOL)isComplete;
- (void)processResults;
- (void)removeSubdownload:(id)arg1;
- (id)subdownloads;

@end
