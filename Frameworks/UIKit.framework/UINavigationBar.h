/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIColor, UIView;

@interface UINavigationBar : UIView <NSCoding> {
    struct { 
        unsigned int animate : 1; 
        unsigned int animationDisabledCount : 10; 
        unsigned int barStyle : 3; 
        unsigned int disableLayout : 1; 
        unsigned int backPressed : 1; 
        unsigned int animatePromptChange : 1; 
        unsigned int pendingHideBackButton : 1; 
        unsigned int removeAccessoryOnPop : 1; 
        unsigned int titleAutosizesToFit : 1; 
        unsigned int usingNewAPI : 1; 
        unsigned int minibar : 1; 
        unsigned int isLocked : 1; 
        unsigned int shouldUpdatePromptAfterTransition : 1; 
    UIView *_accessoryView;
    id _delegate;
    NSMutableArray *_itemStack;
    UIView *_leftView;
    } _navbarFlags;
    UIView *_prompt;
    float _rightMargin;
    UIView *_rightView;
    NSUInteger _state;
    UIColor *_tintColor;
    UIView *_titleView;
}

@property(retain) UIColor *tintColor; /* unknown property attribute: V_tintColor */
@property(retain,readonly) UINavigationItem *backItem;
@property(copy) NSArray *items;
@property(retain,readonly) UINavigationItem *topItem;
@property NSInteger barStyle;
@property id delegate;

+ (id)defaultPromptFont;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPrompt;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPromptForOrientation:(NSInteger)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;

- (void)_adjustVisibleItemsByDelta:(float)arg1;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (NSInteger)_barStyle:(BOOL)arg1;
- (float)_barWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(NSInteger)arg4;
- (void)_broadcastNewTopToItems:(NSInteger)arg1 complete:(BOOL)arg2;
- (BOOL)_canHandleStatusBarMouseEvents:(struct __GSEvent { }*)arg1;
- (id)_commonHitTest:(struct CGPoint { float x1; float x2; })arg1 forView:(id)arg2;
- (id)_defaultTitleFont;
- (void)_drawPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(NSInteger)arg4;
- (void)_fadeViewOut:(id)arg1;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeViewsOut:(id)arg1;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4;
- (void)_handleMouseDownAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_hasBackButton;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_itemStack;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeAccessoryView;
- (void)_removeItemsFromSuperview:(id)arg1;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_startBarStyleAnimation:(NSInteger)arg1 withTintColor:(id)arg2;
- (void)_startPopAnimation;
- (void)_startPushAnimation;
- (void)_updateNavigationBarItems;
- (NSUInteger)animationDisabledCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableTitleArea;
- (id)backItem;
- (NSInteger)barStyle;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(NSInteger)arg3 buttonStyle:(NSInteger)arg4 isRight:(BOOL)arg5;
- (id)currentBackButton;
- (id)currentLeftView;
- (id)currentRightView;
- (void)dealloc;
- (float)defaultButtonHeight;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
- (id)delegate;
- (void)disableAnimation;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(NSInteger)arg2 pressed:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(NSInteger)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableAnimation;
- (void)encodeWithCoder:(id)arg1;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAnimationEnabled;
- (BOOL)isLocked;
- (BOOL)isMinibar;
- (id)items;
- (void)layoutSubviews;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)navigationItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)navigationItemChanged:(id)arg1;
- (id)navigationItems;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (id)prompt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (id)promptView;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)pushNavigationItem:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2 removeOnPop:(BOOL)arg3;
- (void)setAccessoryView:(id)arg1;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setButton:(NSInteger)arg1 enabled:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (void)setTitleView:(id)arg1;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(NSInteger)arg2 rightButton:(id)arg3 withStyle:(NSInteger)arg4;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (NSInteger)state;
- (id)tintColor;
- (BOOL)titleAutoresizesToFit;
- (id)topItem;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updatePrompt;
- (void)updateTitleView;

@end
