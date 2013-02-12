/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface DOMMouseEvent : DOMUIEvent {
     /* Encoded args for previous method: @12@0:4^{MouseEvent=^^?i{AtomicString={String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}}BBBBBB^{EventTarget}S{RefPtr<WebCore::EventTarget>=^{EventTarget}}Q{RefPtr<WebCore::Event>=^{Event}}{RefPtr<WebCore::DOMWindow>=^{DOMWindow}}ib1b1b1b1iiiiiiiiiiBSB{RefPtr<WebCore::EventTargetNode>=^{EventTargetNode}}{RefPtr<WebCore::Clipboard>=^{Clipboard}}}8 */
     /* Encoded args for previous method: ^{MouseEvent=^^?i{AtomicString={String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}}BBBBBB^{EventTarget}S{RefPtr<WebCore::EventTarget>=^{EventTarget}}Q{RefPtr<WebCore::Event>=^{Event}}{RefPtr<WebCore::DOMWindow>=^{DOMWindow}}ib1b1b1b1iiiiiiiiiiBSB{RefPtr<WebCore::EventTargetNode>=^{EventTargetNode}}{RefPtr<WebCore::Clipboard>=^{Clipboard}}}8@0:4 */
}

@property(retain,readonly) <DOMEventTarget> *relatedTarget;
@property(readonly) BOOL altKey;
@property(readonly) unsigned short button;
@property(readonly) NSInteger clientX;
@property(readonly) NSInteger clientY;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL metaKey;
@property(readonly) NSInteger screenX;
@property(readonly) NSInteger screenY;
@property(readonly) BOOL shiftKey;

+ (id)_wrapMouseEvent:(struct MouseEvent { int (**x1)(); NSInteger x2; struct AtomicString { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; struct EventTarget {} *x10; unsigned short x11; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_12_1_1; } x12; unsigned long long x13; struct RefPtr<WebCore::Event> { struct Event {} *x_14_1_1; } x14; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_15_1_1; } x15; NSInteger x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; NSInteger x26; NSInteger x27; NSInteger x28; NSInteger x29; NSInteger x30; void*x31; unsigned short x32; void*x33; struct RefPtr<WebCore::EventTargetNode> { struct EventTargetNode {} *x_34_1_1; } x34; struct RefPtr<WebCore::Clipboard> { struct Clipboard {} *x_35_1_1; } x35; }*)arg1;

- (struct MouseEvent { int (**x1)(); NSInteger x2; struct AtomicString { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; struct EventTarget {} *x10; unsigned short x11; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_12_1_1; } x12; unsigned long long x13; struct RefPtr<WebCore::Event> { struct Event {} *x_14_1_1; } x14; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_15_1_1; } x15; NSInteger x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; NSInteger x26; NSInteger x27; NSInteger x28; NSInteger x29; NSInteger x30; void*x31; unsigned short x32; void*x33; struct RefPtr<WebCore::EventTargetNode> { struct EventTargetNode {} *x_34_1_1; } x34; struct RefPtr<WebCore::Clipboard> { struct Clipboard {} *x_35_1_1; } x35; }*)_mouseEvent;
- (BOOL)altKey;
- (unsigned short)button;
- (NSInteger)clientX;
- (NSInteger)clientY;
- (BOOL)ctrlKey;
- (id)fromElement;
- (void)initMouseEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15;
- (void)initMouseEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(NSInteger)arg5 screenX:(NSInteger)arg6 screenY:(NSInteger)arg7 clientX:(NSInteger)arg8 clientY:(NSInteger)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
- (BOOL)metaKey;
- (NSInteger)offsetX;
- (NSInteger)offsetY;
- (id)relatedTarget;
- (NSInteger)screenX;
- (NSInteger)screenY;
- (BOOL)shiftKey;
- (id)toElement;
- (NSInteger)x;
- (NSInteger)y;

@end
