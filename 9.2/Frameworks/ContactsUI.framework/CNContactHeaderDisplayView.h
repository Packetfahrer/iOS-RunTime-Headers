/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderDisplayView : CNContactHeaderView {
    NSString * _alternateName;
    BOOL  _centersPhotoAndLabels;
    CNContactFormatter * _contactFormatter;
    UILabel * _fakeTaglineAlignmentLabel;
    UIView * _markerView;
    NSString * _message;
    UILabel * _nameLabel;
    UIView * _personHeaderView;
    UILabel * _taglineLabel;
    NSDictionary * _taglineTextAttributes;
}

@property (nonatomic, retain) NSString *alternateName;
@property (nonatomic) BOOL centersPhotoAndLabels;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UIView *personHeaderView;
@property (nonatomic, readonly) float photoLabelSpacing;
@property (nonatomic, copy) NSDictionary *taglineTextAttributes;

+ (id)contactHeaderViewWithContact:(id)arg1 personHeaderView:(id)arg2;

- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (void)_updatePhotoView;
- (id)alternateName;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)centersPhotoAndLabels;
- (id)contactFormatter;
- (void)copy:(id)arg1;
- (void)disablePhotoTapGesture;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)initWithContact:(id)arg1 personHeaderView:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithContact:(id)arg1 personHeaderView:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 monogrammerStyle:(int)arg4;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)personHeaderView;
- (float)photoLabelSpacing;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCentersPhotoAndLabels:(BOOL)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;

@end
