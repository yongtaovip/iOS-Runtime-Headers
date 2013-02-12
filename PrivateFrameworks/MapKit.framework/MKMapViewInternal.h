/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class <MKMapViewDelegate><MKMapViewDelegatePrivate>, CLLocation, MKDotPositionView, MKInnerCirclePositionView, MKMapLevelView, MKMapViewPositioningChange, MKOverlayView, MKRingPositionView, MKRouteLoader, MKRouteView, MKSearchResult, MKSearchResultManager, NSArray, NSTimer, UIImageView, UIScroller, UITextField;

@interface MKMapViewInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    NSTimer *accessoryTimer;
    BOOL allowsPulsatingTraffic;
    BOOL animateFlagWhileSuspendedResultProcessing;
    NSInteger animationType;
    NSInteger animationTypeHistory;
    UIImageView *badgeView;
    } billingPointLongLat;
    NSInteger billingPointZoomLevel;
    BOOL callingScroller;
    } centeringRect;
    UITextField *debugView;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *delegate;
    BOOL didCompletePinLayout;
    BOOL didStartDragging;
    BOOL didStartSmoothScrolling;
    double displayedUserLocationAccuracy;
    double doubleTapDelay;
    } doubleTapStartPosition;
    double doubleTapStartTime;
    NSInteger endHoverLocationSource;
    } endOffset;
    float endScale;
    NSUInteger eventMode;
    NSUInteger eventModeHistory;
    CLLocation *fixedUserLocation;
    NSUInteger gestureCount;
    NSTimer *hoverExpirationTimer;
    double hoverStartTime;
    MKMapLevelView *hybridMapLevelViews[20];
    BOOL ignoreLocationUpdates;
    MKInnerCirclePositionView *innerCirclePositionView;
    BOOL isCalculatingUserLocation;
    BOOL isLoadingEnabled;
    BOOL isRunningPositioningChange;
    BOOL isShowingUserLocation;
    BOOL isSuspended;
    double lastGestureEndedInterval;
    NSInteger lastGesturePinTransitionZoomLevel;
    NSUInteger levelViewLoadingCount;
    NSUInteger levelViewTrafficLoadingCount;
    BOOL liveSearchEnabled;
    BOOL liveTrackingAutoSelectZoomLevel;
    BOOL liveTrackingEnabled;
    BOOL liveTrackingSupported;
    NSUInteger mapType;
    NSInteger maxZoomLevel;
    } maximumSize;
    NSInteger minZoomLevel;
    NSUInteger mouseDownCount;
    struct __GSEvent { } *mouseDownEvent;
    struct __GSEvent { } *mouseUpEvent;
    BOOL needToShowRoute;
    BOOL needToShowUserPosition;
    MKOverlayView *overlayView;
    BOOL persistFixedUserLocation;
    NSTimer *pinDropTimer;
    MKRingPositionView *positionView;
    NSInteger positionViewUpdateType;
    MKMapViewPositioningChange *positioningChange;
    NSTimer *positioningChangeTimer;
    float prevScale;
    float previousZoomLevel;
    NSInteger restorePositionViewUpdateType;
    } routeCenterLongLat;
    MKRouteLoader *routeLoader;
    UIImageView *routePositionView;
    } routePositionViewLongLat;
    NSInteger routeSummaryZoomLevel;
    MKRouteView *routeView;
    MKMapLevelView *satelliteMapLevelViews[20];
    NSTimer *scrollToReCenterUserTimer;
    UIScroller *scroller;
    MKSearchResultManager *searchManager;
    NSInteger searchMode;
    NSArray *searchResultsWhileSuspendedResultProcessing;
    MKSearchResult *selectedSearchResultWhileSuspendedResultProcessing;
    BOOL showingRoute;
    MKMapLevelView *standardMapLevelViews[18];
    NSTimer *startEffectsTimer;
    } startOffset;
    float startScale;
    BOOL suspendSearchResultProcessing;
    NSUInteger suspendedEffectsCount;
    NSUInteger tileCount;
    NSTimer *tileExpirationTimer;
    NSTimer *tilingTimer;
    MKDotPositionView *trackingPositionView;
    BOOL trafficEnabled;
    NSInteger trafficStatus;
    BOOL useDisplayedUserLocationAccuracy;
    CLLocation *userLocation;
    double userLocationCoordinateChangedTime;
    NSInteger userLocationSource;
    NSInteger userPositionViewMode;
    } zoomEndWindowPoint;
    } zoomLongLat;
    } zoomStartWindowPoint;
    NSInteger zoomType;
}

@end
