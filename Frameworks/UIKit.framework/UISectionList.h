/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSSet, UISectionIndex, UISectionTable;

@interface UISectionList : UIView {
    struct { 
        unsigned int nonIndexedTitlesShownFirst : 1; 
    UISectionIndex *_index;
    NSSet *_indexTitlesAsSet;
    float _listWidth;
    NSInteger _sectionCount;
    } _sectionListFlags;
    UISectionTable *_table;
    NSMutableArray *_titles;
}

+ (float)defaultIndexWidth;

- (id)_indexTitlesAsSet;
- (void)_languageChanged;
- (void)_setIndexVisible:(BOOL)arg1;
- (id)allTitles;
- (NSInteger)closestSectionForTitle:(id)arg1;
- (void)dealloc;
- (id)indexTitles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showSectionIndex:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)marginForIndexControl:(BOOL)arg1;
- (void)noteIndexTitlesDidChange;
- (NSInteger)numberOfSections;
- (void)reloadData;
- (void)setAllowsScrollIndicators:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNonIndexedTitlesShownLast:(BOOL)arg1;
- (void)setSectionListStyle:(NSInteger)arg1;
- (void)setShouldHideHeaderInShortLists:(BOOL)arg1;
- (BOOL)showsSectionHeaders;
- (BOOL)showsSectionIndex;
- (id)table;
- (id)titleForSection:(NSInteger)arg1;

@end
