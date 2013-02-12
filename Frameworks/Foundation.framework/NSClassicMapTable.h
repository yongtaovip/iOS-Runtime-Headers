/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicMapTable : NSMapTable {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
        void *notAKeyMarker; 
    struct { 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _keyCallBacks;
    struct __CFDictionary { } *_table;
    } _valueCallBacks;
}

+ (void)initialize;

- (id)allKeys;
- (id)allValues;
- (id)copy;
- (NSUInteger)count;
- (void)dealloc;
- (id)description;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (NSUInteger)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)objectForKey:(id)arg1;
- (void)removeAllItems;
- (void)removeObjectForKey:(id)arg1;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
