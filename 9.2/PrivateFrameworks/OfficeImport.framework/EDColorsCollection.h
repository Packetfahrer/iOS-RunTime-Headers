/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorsCollection : EDCollection <OADColorPalette> {
    unsigned int  mDefaultColorsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (bool)isSystemColorId:(unsigned int)arg1;
+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (int)systemColorIdFromIndex:(unsigned int)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;

- (void)addColors:(const unsigned int*)arg1 count:(unsigned long)arg2 defaultColors:(const unsigned int*)arg3 defaultCount:(unsigned int)arg4;
- (void)addDefaultPalette;
- (unsigned int)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (void)addPalette:(const unsigned int*)arg1 paletteSize:(unsigned long)arg2 paletteX:(const unsigned int*)arg3 paletteXSize:(unsigned int)arg4;
- (id)colorWithIndex:(unsigned int)arg1;
- (unsigned int)defaultColorsCount;
- (const unsigned int*)defaultPalette;
- (id)description;
- (id)initWithDefaultSetup:(bool)arg1;
- (void)setupDefaults;

@end