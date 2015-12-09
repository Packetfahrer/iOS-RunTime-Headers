/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    NSXPCConnection * _connection;
    BOOL  _enforceDataLimits;
    BOOL  _enforcePrivacy;
    _CDInteractionPolicies * _policies;
}

@property BOOL enforceDataLimits;
@property BOOL enforcePrivacy;

+ (id)interactionRecorder;

- (void).cxx_destruct;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (unsigned int)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id*)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (BOOL)enforceDataLimits;
- (BOOL)enforcePrivacy;
- (id)initWithServiceName:(id)arg1;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id*)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)recordInteraction:(id)arg1;
- (BOOL)recordInteractions:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setEnforceDataLimits:(BOOL)arg1;
- (void)setEnforcePrivacy:(BOOL)arg1;

@end
