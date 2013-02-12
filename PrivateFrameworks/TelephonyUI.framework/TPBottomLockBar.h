/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSArray, NSTimer, TPLockKnobView, TPLockTextView, UIView;

@interface TPBottomLockBar : TPBottomBar {
    NSInteger _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    float _fontSize;
    float _knobTrackInsetLeft;
    TPLockKnobView *_knobView;
    TPLockTextView *_labelView;
    NSArray *_labels;
    id _representedObject;
    UIView *_trackArrow;
}

+ (id)_backgroundImage;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)_setLabel:(id)arg1;
- (NSInteger)currentLabelIndex;
- (void)cycleToLabelAtIndex:(NSInteger)arg1;
- (void)cycleToNextLabel;
- (void)dealloc;
- (void)downInKnob;
- (void)finishedCyclingLabelOut;
- (float)fontSize;
- (void)freezeKnobInUnlockedPosition;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(NSInteger)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (BOOL)isAnimating;
- (id)knob;
- (void)knobDragged:(float)arg1;
- (float)knobTrackInsetLeft;
- (id)labels;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)relock;
- (id)representedObject;
- (void)setDelegate:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)slideBack:(BOOL)arg1;
- (void)startAnimating;
- (void)startCyclingLabels;
- (void)stopAnimating;
- (void)stopCyclingLabels;
- (void)unlock;
- (void)upInKnob;

@end
