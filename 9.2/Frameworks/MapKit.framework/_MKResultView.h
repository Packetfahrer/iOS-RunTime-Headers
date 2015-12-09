/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKResultView : UIView <MKLocationManagerObserver> {
    BOOL  _alwaysUsesBusinessLayout;
    <_MKResultViewDelegate> * _delegate;
    double  _fallbackDistance;
    int  _iconFormat;
    UIImageView * _imageView;
    int  _layoutType;
    MKLocationManager * _locManager;
    NSArray * _mapItems;
    UILabel * _nameLabel;
    NSString * _primaryLabelText;
    UIColor * _primaryTextColor;
    NSTimer * _refLocationTimer;
    CLLocation * _referenceLocation;
    NSMutableArray * _resultConstraints;
    UILabel * _secondaryLabel;
    NSString * _secondaryLabelText;
    UIColor * _secondaryTextColor;
    BOOL  _selected;
    BOOL  _showsDistance;
    UILabel * _tertiaryLabel;
    BOOL  _useSpotlightVibrancy;
    <_MKResultViewDelegate> * delegate;
}

@property (nonatomic) BOOL alwaysUsesBusinessLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MKResultViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fallbackDistance;
@property (readonly) unsigned int hash;
@property (nonatomic) int iconFormat;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSArray *mapItems;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, readonly) float preferredHeight;
@property (nonatomic, retain) NSString *primaryLabelText;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) CLLocation *referenceLocation;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) NSString *secondaryLabelText;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showsDistance;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *tertiaryLabel;
@property (nonatomic) BOOL useSpotlightVibrancy;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_cancelReferenceLocationTimer;
- (void)_contentSizeCategoryDidChange;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (float)_expectedHeightForLabels;
- (void)_fireReferenceLocationTimer;
- (struct CGSize { float x1; float x2; })_imageSize;
- (id)_labelWithFontSize:(float)arg1;
- (void)_locationApprovalDidChange;
- (unsigned int)_maxNameLengthForEndingString:(id)arg1;
- (unsigned int)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (void)_updateColors;
- (void)_updateFontSizing;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)addLabelIfNecessary:(id)arg1;
- (BOOL)alwaysUsesBusinessLayout;
- (void)commonInit;
- (void)dealloc;
- (id)delegate;
- (double)fallbackDistance;
- (void)handleTap:(id)arg1;
- (int)iconFormat;
- (id)imageView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 highlightsOnTouch:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapItems;
- (id)nameLabel;
- (float)preferredHeight;
- (id)primaryLabelText;
- (id)primaryTextColor;
- (id)referenceLocation;
- (id)secondaryLabel;
- (id)secondaryLabelText;
- (id)secondaryTextColor;
- (BOOL)selected;
- (void)setAlwaysUsesBusinessLayout:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFallbackDistance:(double)arg1;
- (void)setIconFormat:(int)arg1;
- (void)setImageView:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItems:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setPrimaryLabelText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setReferenceLocation:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryLabelText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowsDistance:(BOOL)arg1;
- (void)setTertiaryLabel:(id)arg1;
- (void)setUseSpotlightVibrancy:(BOOL)arg1;
- (BOOL)showsDistance;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tertiaryLabel;
- (void)updateConstraints;
- (void)updateImageView;
- (void)updateLayout;
- (void)updateSubviews;
- (BOOL)useSpotlightVibrancy;

@end