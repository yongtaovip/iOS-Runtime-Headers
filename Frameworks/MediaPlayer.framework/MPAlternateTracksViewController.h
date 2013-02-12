/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UIPreferencesTable, UIProgressIndicator, UITextLabel, UIView;

@interface MPAlternateTracksViewController : MPViewController {
    UIView *_backgroundView;
    UITextLabel *_loadingLabel;
    UINavigationBar *_navigationBar;
    NSUInteger _previousTracks[2];
    UIProgressIndicator *_progressIndicator;
    NSUInteger _selectedTracks[2];
    UIPreferencesTable *_table;
}

- (void)_addLoadingUI;
- (id)_alternateTracks;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (id)_arrayForGroup:(NSInteger)arg1;
- (NSUInteger)_indexForGroup:(NSInteger)arg1;
- (void)_reloadData;
- (void)_removeLoadingUI;
- (void)_saveChanges;
- (id)_titleForTrack:(id)arg1;
- (NSUInteger)_typeForGroup:(NSInteger)arg1;
- (void)dealloc;
- (void)didChangeToOrientation:(NSInteger)arg1;
- (id)init;
- (void)loadView;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (float)preferencesTable:(id)arg1 heightForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 withProposedHeight:(float)arg4;
- (BOOL)preferencesTable:(id)arg1 isRadioGroup:(NSInteger)arg2;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 titleForGroup:(NSInteger)arg2;
- (void)tableRowSelected:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willChangeToOrientation:(NSInteger)arg1;

@end
