/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPasswordDetailViewController : UITableViewController {
    BOOL  _hidesPassword;
    WBSSavedPassword * _savedPassword;
}

- (void).cxx_destruct;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)dealloc;
- (id)initWithSavedPassword:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end
