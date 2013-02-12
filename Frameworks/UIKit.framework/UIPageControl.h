/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIPageControl : UIControl {
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    NSInteger _currentPage;
    NSInteger _displayedPage;
    NSMutableArray *_indicators;
    } _pageControlFlags;
}

@property NSInteger currentPage;
@property BOOL defersCurrentPageDisplay;
@property BOOL hidesForSinglePage;
@property NSInteger numberOfPages;

- (void)_commonPageControlInit;
- (NSInteger)_displayedPage;
- (id)_pageIndicatorCurrentImage;
- (id)_pageIndicatorImage;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setCurrentPage:(NSInteger)arg1;
- (void)_setDisplayedPage:(NSInteger)arg1;
- (void)_updateCurrentPageDisplay;
- (NSInteger)currentPage;
- (void)dealloc;
- (BOOL)defersCurrentPageDisplay;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)hidesForSinglePage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)numberOfPages;
- (void)setCurrentPage:(NSInteger)arg1;
- (void)setDefersCurrentPageDisplay:(BOOL)arg1;
- (void)setHidesForSinglePage:(BOOL)arg1;
- (void)setNumberOfPages:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })sizeForNumberOfPages:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateCurrentPageDisplay;

@end
