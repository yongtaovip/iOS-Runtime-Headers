/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSURLAuthenticationChallengeSender>, NSError, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSError *error;
    NSURLResponse *failureResponse;
    NSInteger previousFailureCount;
    NSURLCredential *proposedCredential;
    <NSURLAuthenticationChallengeSender> *sender;
    NSURLProtectionSpace *space;
}

- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(NSInteger)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
