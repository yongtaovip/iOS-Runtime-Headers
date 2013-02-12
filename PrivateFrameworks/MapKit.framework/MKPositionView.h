/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@interface MKPositionView : UIView {
    id _delegate;
    NSUInteger _mapType;
    BOOL _stale;
    BOOL _useEffects;
    NSInteger _zoomDirection;
}

@property NSInteger zoomDirection; /* unknown property attribute: V_zoomDirection */
@property(getter=isStale) BOOL stale; /* unknown property attribute: V_stale */
@property id delegate; /* unknown property attribute: V_delegate */
@property NSUInteger mapType; /* unknown property attribute: V_mapType */
@property(readonly) CGRect accuracyBounds;
@property(readonly) CGRect effectiveFrame;

+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (struct CGColor { }*)highlightColor;
+ (id)layerName;
+ (struct CGColor { }*)positionColor;

- (void)_CA_updateBounds:(id)arg1 center:(id)arg2 duration:(double)arg3;
- (void)_CA_updateLayer:(id)arg1 bounds:(id)arg2 duration:(double)arg3 timingFunction:(id)arg4;
- (void)_CA_updateLayer:(id)arg1 position:(id)arg2 duration:(double)arg3 timingFunction:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accuracyBounds;
- (id)delegate;
- (void)displayAccuracy:(double)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })effectiveFrame;
- (BOOL)ensureBounds:(id)arg1 center:(id)arg2;
- (void)hideAccuracy;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isStale;
- (NSUInteger)mapType;
- (void)setDelegate:(id)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setZoomDirection:(NSInteger)arg1;
- (BOOL)shouldDisplayAccuracy:(double*)arg1 bounds:(id*)arg2;
- (void)showAccuracy;
- (void)startEffects;
- (void)stopEffects;
- (void)stopPositioningAnimation;
- (void)stopSizingAnimation;
- (void)updateBounds:(id)arg1 center:(id)arg2 duration:(double)arg3;
- (NSInteger)zoomDirection;

@end
