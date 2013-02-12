/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISStorePage, SUToggleAccessoryView, UISegmentedControl;

@interface SUStorePageViewController : SUPreferencesTableController {
    unsigned int _dontTreatAccessoryViewAsRow : 1;
    unsigned int _ignoreSelectionChange : 1;
    NSUInteger _fallbackType;
    NSUInteger _ignoreReloadCount;
    NSUInteger _lastSelectedRow;
    NSUInteger _loadMoreIndex;
    ISStorePage *_page;
    struct __CFDictionary { } *_plainTextItemHeights;
    UISegmentedControl *_sectionControl;
    SUToggleAccessoryView *_toggleView;
    float _widestPriceButton;
}

+ (id)createViewControllerForItem:(id)arg1;
+ (id)createViewControllerForPageURLType:(NSUInteger)arg1;
+ (id)createViewControllerForURL:(id)arg1;

- (id)_createCellForItem:(id)arg1 tableRow:(NSInteger)arg2 group:(NSInteger)arg3 groupRow:(NSInteger)arg4;
- (void)_loadPlainTextItemHeights;
- (float)_table:(id)arg1 heightForTableRow:(NSInteger)arg2 group:(NSInteger)arg3 groupRow:(NSInteger)arg4;
- (float)_widestPriceButtonForPage:(id)arg1;
- (id)accessoryView;
- (void)bannerView:(id)arg1 didSelectURL:(id)arg2 forPageURLType:(NSUInteger)arg3;
- (void)beginIgnoringReloads;
- (BOOL)canSelectItem:(id)arg1;
- (void)cellRemovedFromSuperview:(id)arg1;
- (void)configurePage:(id)arg1;
- (Class)contentClassForItem:(id)arg1;
- (void)contentView:(id)arg1 wantsToPurchaseItem:(id)arg2;
- (id)createCellForItem:(id)arg1 withRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (id)createInlineToggleView;
- (id)createViewControllerForRow:(NSInteger)arg1;
- (void)dealloc;
- (BOOL)disclosureClickableForItem:(id)arg1;
- (void)endIgnoringReloads;
- (NSInteger)expectedPageClient;
- (void)followLinkForRow:(NSInteger)arg1 item:(id)arg2;
- (BOOL)handleSelectionOfRow:(NSInteger)arg1;
- (float)heightForGroup:(NSInteger)arg1 withTitle:(id)arg2 showDoubleClickHint:(BOOL)arg3;
- (float)heightForItem:(id)arg1 atPosition:(struct { NSUInteger x1; NSUInteger x2; })arg2;
- (id)historyItem;
- (void)imageCache:(id)arg1 loadedImage:(struct CGImage { }*)arg2 forURL:(id)arg3 fetchTag:(NSInteger)arg4;
- (void)imageCacheDidCommitBatchRequests:(id)arg1;
- (id)init;
- (BOOL)isIgnoringReloads;
- (void)makeLoadingView;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (BOOL)page:(id)arg1 shouldShowTermsAndConditionsForItems:(id)arg2;
- (id)page;
- (void)pageDidFetchContent:(id)arg1 error:(id)arg2;
- (void)pageDidRefresh:(id)arg1;
- (void)pageWillFetchContent:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (float)preferencesTable:(id)arg1 heightForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 withProposedHeight:(float)arg4;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)reloadAfterPageDidLoad;
- (BOOL)reloadData;
- (void)reloadMinimumNetworkType;
- (BOOL)reloadPage;
- (void)segmentedControl:(id)arg1 selectedSegmentChanged:(NSInteger)arg2;
- (void)setHistoryItem:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)setPage:(id)arg1;
- (void)setPushingAsHistoryItem:(BOOL)arg1;
- (BOOL)shouldCancelPageOnHide;
- (BOOL)shouldPushControllerForRow:(NSInteger)arg1;
- (BOOL)showDisclosureForItem:(id)arg1;
- (BOOL)showDoubleClickHintForGroup:(NSInteger)arg1;
- (BOOL)showPriceButtonForItem:(id)arg1;
- (BOOL)strechPlainTextItemsToFit;
- (void)suspend:(BOOL)arg1;
- (BOOL)table:(id)arg1 canSelectRow:(NSInteger)arg2;
- (BOOL)table:(id)arg1 disclosureClickableForRow:(NSInteger)arg2;
- (void)table:(id)arg1 disclosureClickedForRow:(NSInteger)arg2;
- (BOOL)table:(id)arg1 showDisclosureForRow:(NSInteger)arg2;
- (void)tableDidLoadVisibleCells:(id)arg1 nextPredictedRevealedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)tableRowSelected:(id)arg1;
- (void)tableWillLoadVisibleCells:(id)arg1;
- (float)topGroupHeight;
- (void)updateAccessoryView;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
