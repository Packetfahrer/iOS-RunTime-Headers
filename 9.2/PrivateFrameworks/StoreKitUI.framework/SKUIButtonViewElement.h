/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIButtonViewElement : SKUIViewElement {
    BOOL  _autoIncrementCount;
    NSString * _badgeResourceName;
    BOOL  _bigHitButton;
    float  _bigHitSize;
    SKUIViewElementText * _buttonText;
    int  _buttonViewSubType;
    int  _buttonViewType;
    SKUIBuyButtonDescriptor * _buyButtonDescriptor;
    NSString * _confirmationText;
    long long  _dataPlaybackId;
    BOOL  _enabled;
    long long  _itemIdentifier;
    NSString * _nonToggledText;
    NSString * _playItemIdentifier;
    BOOL  _selected;
    BOOL  _showOnDemand;
    NSString * _sizeVariant;
    SKUIStoreIdentifier * _storeIdentifier;
    NSString * _toggleItemIdentfier;
    NSString * _toggleItemIdentifier;
    BOOL  _toggled;
    NSString * _toggledText;
    NSString * _variantIdentifier;
    IKDOMElement * _xml;
}

@property (nonatomic, readonly) SKUIImageViewElement *additionalButtonImage;
@property (nonatomic, readonly) BOOL autoIncrementCount;
@property (nonatomic, readonly) NSString *badgeResourceName;
@property (getter=isBigHitButton, nonatomic, readonly) BOOL bigHitButton;
@property (nonatomic, readonly) float bigHitSize;
@property (nonatomic, readonly) SKUIImageViewElement *buttonImage;
@property (nonatomic, readonly) SKUIViewElementText *buttonText;
@property (nonatomic, readonly) IKViewElementStyle *buttonTitleStyle;
@property (nonatomic, readonly) int buttonViewSubType;
@property (nonatomic, readonly) int buttonViewType;
@property (nonatomic, readonly) SKUIBuyButtonDescriptor *buyButtonDescriptor;
@property (nonatomic, readonly) NSString *confirmationText;
@property (nonatomic, readonly) long long dataPlaybackId;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *nonToggledText;
@property (nonatomic, readonly) NSString *playItemIdentifier;
@property (getter=isSelected, nonatomic, readonly) BOOL selected;
@property (nonatomic, readonly) BOOL showOnDemand;
@property (nonatomic, readonly) NSString *sizeVariant;
@property (nonatomic, readonly) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) BOOL toggled;
@property (nonatomic, readonly) NSString *toggledText;
@property (nonatomic, readonly) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)additionalButtonImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (BOOL)autoIncrementCount;
- (id)badgeResourceName;
- (float)bigHitSize;
- (id)buttonImage;
- (id)buttonText;
- (id)buttonTitleStyle;
- (int)buttonViewSubType;
- (int)buttonViewType;
- (id)buyButtonDescriptor;
- (id)confirmationText;
- (long long)dataPlaybackId;
- (void)dealloc;
- (id)description;
- (unsigned int)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isBigHitButton;
- (BOOL)isEnabled;
- (BOOL)isSelected;
- (BOOL)isToggled;
- (long long)itemIdentifier;
- (id)nonToggledText;
- (int)pageComponentType;
- (id)personalizationLibraryItems;
- (id)playItemIdentifier;
- (void)setToggled:(BOOL)arg1;
- (BOOL)showOnDemand;
- (id)sizeVariant;
- (id)storeIdentifier;
- (id)toggleItemIdentifier;
- (id)toggledText;
- (id)variantIdentifier;

@end
