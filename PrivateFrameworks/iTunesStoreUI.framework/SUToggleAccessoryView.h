/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UISegmentedControl;

@interface SUToggleAccessoryView : UIView {
    UISegmentedControl *_sectionControl;
}

@property(readonly) BOOL treatAsTableRow;

+ (float)defaultHeight;
+ (NSInteger)sectionControlStyle;

- (void)dealloc;
- (void)layoutSubviews;
- (id)sectionControl;
- (BOOL)treatAsTableRow;
- (void)updateWithPage:(id)arg1;

@end
