/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
    NSString *_key;
    SEL _selector;
    NSString *_selectorName;
    NSUInteger _sortDescriptorFlags;
}

+ (id)_defaultSelectorName;
+ (void)initialize;

- (BOOL)_isEqualToSortDescriptor:(id)arg1;
- (id)_selectorName;
- (void)_setAscending:(BOOL)arg1;
- (void)_setKey:(id)arg1;
- (void)_setSelectorName:(id)arg1;
- (BOOL)ascending;
- (NSInteger)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)reversedSortDescriptor;
- (SEL)selector;

@end
