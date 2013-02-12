/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIItemControl>, <UISelectionControl>, NSMutableArray;

@interface UISelectionPeripheral : UIPickerView <UIFormPeripheral, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSMutableArray *_cachedItems;
    <UISelectionControl> *_control;
    NSUInteger _firstSelectedIndex;
    NSInteger _orientation;
    <UIItemControl> *_selectedItemControl;
}

@property(retain) <UIItemControl> *_selectedItemControl; /* unknown property attribute: V_selectedItemControl */
@property(retain) <UISelectionControl> *_control; /* unknown property attribute: V_control */

+ (BOOL)isUniqueForEachFormControl;

- (id)_control;
- (id)_selectedItemControl;
- (void)dealloc;
- (void)endEditing;
- (id)initFormPeripheral;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSInteger)orientation;
- (NSInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSInteger)arg2;
- (void)pickerView:(id)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3 checked:(BOOL)arg4;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(NSInteger)arg2;
- (void)pickerViewLoaded:(id)arg1;
- (void)setFormControl:(id)arg1;
- (void)set_control:(id)arg1;
- (void)set_selectedItemControl:(id)arg1;
- (void)willChangeToFormControl:(id)arg1;

@end
