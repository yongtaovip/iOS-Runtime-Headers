/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface KBSearchThread : NSThread {
    NSMutableArray *_done;
    NSMutableArray *_queue;
}

- (void)addSearch:(id)arg1;
- (void)cancelAll;
- (void)completeSearchOnMainThread:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)main;

@end
