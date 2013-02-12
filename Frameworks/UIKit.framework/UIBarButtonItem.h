/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, NSString, UIImage, UIView;

@interface UIBarButtonItem : UIBarItem {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
    SEL _action;
    } _barButtonItemFlags;
    UIImage *_image;
    } _imageInsets;
    NSSet *_possibleTitles;
    NSInteger _tag;
    id _target;
    NSString *_title;
    UIView *_view;
    float _width;
}

@property NSInteger tag; /* unknown property attribute: V_tag */
@property id target; /* unknown property attribute: V_target */
@property SEL action; /* unknown property attribute: V_action */
@property(retain) UIView *customView;
@property(copy) NSSet *possibleTitles;
@property(retain) UIView *view;
@property(readonly) BOOL isCustomViewItem;
@property(readonly) BOOL isSystemItem;
@property NSInteger style;
@property(readonly) NSInteger systemItem;
@property float width;

- (void)_getSystemItemStyle:(NSInteger*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 forBarStyle:(NSInteger)arg5 landscape:(BOOL)arg6 alwaysBordered:(BOOL)arg7;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1 forBarStyle:(NSInteger)arg2 landscape:(BOOL)arg3 alwaysBordered:(BOOL)arg4;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_updateView;
- (SEL)action;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)customView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)isCustomViewItem;
- (BOOL)isEnabled;
- (BOOL)isSystemItem;
- (id)nextResponder;
- (id)possibleTitles;
- (void)setAction:(SEL)arg1;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setTag:(NSInteger)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWidth:(float)arg1;
- (NSInteger)style;
- (NSInteger)systemItem;
- (NSInteger)tag;
- (id)target;
- (id)title;
- (id)view;
- (float)width;

@end
