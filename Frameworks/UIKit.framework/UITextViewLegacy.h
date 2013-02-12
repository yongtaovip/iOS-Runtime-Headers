/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, UIColor, UIDelayedAction, UIFont, UIView, UIWebDocumentView, WebCoreFrameBridge, WebFrame;

@interface UITextViewLegacy : UIScroller <UITextInputTraits> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    DOMHTMLElement *m_body;
    WebCoreFrameBridge *m_bridge;
    BOOL m_clearsSelectionOnBecomingFirstResponder;
    BOOL m_editable;
    UIFont *m_font;
    WebFrame *m_frame;
    BOOL m_handlingMouse;
    UIDelayedAction *m_longPressAction;
    NSInteger m_marginTop;
    void *m_mouseDownEvent;
    } m_mouseDownOffset;
    } m_mouseDownPoint;
    BOOL m_passMouseDownToOther;
    BOOL m_scrollOnMouseUp;
    } m_selectedRange;
    BOOL m_selecting;
    UIDelayedAction *m_selectionTimer;
    BOOL m_sentMouseDown;
    NSInteger m_textAlignment;
    UIColor *m_textColor;
    UIView *m_topAccessoryView;
    UIWebDocumentView *m_webView;
}

@property(retain) UIFont *font;
@property(copy) NSString *text;
@property(retain) UIColor *textColor;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property(getter=isEditable) BOOL editable;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property _NSRange selectedRange;
@property NSInteger textAlignment;

- (id)_scriptingInfo;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)commonInit;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)contentAsHTMLString;
- (void)dealloc;
- (void)ensureSelection;
- (id)font;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditable;
- (NSInteger)keyboardInput:(id)arg1 positionForAutocorrection:(id)arg2;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (NSInteger)marginTop;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)performBecomeEditableTasks;
- (BOOL)pointInTopAccessoryView:(struct CGPoint { float x1; float x2; })arg1;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (BOOL)resignFirstResponder;
- (void)scrollRangeToVisible:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectedRange;
- (void)setContentToHTMLString:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMarginTop:(NSInteger)arg1;
- (void)setSelectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTopAccessoryView:(id)arg1;
- (id)styleString;
- (id)text;
- (NSInteger)textAlignment;
- (id)textColor;
- (id)textInputTraits;
- (void)textLoupeTimerAction;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)topAccessoryView;
- (void)updateWebViewObjects;
- (void)viewDidMoveToSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (void)webViewDidChange:(id)arg1;

@end
