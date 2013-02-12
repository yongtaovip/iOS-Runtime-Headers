/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MediaAppTestState : NSObject {
    id _delegate;
    BOOL _gatherPerformanceData;
}

+ (id)sharedTestState;

- (void)clearState;
- (BOOL)gatherPerformanceData;
- (void)sendPlaybackDidEndMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGatherPerformanceData:(BOOL)arg1;

@end
