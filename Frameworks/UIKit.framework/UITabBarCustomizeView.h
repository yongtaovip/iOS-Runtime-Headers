/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIImageView, UITabBar, UITabBarItem, UITabBarItemProxy;

@interface UITabBarCustomizeView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    UIImageView *_dragImage;
    UITabBarItem *_draggingItem;
    UITabBarItemProxy *_draggingProxy;
    NSMutableArray *_fixedItems;
    NSInteger _gridCount;
    float _gridOffset;
    NSMutableArray *_proxies;
    UITabBarItem *_replaceItem;
    UIImageView *_replacementGlow;
    } _startPoint;
    UITabBar *_tabBar;
}

- (void)_finishTouchesEndedChangeAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)canHandleSwipes;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
