/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class GMMMapPoint, MKStreetView, NSArray, NSMutableDictionary, NSString;

@interface MKPanoramaInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        double latitude; 
        double longitude; 
    float annotationHeight;
    float annotationHorizonHeight;
    NSArray *annotations;
    double cameraPitch;
    } coordinate;
    BOOL hasMetadata;
    NSUInteger heapTime;
    double horizontalFOV;
    } imageSize;
    BOOL isDisabled;
    struct CGImage { } *mapImageRef;
    GMMMapPoint *mapPoint;
    double maxVisiblePitch;
    NSUInteger maxZoomLevel;
    double minVisiblePitch;
    NSString *panoramaID;
    NSString *streetName;
    NSString *streetNumber;
    NSUInteger throttleFlags;
    NSUInteger throttleTimeInterval;
    NSUInteger tileByteCount;
    NSArray *tilePaths;
    } tileSize;
    NSMutableDictionary *tiles;
    double tiltPitch;
    double tiltYaw;
    NSUInteger updateTime;
    MKStreetView *view;
    double yaw;
}

@end
