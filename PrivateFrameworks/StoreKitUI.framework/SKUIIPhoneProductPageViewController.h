/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIIPhoneProductPageDelegate>, ACAccountStore, NSOperationQueue, NSURL, NSURLRequest, SKUIFacebookLikeStatus, SKUIIncompatibleAppViewController, SKUIItem, SKUILoadProductPageOperation, SKUIMetricsController, SKUINetworkErrorViewController, SKUIProductPage, SKUIProductPageDetailsViewController, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderViewController, SKUIProductPageReviewsViewController, SKUISwooshArrayViewController, SSMetricsPageEvent, UIViewController<SKUIProductPageChildViewController>;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate> {
    ACAccountStore *_accountStore;
    UIViewController<SKUIProductPageChildViewController> *_childViewController;
    <SKUIIPhoneProductPageDelegate> *_delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    SKUINetworkErrorViewController *_errorViewController;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SKUIItem *_item;
    SSMetricsPageEvent *_lastPageEvent;
    SKUILoadProductPageOperation *_loadOperation;
    SKUIProductPagePlaceholderViewController *_loadingViewController;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIProductPagePlaceholderViewController *_relatedPlaceholderViewController;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    int _sectionIndex;
    NSURLRequest *_urlRequest;
    BOOL _wantsActivityViewController;
}

@property(readonly) NSURL * URL;
@property <SKUIIPhoneProductPageDelegate> * delegate;
@property(readonly) SKUIItem * item;
@property(readonly) SKUIProductPage * productPage;

- (void).cxx_destruct;
- (id)URL;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_animateAddToWishlist;
- (id)_detailsViewController;
- (id)_headerViewController;
- (id)_initSKUIIPhoneProductPageViewController;
- (void)_invalidateChildViewControllers;
- (BOOL)_isIncompatibleItem;
- (id)_loadingViewController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_presentHTMLProductPage;
- (id)_relatedPlaceholderViewController;
- (id)_relatedViewController;
- (void)_reloadChildViewControllers;
- (void)_reloadFacebookLikeStatus;
- (id)_reviewsViewController;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_setFacebookLikeStatus:(id)arg1;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (void)_showActivityViewController;
- (void)_showError:(id)arg1;
- (id)_viewControllerForSectionIndex:(unsigned int)arg1;
- (id)activeMetricsController;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)item;
- (void)loadView;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)productPage;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id)arg2;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (struct CGPoint { float x1; float x2; })topContentOffset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end