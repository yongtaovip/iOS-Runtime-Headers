/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSBaseView>, NSDictionary;

@interface PSSetupController : PSRootController {
    <PSBaseView> *_parentController;
    NSDictionary *_rootInfo;
}

+ (BOOL)isOverlay;

- (id)controller;
- (void)dealloc;
- (void)didFinishTransition;
- (void)dismiss;
- (void)forwardInvocation:(id)arg1;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (id)parentController;
- (void)popControllerOnParent;
- (void)pushController:(id)arg1;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setupRootListForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)showNavigationBarButtons:(id)arg1 :(id)arg2;
- (void)updateNavButtons;
- (id)view;
- (void)viewWillBecomeVisible:(void*)arg1;

@end
