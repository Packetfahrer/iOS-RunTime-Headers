/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    NSArray * _predicates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *predicates;
@property (readonly) Class superclass;

+ (id)predicateMatchingPredicates:(id)arg1;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicates;
- (id)protobufferEncodableObject;

@end