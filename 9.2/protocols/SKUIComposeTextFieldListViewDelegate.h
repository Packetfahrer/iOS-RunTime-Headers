/* Generated by RuntimeBrowser.
 */

@protocol SKUIComposeTextFieldListViewDelegate <NSObject>

@required

- (int)numberOfColumnsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (int)numberOfFieldsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (SKUIComposeTextFieldConfiguration *)textFieldList:(SKUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(unsigned int)arg2;

@optional

- (void)textFieldListValidityDidChange:(SKUIComposeTextFieldListView *)arg1;
- (void)textFieldListValuesDidChange:(SKUIComposeTextFieldListView *)arg1;

@end
