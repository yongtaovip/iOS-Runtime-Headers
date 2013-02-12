/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValue : NSObject <NSCopying, NSCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)valueWithCATransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCoordinate:(struct { double x1; double x2; })arg1;
+ (id)valueWithDDRange:(struct _DDRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })CATransform3DValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (void*)CA_copyRenderValue;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })CGAffineTransformValue;
- (struct CGPoint { float x1; float x2; })CGPointValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })CGRectValue;
- (struct CGSize { float x1; float x2; })CGSizeValue;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })UIEdgeInsetsValue;
- (id)classForCoder;
- (struct { double x1; double x2; })coordinateValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _DDRange { unsigned long long x1; unsigned long long x2; })ddrangeValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValue:(id)arg1;
- (BOOL)isNSValue__;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (struct CGPoint { float x1; float x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectValue;
- (struct CGSize { float x1; float x2; })sizeValue;

@end
