/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, AVAudioTier;

@interface AVAudioTierPicker : NSObject {
    NSMutableArray *audioTiers;
    AVAudioTier *defaultTier;
    AVAudioTier *fallbackTier;
    BOOL isUsingCellular;
}

@property(readonly) AVAudioTier * defaultTier;
@property(readonly) AVAudioTier * fallbackTier;

- (id)createTierForPayload:(id)arg1 bitrate:(unsigned long)arg2 sampleRate:(unsigned long)arg3 packetsPerBundle:(unsigned long)arg4 headerSize:(unsigned long)arg5;
- (void)dealloc;
- (id)defaultTier;
- (id)fallbackTier;
- (id)initWithPayloads:(id)arg1 sampleRate:(unsigned long)arg2 packetsPerBundle:(id)arg3 headerSize:(unsigned long)arg4 usingCellular:(BOOL)arg5;
- (id)tierForNetworkBitrate:(unsigned long)arg1;

@end