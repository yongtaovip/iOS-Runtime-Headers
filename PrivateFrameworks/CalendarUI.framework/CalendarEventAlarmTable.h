/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class NSString;

@interface CalendarEventAlarmTable : UIPreferencesTable {
    NSInteger _alarmIdentifier;
    BOOL _customSelected;
    NSString *_customString;
}

- (void)_cellChecked:(id)arg1;
- (NSInteger)_presetIdentifierForRow:(NSInteger)arg1;
- (NSInteger)_rowForPresetIdentifier:(NSInteger)arg1;
- (BOOL)customSelected;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (BOOL)preferencesTable:(id)arg1 isRadioGroup:(NSInteger)arg2;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (NSInteger)presetIdentifier;
- (void)setCustomSelected:(BOOL)arg1;
- (void)setCustomString:(id)arg1;
- (void)setPresetIdentifier:(NSInteger)arg1;

@end
