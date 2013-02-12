/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPFullScreenTransportControls, MPItem, MPVideoViewController, MovieScrubberControl, UINavigationBar, UINavigationButton, UINavigationItem, UIView;

@interface MPFullScreenVideoOverlay : UIView {
    unsigned int _tvOutEnabled : 1;
    unsigned int _wantsTick : 1;
    UINavigationButton *_backButton;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    MPItem *_item;
    UIView *_loadingMovieIndicatorView;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    NSInteger _orientation;
    UINavigationButton *_scaleModeButton;
    MovieScrubberControl *_scrubControl;
    id _target;
    MPFullScreenTransportControls *_transportControls;
    MPVideoViewController *_videoController;
    NSUInteger _visibleParts;
}

@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property MPVideoViewController *videoController; /* unknown property attribute: V_videoController */
@property(retain,readonly) MPFullScreenTransportControls *transportControls; /* unknown property attribute: V_transportControls */
@property id target; /* unknown property attribute: V_target */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property(retain,readonly) UINavigationBar *navigationBar; /* unknown property attribute: V_navigationBar */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property NSUInteger disabledParts; /* unknown property attribute: V_disabledParts */
@property NSUInteger desiredParts; /* unknown property attribute: V_desiredParts */
@property BOOL TVOutEnabled;

- (BOOL)TVOutEnabled;
- (void)_backButtonAction:(id)arg1;
- (void)_initNavigationBar;
- (id)_loadingMovieIndicatorView;
- (void)_reloadTransportControls:(BOOL)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (id)_scrubControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_updateScrubControlWithAnimation:(BOOL)arg1;
- (void)_updateTimeBasedValues;
- (void)_validityChangedNotification:(id)arg1;
- (void)dealloc;
- (NSUInteger)desiredParts;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (NSUInteger)disabledParts;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(NSInteger)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (NSInteger)orientation;
- (void)reloadNavigationBarWithAnimation:(BOOL)arg1;
- (void)restoreSanity;
- (void)scrubberControl:(id)arg1 didChangeToScrubValue:(float)arg2;
- (void)scrubberControl:(id)arg1 didEnterScrubbingState:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setVideoController:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)startTicking;
- (void)stopTicking;
- (id)target;
- (id)transportControls;
- (id)videoController;
- (NSUInteger)visibleParts;

@end
