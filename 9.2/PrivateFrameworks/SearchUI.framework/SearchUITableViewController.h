/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableViewController : UITableViewController <SearchUICardViewController> {
    <SearchUIViewControllerDelegate> * _searchUICardViewControllerDelegate;
    <SearchUIViewControllerDelegate> * _searchUIViewControllerDelegate;
    unsigned int  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SearchUIViewControllerDelegate> *searchUICardViewControllerDelegate;
@property (nonatomic) <SearchUIViewControllerDelegate> *searchUIViewControllerDelegate;
@property unsigned int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned int)arg1;
- (id)searchUICardViewControllerDelegate;
- (id)searchUIViewControllerDelegate;
- (void)setSearchUICardViewControllerDelegate:(id)arg1;
- (void)setSearchUIViewControllerDelegate:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end