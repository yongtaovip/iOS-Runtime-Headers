/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    float mAngle;
    BOOL mAspectRatioLocked;
    BOOL mHorizontalFlip;
    } mNaturalSize;
    } mPosition;
    float mShearXAngle;
    float mShearYAngle;
    } mSize;
    BOOL mSizesLocked;
    BOOL mVerticalFlip;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)angle;
- (BOOL)aspectRatioLocked;
- (BOOL)horizontalFlip;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct CGPoint { float x1; float x2; })position;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (float)shearXAngle;
- (float)shearYAngle;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)sizesLocked;
- (BOOL)verticalFlip;

@end
