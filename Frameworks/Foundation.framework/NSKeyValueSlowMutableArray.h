/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {
    BOOL _padding[3];
    BOOL _treatNilValuesLikeEmptyArrays;
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
}

+ (struct { NSUInteger x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)addObject:(id)arg1;
- (NSUInteger)count;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;

@end
