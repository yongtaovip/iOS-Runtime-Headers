/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSString, UIColor;

@interface MKPanoramaAnnotation : NSObject {
    NSString *_panoramaID;
    UIColor *_roadOverlayColor;
    NSString *_streetRange;
    NSString *_text;
    NSInteger _type;
    double _yaw;
}

@property(readonly) UIColor *roadOverlayColor; /* unknown property attribute: V_roadOverlayColor */
@property(readonly) double yaw; /* unknown property attribute: V_yaw */
@property(readonly) NSString *streetRange; /* unknown property attribute: V_streetRange */
@property(readonly) NSString *text; /* unknown property attribute: V_text */
@property(readonly) NSString *panoramaID; /* unknown property attribute: V_panoramaID */
@property NSInteger type; /* unknown property attribute: V_type */

- (void)dealloc;
- (id)description;
- (id)initWithLink:(id)arg1;
- (id)panoramaID;
- (id)roadOverlayColor;
- (void)setType:(NSInteger)arg1;
- (id)streetRange;
- (id)text;
- (NSInteger)type;
- (double)yaw;

@end
