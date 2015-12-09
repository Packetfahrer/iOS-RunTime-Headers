/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate> {
    unsigned long long  _suggestionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) unsigned long long suggestionIdentifier;
@property (readonly) Class superclass;

- (BOOL)cn_supportsNativeSorting;
- (id)description;
- (id)initWithSuggestionIdentifier:(unsigned long long)arg1;
- (id)sgContactMatchesWithSortOrder:(int)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4;
- (unsigned long long)suggestionIdentifier;

@end
