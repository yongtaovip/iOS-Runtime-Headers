/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISItemInfo, ISStorePage, NSString;

@interface ISItem : NSObject <NSCopying> {
    ISItemInfo *_info;
    ISStorePage *_page;
    NSString *_title;
    NSUInteger _type;
    NSString *_unmodifiedTitle;
}

+ (id)_dictionaryForType:(NSUInteger)arg1;
+ (struct CGSize { float x1; float x2; })imageSizeForFormat:(NSUInteger)arg1;

- (id)artworkForFormat:(NSUInteger)arg1;
- (id)copyTitlesForPurchase;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)externalDownload;
- (id)firstArtworkForFormat:(NSUInteger)arg1;
- (id)info;
- (BOOL)isPurchaseable;
- (BOOL)isPurchased;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (BOOL)loadFromDictionary:(id)arg1 error:(id*)arg2;
- (id)page;
- (id)pageURL;
- (NSUInteger)pageURLType;
- (id)purchaseDescriptor;
- (void)setPage:(id)arg1;
- (void)setType:(NSUInteger)arg1;
- (id)title;
- (NSUInteger)type;
- (id)uniqueIdentifier;
- (id)unmodifiedTitle;

@end
