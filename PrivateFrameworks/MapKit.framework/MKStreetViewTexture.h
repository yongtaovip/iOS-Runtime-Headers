/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@interface MKStreetViewTexture : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    NSInteger _height;
    } _imageSize;
    NSUInteger _textureName;
    NSInteger _width;
}

@property(readonly) NSInteger height; /* unknown property attribute: V_height */
@property(readonly) NSInteger width; /* unknown property attribute: V_width */
@property(readonly) CGSize imageSize; /* unknown property attribute: V_imageSize */
@property(readonly) NSUInteger textureName; /* unknown property attribute: V_textureName */

- (void)dealloc;
- (NSInteger)height;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithImageName:(id)arg1;
- (BOOL)loadCGImage:(struct CGImage { }*)arg1;
- (BOOL)loadImageWithName:(id)arg1;
- (NSUInteger)textureName;
- (NSInteger)width;

@end
