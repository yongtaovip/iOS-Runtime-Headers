/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSTimer;

@interface ISTimer : NSObject {
    double _resetInterval;
    NSTimer *_timer;
}

+ (void)_invalidateSleepWakeTimers;
+ (void)_resetSleepWakeTimers;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;

- (void)_invalidateBeforeSleep;
- (void)_resetAfterWake;
- (void)_startWatchingSleepWakeNotifications;
- (void)_stopWatchingSleepWakeNotifications;
- (void)dealloc;
- (void)invalidate;
- (void)setFireDate:(id)arg1;
- (void)setResetsAfterSleep:(BOOL)arg1;

@end
