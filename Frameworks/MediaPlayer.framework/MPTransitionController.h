/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPViewController, NSMutableSet, UIView;

@interface MPTransitionController : NSObject {
    float _duration;
    NSInteger _fromOrientation;
    MPViewController *_fromViewController;
    struct __CFDictionary { } *_observers;
    NSMutableSet *_persistentViewsToFadeIn;
    NSMutableSet *_persistentViewsToFadeOut;
    UIView *_rootView;
    NSInteger _toOrientation;
    MPViewController *_toViewController;
    NSMutableSet *_viewsToFadeIn;
    NSMutableSet *_viewsToFadeOut;
}

@property(retain) MPViewController *toViewController; /* unknown property attribute: V_toViewController */
@property NSInteger toOrientation; /* unknown property attribute: V_toOrientation */
@property(retain) UIView *rootView; /* unknown property attribute: V_rootView */
@property(retain) MPViewController *fromViewController; /* unknown property attribute: V_fromViewController */
@property NSInteger fromOrientation; /* unknown property attribute: V_fromOrientation */
@property float duration; /* unknown property attribute: V_duration */

- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;
- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)dealloc;
- (float)duration;
- (void)fadeViewsForRestore:(BOOL)arg1;
- (NSInteger)fromOrientation;
- (id)fromViewController;
- (id)init;
- (void)messageObservers;
- (void)removeObserver:(id)arg1;
- (id)rootView;
- (void)setDuration:(float)arg1;
- (void)setFromOrientation:(NSInteger)arg1;
- (void)setFromViewController:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)setToOrientation:(NSInteger)arg1;
- (void)setToViewController:(id)arg1;
- (NSInteger)toOrientation;
- (id)toViewController;
- (void)transition:(NSUInteger)arg1;

@end
