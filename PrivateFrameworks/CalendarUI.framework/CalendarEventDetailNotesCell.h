/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UITextLabel;

@interface CalendarEventDetailNotesCell : CalendarEventDetailCell {
    UITextLabel *_notesTitleView;
    UITextLabel *_notesView;
}

+ (BOOL)shouldDisplayForEditModel:(id)arg1;

- (id)_notesTitleView;
- (id)_notesView;
- (void)dealloc;
- (id)initWithEditModel:(id)arg1;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (BOOL)setEditModel:(id)arg1;

@end
