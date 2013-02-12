/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASPolicy, NSString;

@interface ASProvisionTask : ASTask {
    NSString *_key;
    ASPolicy *_policy;
    NSInteger _type;
}

- (id)_initWithType:(NSInteger)arg1 policy:(id)arg2 key:(id)arg3;
- (id)_policyID;
- (id)_provisioningType;
- (id)command;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (NSInteger)type;

@end
