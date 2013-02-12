/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURL;

@interface WebCoreResourceHandleAsDelegate : NSObject <NSURLAuthenticationChallengeSender> {
    struct ResourceHandle { NSInteger x1; struct OwnPtr<WebCore::ResourceHandleInternal> { 
            struct ResourceHandleInternal {} *m_ptr; 
        } x2; } *m_handle;
    NSURL *m_url;
}

- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willStopBufferingData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle { NSInteger x1; struct OwnPtr<WebCore::ResourceHandleInternal> { struct ResourceHandleInternal {} *x_2_1_1; } x2; }*)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
