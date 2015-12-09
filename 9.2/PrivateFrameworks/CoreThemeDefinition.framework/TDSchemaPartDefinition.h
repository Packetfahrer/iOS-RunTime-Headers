/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSchemaPartDefinition : NSManagedObject {
    unsigned int  partFeatures;
    CUIImage * previewImage;
    NSArray * renditionGroups;
    NSArray * renditions;
}

@property (nonatomic, retain) TDSchemaDefinition *element;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int partFeatures;
@property (nonatomic, retain) CUIImage *previewImage;
@property (nonatomic, retain) NSSet *productions;
@property (nonatomic, retain) NSArray *renditionGroups;
@property (nonatomic, copy) NSArray *renditions;
@property (nonatomic, retain) NSString *widgetID;

- (int)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;
- (id)_schema;
- (id)bestPreviewRendition;
- (const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)cuiPartDefinition;
- (void)didTurnIntoFault;
- (id)displayName;
- (int)elementID;
- (unsigned int)partFeatures;
- (int)partID;
- (id)previewImage;
- (id)renditionGroups;
- (id)renditions;
- (void)setPartFeatures:(unsigned int)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setRenditionGroups:(id)arg1;
- (void)setRenditions:(id)arg1;
- (void)updateDerivedRenditionData;
- (id)validStatesWithDocument:(id)arg1;

@end
