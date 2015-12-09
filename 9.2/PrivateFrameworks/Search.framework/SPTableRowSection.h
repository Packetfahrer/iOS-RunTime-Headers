/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPTableRowSection : SPSection <PRSTableRowSection, SearchUITableRowCardSection>

@property (nonatomic, readonly) <SearchUITableAlignmentSchema> *alignmentSchema;
@property (nonatomic, retain) <PRSAlignmentSchema> *alignment_schema;
@property (nonatomic, retain) NSURL *attribution_url;
@property (nonatomic) BOOL card_padding_bottom;
@property (nonatomic) BOOL card_padding_top;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasBottomPadding;
@property (nonatomic, readonly) BOOL hasTopPadding;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hideDivider;
@property (nonatomic) BOOL hide_divider;
@property (nonatomic, readonly) NSArray *punchoutOptions;
@property (nonatomic, readonly) NSString *punchoutPickerDismissLabel;
@property (nonatomic, readonly) NSString *punchoutPickerLabel;
@property (nonatomic, readonly) unsigned int rowType;
@property (nonatomic) int row_type;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tab_group_id;
@property (nonatomic, readonly, copy) NSString *tableID;
@property (nonatomic, retain) NSString *table_id;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSArray *value;
@property (nonatomic, readonly) NSArray *values;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

- (id)alignmentSchema;
- (unsigned int)rowType;
- (id)tabGroupID;
- (id)tableID;
- (id)values;

@end
