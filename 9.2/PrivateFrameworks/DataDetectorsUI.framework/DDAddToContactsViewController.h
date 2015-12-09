/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDAddToContactsViewController : UINavigationController <CNContactViewControllerDelegate, DDRemoteActionViewService> {
    DDAction * _action;
    CNContactViewController * _personViewController;
    <DDRemoteActionPresenter> * _proxy;
}

@property (retain) DDAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)alternateNameForContact:(id)arg1;

- (void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2;
- (id)action;
- (void)adaptForPresentationInPopover:(BOOL)arg1;
- (void)cancelPressed:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dealloc;
- (void)doneWithAddingContact;
- (void)prepareForAction:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setCancelButtonVisible:(BOOL)arg1;

@end
