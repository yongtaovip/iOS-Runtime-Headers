/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UITransitionView : UIView <NSCoding> {
    struct { 
        unsigned int animationInProgress : 1; 
        unsigned int ignoresInteractionEvents : 1; 
        unsigned int reserved : 30; 
    id _delegate;
    UIView *_firstResponderToRemember;
    UIView *_fromView;
    UIView *_toView;
    } _transitionViewFlags;
}

+ (double)defaultDurationForTransition:(NSInteger)arg1;

- (void)_didCompleteTransition:(BOOL)arg1;
- (void)_didStartTransition;
- (void)_startTransition:(NSInteger)arg1 withDuration:(float)arg2;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (double)durationForTransition:(NSInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (BOOL)ignoresInteractionEvents;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (void)notifyDidCompleteTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (id)toView;
- (BOOL)transition:(NSInteger)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)transition:(NSInteger)arg1 toView:(id)arg2;

@end
