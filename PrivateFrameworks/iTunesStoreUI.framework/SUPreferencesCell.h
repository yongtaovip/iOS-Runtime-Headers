/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUCellContentView;

@interface SUPreferencesCell : UIPreferencesTableCell {
    unsigned int _fullWidthContent : 1;
    SUCellContentView *_contentView;
}

+ (id)cachedCell:(Class)arg1;

- (id)_automationID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })buttonBounds;
- (void)cancelBuyConfirmation:(BOOL)arg1;
- (id)contentView;
- (void)dealloc;
- (float)disclosureRightMargin;
- (void)layoutSubviews;
- (id)outlineColor;
- (id)priceButton;
- (void)removeFromSuperview;
- (void)setCellOutline:(NSInteger)arg1;
- (void)setContentIsFullWidth:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setImage:(id)arg1 forURL:(id)arg2;
- (void)setImageRef:(struct CGImage { }*)arg1 forURL:(id)arg2;
- (void)setShowDisclosure:(BOOL)arg1;
- (void)updateHighlightColors;

@end
