/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, UIColor;

@interface UINavigationButton : UIButton {
    unsigned int _size : 2;
    unsigned int _pad : 30;
    NSInteger _barStyle;
    NSSet *_possibleTitles;
    NSInteger _style;
    UIColor *_tintColor;
}

@property(retain) UIColor *tintColor; /* unknown property attribute: V_tintColor */
@property NSInteger barStyle; /* unknown property attribute: V_barStyle */
@property NSInteger style; /* unknown property attribute: V_style */
@property(retain) UIImage *image;
@property(retain) NSString *title;
@property NSInteger controlSize;

+ (id)defaultFont;

- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent { }*)arg1;
- (void)_updateStyle;
- (NSInteger)barStyle;
- (BOOL)contentsEqualTo:(id)arg1 withStyle:(NSInteger)arg2;
- (NSInteger)controlSize;
- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1 style:(NSInteger)arg2;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(NSInteger)arg3;
- (id)initWithImage:(id)arg1;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(NSInteger)arg3;
- (id)initWithTitle:(id)arg1 style:(NSInteger)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(NSInteger)arg3 barStyle:(NSInteger)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setControlSize:(NSInteger)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (NSInteger)style;
- (id)tintColor;
- (id)title;

@end
