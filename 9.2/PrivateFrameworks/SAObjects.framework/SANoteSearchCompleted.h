/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteSearchCompleted : SABaseCommand <SAServerBoundCommand> {
    NSArray * _results;
}

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *notes;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notes;
- (id)results;
- (void)setNotes:(id)arg1;
- (void)setResults:(id)arg1;

@end
