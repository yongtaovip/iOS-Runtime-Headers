/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UITiledView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _adjustsMaxTileCountDynamically;
    BOOL _allNewTilesNeeded;
    } _dirtyRect;
    BOOL _drawsGrid;
    } _firstTileSize;
    BOOL _inLayout;
    BOOL _isTilingEnabled;
    BOOL _logsTilingChanges;
    NSUInteger _maxTileCount;
    NSString *_minificationFilter;
    BOOL _positionsTilesFromOrigin;
    } _requiredDrawRect;
    NSMutableArray *_rows;
    BOOL _sizesTilesToFit;
    BOOL _tileDrawingEnabled;
    } _tileOrigin;
    } _tileSize;
    BOOL _tilesOpaque;
    NSMutableArray *_unusedTiles;
    } _visibleRect;
}

+ (Class)tileClass;

- (void)_addNeededTiles;
- (BOOL)_canDrawContent;
- (void)_createColumn:(BOOL)arg1;
- (void)_createRow:(BOOL)arg1;
- (id)_createTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_didScroll;
- (void)_invalidateTiles;
- (void)_layoutTiles;
- (void)_removeColumnAtIndex:(NSUInteger)arg1 cache:(BOOL)arg2;
- (NSUInteger)_removeLeastVisibleRowOrColumn:(BOOL)arg1;
- (void)_removeRowAtIndex:(NSUInteger)arg1 cache:(BOOL)arg2;
- (void)_removeTile:(id)arg1 cache:(BOOL)arg2;
- (void)_removeTilesIfNecessary;
- (void)_removeTilesIfNecessaryForRow:(BOOL)arg1;
- (NSUInteger)_tileCount;
- (void)_updateTileCache;
- (NSUInteger)_usedTileCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (void)accurateDirtyRects:(struct CGRect {}**)arg1 count:(NSUInteger*)arg2 clear:(BOOL)arg3;
- (NSUInteger)adjustedMaxTileCount;
- (void)dealloc;
- (BOOL)drawsGrid;
- (void)ensureDrawnRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)flushDirtyRects;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })gridRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTilingEnabled;
- (void)layoutBeforeDraw;
- (void)layoutSubviews;
- (BOOL)logsTilingChanges;
- (NSUInteger)maxTileCount;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)setAdjustsMaxTileCountDynamically:(BOOL)arg1;
- (void)setDrawsGrid:(BOOL)arg1;
- (void)setFirstTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLogsTilingChanges:(BOOL)arg1;
- (void)setMaxTileCount:(NSUInteger)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setPositionsTilesFromOrigin:(BOOL)arg1;
- (void)setSizesTilesToFit:(BOOL)arg1;
- (void)setTileDrawingEnabled:(BOOL)arg1;
- (void)setTileMinificationFilter:(id)arg1;
- (void)setTileOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)setTilingEnabled:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)shouldRepaintInPieces:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 region:(void*)arg2;
- (BOOL)tileDrawingEnabled;
- (struct CGPoint { float x1; float x2; })tileOrigin;
- (struct CGSize { float x1; float x2; })tileSize;
- (BOOL)tilesNeedDisplay;
- (BOOL)tilesOpaque;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;

@end
