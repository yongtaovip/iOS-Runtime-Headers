/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteHashTable : NSHashTable {
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        struct auto_weak_callback_block { 
            struct auto_weak_callback_block {} *next; 
            int (*callback_function)(); 
            void *arg1; 
            void *arg2; 
        } block; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    NSUInteger capacity;
    NSUInteger count;
    NSUInteger mutations;
    NSUInteger options;
    } slice;
}

- (void)_initBlock;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (void)assign:(NSUInteger)arg1 key:(const void*)arg2;
- (Class)classForCoder;
- (id)copy;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (const void*)getItem:(const void*)arg1;
- (NSUInteger)getKeys:(void**)arg1;
- (NSUInteger)hash;
- (void)hashGrow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(NSUInteger)arg2;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)raiseCountUnderflowException;
- (void)rehash;
- (NSUInteger)rehashAround:(NSUInteger)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end
