/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSArray, NSCalendarDate, NSString, NSURL;

@interface YTVideo : NSObject {
    NSString *_author;
    NSString *_category;
    NSCalendarDate *_dateAdded;
    NSCalendarDate *_dateUpdated;
    NSString *_id;
    NSURL *_infoURL;
    NSUInteger _maxRating;
    NSUInteger _minRating;
    NSUInteger _numberOfRatings;
    NSUInteger _numberOfViews;
    NSUInteger _rating;
    NSArray *_tags;
    NSURL *_thumbnailURL;
    NSString *_title;
    NSString *_videoDescription;
    NSArray *_videoReferences;
}

+ (void)_bookmarksDidChange;
+ (id)_bookmarksPath;
+ (void)_loadBookmarks;
+ (void)_saveBookmarks;
+ (void)addBookmarkForVideo:(id)arg1;
+ (id)bookmarkedVideos;
+ (void)disableNotifications;
+ (void)enableNotifications;
+ (void)removeBookmarkForVideo:(id)arg1;
+ (void)saveBookmarksIfNeeded;
+ (NSUInteger)thumbnailWidth;
+ (id)unsupportedVideoError;
+ (id)videoNotFoundError;

- (id)ID;
- (id)_archiveDictionary;
- (id)_initFromArchiveDictionary:(id)arg1;
- (void)_postVideoDidChange;
- (void)_thumbnailDidLoad;
- (double)age;
- (id)anyVideoReference;
- (id)author;
- (id)bestVideoReference;
- (id)category;
- (id)dateAdded;
- (id)dateAddedString;
- (id)dateUpdated;
- (void)dealloc;
- (id)description;
- (id)infoURL;
- (id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 minRating:(NSUInteger)arg12 maxRating:(NSUInteger)arg13 rating:(NSUInteger)arg14 numberOfRatings:(NSUInteger)arg15 numberOfViews:(NSUInteger)arg16;
- (BOOL)isBookmarked;
- (NSUInteger)maxRating;
- (NSUInteger)minRating;
- (NSUInteger)numberOfRatings;
- (NSUInteger)numberOfViews;
- (NSUInteger)rating;
- (id)shortID;
- (id)tags;
- (id)tagsString;
- (struct CGImage { }*)thumbnailLoadIfAbsent:(BOOL)arg1;
- (id)thumbnailURL;
- (id)title;
- (BOOL)updateWithTitle:(id)arg1 dateUpdated:(id)arg2 dateAdded:(id)arg3 videoReferences:(id)arg4 infoURL:(id)arg5 videoDescription:(id)arg6 category:(id)arg7 tags:(id)arg8 author:(id)arg9 thumbnailURL:(id)arg10 minRating:(NSUInteger)arg11 maxRating:(NSUInteger)arg12 rating:(NSUInteger)arg13 numberOfRatings:(NSUInteger)arg14 numberOfViews:(NSUInteger)arg15;
- (id)videoDescription;
- (id)videoReferenceForProfile:(NSInteger)arg1;

@end
