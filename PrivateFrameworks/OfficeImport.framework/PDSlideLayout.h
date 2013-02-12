/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
    BOOL mShowMasterPlaceholderAnimations;
    NSInteger mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

- (void)dealloc;
- (id)defaultTheme;
- (id)initWithSlideMaster:(id)arg1;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (void)setShowMasterPlaceholderAnimations:(BOOL)arg1;
- (void)setSlideLayoutType:(NSInteger)arg1;
- (void)setSlideMaster:(id)arg1;
- (BOOL)showMasterPlaceholderAnimations;
- (NSInteger)slideLayoutType;
- (id)slideMaster;

@end
