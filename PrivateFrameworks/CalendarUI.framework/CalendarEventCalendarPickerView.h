/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarModel, CalendarTableController;

@interface CalendarEventCalendarPickerView : UIPreferencesTable <CalendarView> {
    CalendarModel *_model;
    CalendarTableController *_tableController;
}

+ (id)navigationTitleForModel:(id)arg1;

- (void)_calendarsChanged:(id)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)calendarTableController:(id)arg1 calendarSelected:(void*)arg2;
- (void)cleanUp;
- (void)dealloc;
- (void)finishedTransitionIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setModel:(id)arg1;

@end
