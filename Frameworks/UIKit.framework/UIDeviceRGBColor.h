/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceRGBColor : UIColor {
    float alphaComponent;
    float blueComponent;
    struct CGColor { } *cachedColor;
    float greenComponent;
    float redComponent;
}

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)dealloc;
- (id)description;
- (NSUInteger)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
