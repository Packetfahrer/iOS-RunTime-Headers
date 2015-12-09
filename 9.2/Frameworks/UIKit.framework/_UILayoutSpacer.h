/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport> {
    BOOL  _compatibilityGuideAllowsArchivingAsSubview;
    NSArray * _constraintsToRemoveAtRuntime;
    BOOL  _horizontal;
}

@property (setter=_setArchivedIdentifier:, nonatomic, copy) NSString *_archivedIdentifier;
@property (setter=_setCompatibilityGuideAllowsArchivingAsSubview:, nonatomic) BOOL _compatibilityGuideAllowsArchivingAsSubview;
@property (setter=_setConstraintsToRemoveAtRuntime:, nonatomic, copy) NSArray *_constraintsToRemoveAtRuntime;
@property (getter=_isHorizontal, setter=_setHorizontal:, nonatomic) BOOL _horizontal;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) float length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;

+ (id)_horizontalLayoutSpacer;
+ (id)_verticalLayoutSpacer;

- (void).cxx_destruct;
- (id)_archivedIdentifier;
- (BOOL)_compatibilityGuideAllowsArchivingAsSubview;
- (id)_constraintsToRemoveAtRuntime;
- (BOOL)_isHorizontal;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setArchivedIdentifier:(id)arg1;
- (void)_setCompatibilityGuideAllowsArchivingAsSubview:(BOOL)arg1;
- (void)_setConstraintsToRemoveAtRuntime:(id)arg1;
- (void)_setHorizontal:(BOOL)arg1;
- (void)_setUpCounterDimensionConstraint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)length;

@end
