/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayer, NSMutableArray;

@interface FigCaptionRowLayer : CALayer {
    NSMutableArray *_commandArray;
    BOOL _dirty;
    FigCaptionLayer *_masterCaptionLayer;
    BOOL _needsDisplay;
    BOOL _needsRoll;
    BOOL _needsRollOff;
    NSInteger _row;
}

- (void)dealloc;
- (void)displayRowWithCommandData:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)endUpdate;
- (void)eraseRow;

@end
