/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer;

@interface UIAutoscrollTimer : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    float m_delta;
    NSInteger m_directions;
    } m_point;
    id m_target;
    NSTimer *m_timer;
}

- (void)dealloc;
- (float)delta;
- (NSInteger)directions;
- (id)initWithTarget:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 directions:(NSInteger)arg3 repeatInterval:(double)arg4;
- (void)invalidate;
- (struct CGPoint { float x1; float x2; })point;
- (void)timerFired:(id)arg1;

@end
