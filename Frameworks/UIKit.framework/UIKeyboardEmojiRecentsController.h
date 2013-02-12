/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardEmojiController>, NSMutableArray, NSMutableDictionary;

@interface UIKeyboardEmojiRecentsController : NSObject {
    <UIKeyboardEmojiController> *_controller;
    NSInteger _currentSequence;
    NSMutableArray *_recents;
    NSMutableDictionary *_usageHistory;
}

- (void)clearAncientHistory;
- (void)dealloc;
- (id)defaultsDictionary;
- (void)emojiUsed:(id)arg1;
- (id)initWithController:(id)arg1;
- (BOOL)isAncientSequence:(NSInteger)arg1;
- (void)readDefaultsDictionary:(id)arg1;
- (id)recents;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(NSInteger)arg1;

@end
