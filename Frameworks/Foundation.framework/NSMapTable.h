/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)mapTableWithKeyOptions:(NSUInteger)arg1 valueOptions:(NSUInteger)arg2;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;

- (id)allKeys;
- (id)allValues;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerator;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (NSUInteger)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyOptions:(NSUInteger)arg1 valueOptions:(NSUInteger)arg2 capacity:(NSUInteger)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(NSUInteger)arg3;
- (id)keyEnumerator;
- (id)keyPointerFunctions;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableDictionary;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllItems;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valuePointerFunctions;

@end
