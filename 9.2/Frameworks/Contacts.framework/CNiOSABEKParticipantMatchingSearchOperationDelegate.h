/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABSearchOperationDelegate> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_completeWithRecord:(void*)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
