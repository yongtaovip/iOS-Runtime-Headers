/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISRequest, ISStorePage, NSString, NSURL;

@interface ISPartner : NSObject {
    BOOL _active;
    NSString *_headerValue;
    NSString *_identifier;
    NSURL *_imageURL;
    NSString *_name;
    ISStorePage *_page;
    ISRequest *_pingRequest;
    NSURL *_selectedImageURL;
}

- (struct CGImage { }*)_imageForURL:(id)arg1;
- (BOOL)active;
- (BOOL)canBecomeActive;
- (id)createPage;
- (void)createPageIfNeeded;
- (void)dealloc;
- (id)headerValue;
- (id)identifier;
- (struct CGImage { }*)image;
- (void)loadFromDictionary:(id)arg1;
- (id)name;
- (id)page;
- (void)request:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (struct CGImage { }*)selectedImage;
- (void)setActive:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPage:(id)arg1;

@end
