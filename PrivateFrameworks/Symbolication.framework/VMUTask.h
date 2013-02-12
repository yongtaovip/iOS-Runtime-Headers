/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class <VMUMemory>, NSArray, VMUMachTaskContainer;

@interface VMUTask : NSObject {
    NSArray *_headers;
    BOOL _isTranslated;
    VMUMachTaskContainer *_machTaskContainer;
    <VMUMemory> *_memory;
}

+ (id)findDyldHeaderInMemory:(id)arg1 address:(unsigned long long)arg2;
+ (BOOL)pidIsTranslated:(NSInteger)arg1;
+ (id)taskWithMachTaskContainer:(id)arg1;

- (void)dealloc;
- (id)headers;
- (id)initWithMachTaskContainer:(id)arg1;
- (BOOL)isTranslated;
- (id)memory;
- (NSInteger)pid;
- (NSUInteger)task;

@end
