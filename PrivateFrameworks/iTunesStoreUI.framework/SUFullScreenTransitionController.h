/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUFullScreenTransitionCachedState, UINavigationBar, UITransitionView, UIViewController, UIWindow;

@interface SUFullScreenTransitionController : NSObject {
    unsigned int _isAnimating : 1;
    unsigned int _isPoppingNavigationItem : 1;
    unsigned int _pushHidesNavigationBar : 1;
    id _delegate;
    SUFullScreenTransitionCachedState *_initialState;
    UINavigationBar *_navigationBar;
    UIViewController *_pushedViewController;
    UITransitionView *_transitionView;
    UIWindow *_window;
}

@property(retain) UINavigationBar *navigationBar; /* unknown property attribute: V_navigationBar */
@property id delegate; /* unknown property attribute: V_delegate */

- (void)_cacheInitialState;
- (void)_restoreInitialState;
- (void)_setStatusBarMode:(NSInteger)arg1 duration:(float)arg2;
- (void)_setWindowFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_swizzleInTransitionViews;
- (void)_transferNavigationBarToView:(id)arg1;
- (void)_transitionFromController:(id)arg1 animated:(BOOL)arg2;
- (void)_transitionToController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithWindow:(id)arg1;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)navigationBar;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(NSInteger)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;

@end
