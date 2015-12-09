/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {
    NSMutableSet * _observingDefaults;
    NSCache * _valueCache;
}

- (void)_startObservingForDefaultKey:(id)arg1;
- (void)_stopObservingForDefaultKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)countryCode;
- (void)dealloc;
- (int)displayNameOrder;
- (void)flushCache;
- (id)init;
- (BOOL)isShortNameFormatEnabled;
- (int)newContactDisplayNameOrder;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setDisplayNameOrder:(int)arg1;
- (void)setShortNameFormat:(int)arg1;
- (void)setShortNameFormatEnabled:(BOOL)arg1;
- (void)setShortNameFormatPrefersNicknames:(BOOL)arg1;
- (int)shortNameFormat;
- (BOOL)shortNameFormatPrefersNicknames;
- (int)sortOrder;

@end
