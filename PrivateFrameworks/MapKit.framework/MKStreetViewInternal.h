/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class CALayer, EAGLContext, MKMapSnapshotCreator, MKPanorama, MKPanoramaAnnotationGeometry, MKPanoramaLoader, MKPanoramaPlaceholderGeometry, MKPanoramaSphereGeometry, MKPanoramaTextures, MKSearchResult, MKStreetViewGeometry, MKStreetViewLabelCache, MKStreetViewMinimapGeometry, MKStreetViewTexture, MKStreetViewTileDecoder, NSMutableDictionary, NSString, NSTimer;

@interface MKStreetViewInternal : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct $_466 { 
        unsigned int panoramaWillChange : 1; 
        unsigned int panoramaDidChange : 1; 
        unsigned int streetViewWillClose : 1; 
        unsigned int streetViewDidClose : 1; 
        unsigned int didFailWithError : 1; 
        unsigned int didUpdatePanoramaMetadata : 1; 
        unsigned int userDidTap : 1; 
        unsigned int streetViewWillChangeOrientation : 1; 
        unsigned int streetViewDidChangeOrientation : 1; 
    float anchorAngle;
    float anchorFov;
    float anchorNearX;
    float anchorNearY;
    float anchorPhi;
    float anchorTheta;
    NSMutableDictionary *anchorTouches;
    NSTimer *animationTimer;
    MKPanoramaAnnotationGeometry *annotationGeometry;
    float bounceCenter;
    float bounceInitialOffset;
    float bounceInitialVelocity;
    double bounceStartTime;
    NSInteger bufferHeight;
    NSInteger bufferWidth;
    BOOL canTap;
    EAGLContext *context;
    NSString *copyright;
    id delegate;
    } delegateImplements;
    BOOL dragging;
    NSTimer *fadeTimer;
    float far;
    float fov;
    NSUInteger framebuffer;
    MKStreetViewGeometry *googleQuad;
    MKStreetViewTexture *googleTexture;
    BOOL hasRequestedAllTiles;
    BOOL hasTouched;
    void *introSurfaceBufferRef;
    NSUInteger introSurfaceHeight;
    NSUInteger introSurfaceTexture;
    NSUInteger introSurfaceWidth;
    } introZoomPoint;
    MKStreetViewLabelCache *labelCache;
    double lastScrollTime;
    double lastTouchTime;
    CALayer *logoLayer;
    MKMapSnapshotCreator *mapSnapShotCreator;
    double mapTransitionStartTime;
    NSUInteger maxZoomLevel;
    float maxZoomScaleFactor;
    MKStreetViewMinimapGeometry *minimap;
    } minimapPinLocation;
    MKStreetViewTexture *minimapPinTexture;
    MKStreetViewTexture *minimapRingTexture;
    MKStreetViewTexture *minimapRotatorTexture;
    MKStreetViewTexture *minimapTexture;
    float near;
    float nearx;
    float neary;
    NSUInteger nextValidTapCount;
    double panoTransitionStartTime;
    MKPanorama *panorama;
    MKPanoramaLoader *panoramaLoader;
    BOOL pipPressed;
    double pitch;
    BOOL pitchLocked;
    float pitchVelocity;
    MKPanoramaPlaceholderGeometry *placeholder;
    MKPanoramaAnnotationGeometry *previousAnnotationGeometry;
    MKPanorama *previousPanorama;
    float previousPitchVelocity;
    MKPanoramaSphereGeometry *previousSphere;
    MKPanoramaTextures *previousTextures;
    float previousYawVelocity;
    NSUInteger renderbuffer;
    BOOL reverseMapTransition;
    MKSearchResult *searchResult;
    MKPanoramaSphereGeometry *sphere;
    } tapPoint;
    NSTimer *tapTimer;
    MKPanoramaTextures *textures;
    MKStreetViewTileDecoder *tileDecoder;
    float transitionDirectionX;
    float transitionDirectionY;
    float transitionDirectionZ;
    double transitionDuration;
    float transitionYawAdjust;
    float vfov;
    double yaw;
    float yawTolerance;
    float yawVelocity;
    float zoomEndFov;
    float zoomStartFov;
    double zoomTransitionStartTime;
    BOOL zooming;
}

@property(retain) MKMapSnapshotCreator *mapSnapShotCreator; /* unknown property attribute: VmapSnapShotCreator */
@property(retain) MKSearchResult *searchResult; /* unknown property attribute: VsearchResult */
@property(retain) CALayer *logoLayer; /* unknown property attribute: VlogoLayer */
@property(retain) NSString *copyright; /* unknown property attribute: Vcopyright */
@property(retain) MKStreetViewLabelCache *labelCache; /* unknown property attribute: VlabelCache */
@property(retain) MKStreetViewTileDecoder *tileDecoder; /* unknown property attribute: VtileDecoder */
@property(retain) MKPanoramaTextures *previousTextures; /* unknown property attribute: VpreviousTextures */
@property(retain) MKPanoramaTextures *textures; /* unknown property attribute: Vtextures */
@property(retain) MKPanoramaAnnotationGeometry *previousAnnotationGeometry; /* unknown property attribute: VpreviousAnnotationGeometry */
@property(retain) MKPanoramaAnnotationGeometry *annotationGeometry; /* unknown property attribute: VannotationGeometry */
@property(retain) MKPanoramaSphereGeometry *previousSphere; /* unknown property attribute: VpreviousSphere */
@property(retain) MKPanoramaSphereGeometry *sphere; /* unknown property attribute: Vsphere */
@property(retain) MKPanorama *previousPanorama; /* unknown property attribute: VpreviousPanorama */
@property(retain) MKPanorama *panorama; /* unknown property attribute: Vpanorama */

- (id)annotationGeometry;
- (id)copyright;
- (id)labelCache;
- (id)logoLayer;
- (id)mapSnapShotCreator;
- (id)panorama;
- (id)previousAnnotationGeometry;
- (id)previousPanorama;
- (id)previousSphere;
- (id)previousTextures;
- (id)searchResult;
- (void)setAnnotationGeometry:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setLabelCache:(id)arg1;
- (void)setLogoLayer:(id)arg1;
- (void)setMapSnapShotCreator:(id)arg1;
- (void)setPanorama:(id)arg1;
- (void)setPreviousAnnotationGeometry:(id)arg1;
- (void)setPreviousPanorama:(id)arg1;
- (void)setPreviousSphere:(id)arg1;
- (void)setPreviousTextures:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSphere:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileDecoder:(id)arg1;
- (id)sphere;
- (id)textures;
- (id)tileDecoder;

@end
