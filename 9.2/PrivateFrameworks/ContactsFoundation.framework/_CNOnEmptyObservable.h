/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNOnEmptyObservable : CNObservable {
    <CNObservable> * _nextObservable;
    <CNObservable> * _observable;
    BOOL  _observableIsEmpty;
}

- (void)dealloc;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;
- (BOOL)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribe:(id)arg1;
- (id)subscribeNextObservable:(id)arg1;

@end
