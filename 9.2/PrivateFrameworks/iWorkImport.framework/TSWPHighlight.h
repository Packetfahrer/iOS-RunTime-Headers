/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHighlight : TSPObject <TSDAnnotationHosting, TSKDocumentObject, TSPCopying> {
    TSDCommentStorage * _commentStorage;
    TSWPStorage * _parentStorage;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, readonly) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) NSString *changeTrackingContentFormatString;
@property (nonatomic, readonly) NSString *changeTrackingContentString;
@property (nonatomic, readonly) NSString *changeTrackingTitleString;
@property (nonatomic, retain) TSDCommentStorage *commentStorage;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <TSKModel> *hostingModel;
@property (nonatomic, retain) TSWPStorage *parentStorage;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;

+ (id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)commentStorage;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)hostingModel;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2;
- (BOOL)isCommentEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct HighlightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCommentStorage:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
