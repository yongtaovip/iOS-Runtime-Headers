/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, UINavigationBar, UIProgressIndicator, UITable, UITextLabel;

@interface PLMobileMeView : UIView {
    NSArray *_albums;
    id _delegate;
    UITextLabel *_label;
    UINavigationBar *_navBar;
    UIProgressIndicator *_progress;
    UITable *_table;
}

- (void)_setupLabelWithString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (void)setAlbums:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3 reusing:(id)arg4;
- (void)tableSelectionDidChange:(id)arg1;

@end
