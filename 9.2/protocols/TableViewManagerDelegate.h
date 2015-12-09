/* Generated by RuntimeBrowser.
 */

@protocol TableViewManagerDelegate

@optional

- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1;
- (void)buttonTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forButtonIndex:(unsigned int)arg2;
- (void)commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)isRepresentedObject:(id)arg1 identicalToRepresentedObject:(id)arg2;
- (void)segmentedControlTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forSegmentedControlIndex:(int)arg2 selectedSegment:(int)arg3;
- (void)selectedDateChangedInCellAtIndexPath:(NSIndexPath *)arg1 forDatePickerIndex:(unsigned int)arg2 withDate:(NSDate *)arg3;
- (BOOL)shouldChangeTextField:(UITextField *)arg1 atIndexPath:(NSIndexPath *)arg2 forTextIndex:(unsigned int)arg3 toString:(NSString *)arg4;
- (BOOL)shouldHandleReturnForTextField:(UITextField *)arg1 atIndexPath:(NSIndexPath *)arg2 forTextIndex:(unsigned int)arg3;
- (BOOL)shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (void)switchTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (void)textFieldDidChangeAtIndexPath:(NSIndexPath *)arg1;
- (void)textFieldDidEndEditingAtIndexPath:(NSIndexPath *)arg1;
- (void)touchInCellAtIndexPath:(NSIndexPath *)arg1;
- (id)valueForItemOfType:(NSString *)arg1 atTypeIndex:(unsigned int)arg2 inCellAtIndexPath:(NSIndexPath *)arg3;
- (id)valueForItemOfType:(NSString *)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;

@end
