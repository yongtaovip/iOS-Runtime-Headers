/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMoreListController, UINavigationController, UIViewController;

@interface UIMoreNavigationController : UINavigationController {
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(retain) NSArray *moreViewControllers;
@property BOOL allowsCustomizing;

- (BOOL)allowsCustomizing;
- (void)dealloc;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (id)moreViewControllers;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (void)setMoreViewControllers:(id)arg1;

@end
