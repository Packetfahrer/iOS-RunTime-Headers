/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {
    <ABSimpleTextInputViewControllerDelegate> * _delegate;
    NSString * _placeholder;
    <ABStyleProvider> * _styleProvider;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABSimpleTextInputViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)placeholder;
- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;
- (void)save:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (id)stringValue;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateSaveButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end