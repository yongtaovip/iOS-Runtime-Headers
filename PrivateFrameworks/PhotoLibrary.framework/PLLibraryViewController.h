/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPhotoLibrary;

@interface PLLibraryViewController : UIViewController {
    struct { 
        unsigned int albumsInvalid : 1; 
        unsigned int visible : 1; 
        unsigned int reserved : 30; 
    PLPhotoLibrary *_library;
    } _libraryControllerFlags;
}

- (id)_library;
- (void)_updateAlbumsIfNecessary;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (void)iTunesSyncRequestedStart;
- (id)init;
- (void)libraryView:(id)arg1 didSelectAlbum:(id)arg2;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
