/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem> {
    WBSParsecImageRepresentation * _imageRepresentation;
    NSString * _label;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)schema;

- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)label;
- (id)parsecDomainIdentifier;
- (id)url;

@end
