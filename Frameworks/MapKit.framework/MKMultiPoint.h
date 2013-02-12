/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPoint : MKShape {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingRect;
    unsigned int _pointCount;
    struct { double x1; double x2; } *_points;
}

@property(readonly) unsigned int pointCount;
@property(readonly) struct { double x1; double x2; }* points;

- (void)_calculateBounds;
- (void)_setCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (void)_setPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (void)getCoordinates:(struct { double x1; double x2; }*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned int)pointCount;
- (struct { double x1; double x2; }*)points;

@end