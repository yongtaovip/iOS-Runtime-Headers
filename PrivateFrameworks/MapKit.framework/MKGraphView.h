/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class CALayer, NSMutableArray, NSString, NSTimer;

@interface MKGraphView : UIView {
    float _fps;
    NSString *_keyPath;
    double _startTime;
    CALayer *_target;
    NSTimer *_timer;
    NSMutableArray *_xValues;
    NSMutableArray *_yValues;
}

@property float fps; /* unknown property attribute: V_fps */
@property(retain) NSTimer *timer; /* unknown property attribute: V_timer */
@property(retain) NSString *keyPath; /* unknown property attribute: V_keyPath */
@property CALayer *target; /* unknown property attribute: V_target */
@property(retain) NSMutableArray *yValues; /* unknown property attribute: V_yValues */
@property(retain) NSMutableArray *xValues; /* unknown property attribute: V_xValues */

- (void)array:(id)arg1 getMin:(float*)arg2 getMax:(float*)arg3;
- (void)dealloc;
- (void)displayFullScreen;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (float)fps;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyPath;
- (void)recordValues;
- (void)setFps:(float)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setXValues:(id)arg1;
- (void)setYValues:(id)arg1;
- (void)startRecording;
- (void)stopRecording;
- (id)target;
- (id)timer;
- (id)xValues;
- (id)yValues;

@end
