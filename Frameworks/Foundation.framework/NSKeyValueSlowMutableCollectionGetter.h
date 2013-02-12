/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}

- (id)baseGetter;
- (id)baseSetter;
- (void)dealloc;
- (void)finalize;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;
- (BOOL)treatNilValuesLikeEmptyCollections;

@end
