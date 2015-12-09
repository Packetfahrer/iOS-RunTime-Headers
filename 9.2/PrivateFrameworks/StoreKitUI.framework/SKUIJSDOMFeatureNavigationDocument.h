/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature> {
    IKAppContext * _appContext;
    NSString * _featureName;
    IKJSNavigationDocument * _jsNavigationDocument;
    SKUINavigationDocumentController * _navigationDocumentController;
    NSMutableArray * _stackItems;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUINavigationDocumentController *navigationDocumentController;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
+ (id)possibleFeatureNames;

- (void).cxx_destruct;
- (id)appContext;
- (void)clear;
- (id)documents;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)navigationDocumentController;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setNavigationDocumentController:(id)arg1;

@end
