/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKOverlayViewInternal;

@interface MKOverlayView : UIView {
    MKOverlayViewInternal *_internal;
}

@property(readonly) NSArray *annotationViews;

- (void)_addPinToCache:(id)arg1;
- (id)_allOverlayItems;
- (id)_bubble;
- (id)_bubbleForCalculation;
- (struct CGPoint { float x1; float x2; })_centerLongLat;
- (void)_clearPendingSearchResults;
- (void)_clearPin:(id)arg1;
- (void)_clearSearchResult:(id)arg1;
- (void)_clickedBubbleButton;
- (void)_clickedStreetViewButton;
- (id)_createPinWithSearchResult:(id)arg1;
- (id)_createPins;
- (id)_createPinsFromSearchResults:(id)arg1;
- (id)_distanceSortedVisiblePinsFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_dropPin;
- (NSInteger)_indexToInsertResultWithDistance:(double)arg1 distanceDictionary:(id)arg2 sortedArray:(id)arg3;
- (struct CGSize { float x1; float x2; })_longLatSpan;
- (id)_overlayItemForBubbleAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (BOOL)_pinAndBubbleRectForPin:(id)arg1 fitsInVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 bubbleFrameShouldFit:(BOOL)arg3;
- (id)_pinForSearchResult:(id)arg1;
- (BOOL)_pinPositionAvailableAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_removeBubbleWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_removeBubbleWithAnimation:(BOOL)arg1;
- (void)_resetUserSelectedPin;
- (void)_scrollToBubble;
- (void)_setLevelView:(id)arg1;
- (void)_setShowingTransitCallouts:(BOOL)arg1;
- (void)_setTransitCalloutAlphas:(float)arg1;
- (void)_showBubbleForOverlayItem:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateGeocodeAndStreetViewForPin:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)_updateGeocodeForPin:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)_updatePin:(id)arg1 location:(struct CGPoint { float x1; float x2; })arg2 withLevelView:(id)arg3;
- (void)_updatePinTypeForPin:(id)arg1;
- (void)_updateStreetViewForPin:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)_updateTransitCalloutsDuringAnimation:(BOOL)arg1;
- (id)_visibleElementsWithCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 elementIsPin:(BOOL)arg3 includeBubble:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (struct CGSize { float x1; float x2; })accessoryPadding;
- (void)addSearchResults:(id)arg1 selectSearchResult:(id)arg2;
- (void)annotationViewWasAdded:(id)arg1;
- (void)annotationViewWasRemoved:(id)arg1;
- (id)annotationViews;
- (struct CGPoint { float x1; float x2; })availablePinLongLatFromCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 withLevelView:(id)arg2;
- (id)bubblePin;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)cancelBubbleMouseTracking;
- (BOOL)checkHandlingDragsFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearPinForSearchResult:(id)arg1;
- (void)clearSearchResultPins;
- (void)clearSearchResultPinsExcluding:(id)arg1;
- (void)dealloc;
- (BOOL)dropPinsWithLevelView:(id)arg1 animate:(BOOL)arg2;
- (BOOL)hasPendingAnimations;
- (void)hideUserPositionInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertAnnotationView:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)isAnimationsEnabled;
- (BOOL)isShowingUserPositionInfo;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)panoramaInfoReturnedForObject:(id)arg1;
- (void)panoramaInfoReturnedForObjects:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinAndBubbleRectForSearchResult:(id)arg1;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (void)pinDidLift:(id)arg1;
- (void)removeAnnotationView:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (void)resetBubble;
- (id)searchResultForPinAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)searchResultPins;
- (void)searchResultReverseGeocoded:(id)arg1;
- (id)searchResultToSelect;
- (void)selectPendingSearchResultAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2;
- (void)selectSearchResultNearestLastSelection;
- (void)selectSearchResultNearestLocation:(id)arg1;
- (id)selectedSearchResult;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (void)setBubbleOverlayItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)setSearchResultToSelect:(id)arg1;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)setSelectedSearchResult:(id)arg1;
- (void)setUserSelectedOverlayItem:(id)arg1;
- (void)showBubbleAfterScroll;
- (void)showUserPositionInfoAtLongLat:(struct CGPoint { float x1; float x2; })arg1 withLevelView:(id)arg2 YOffset:(float)arg3 animate:(BOOL)arg4;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (void)updateCountdowns;
- (void)updateSearchResultPinsWithNewResults:(id)arg1 mapLevelView:(id)arg2;
- (id)userSelectedPin;
- (id)visiblePinsWithCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 includeBubble:(BOOL)arg3;
- (id)visibleResultsWithCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 includeBubble:(BOOL)arg3;

@end
