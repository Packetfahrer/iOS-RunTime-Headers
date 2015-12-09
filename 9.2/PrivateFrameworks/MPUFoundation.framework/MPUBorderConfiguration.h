/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUBorderConfiguration : NSObject <NSCopying> {
    float  _borderAlpha;
    UIColor * _borderColor;
    float  _borderWidth;
    float  _dropShadowAlpha;
    UIColor * _dropShadowColor;
    unsigned int  _dropShadowEdges;
    float  _dropShadowWidth;
    float  _fillAlpha;
    UIColor * _fillColor;
}

@property (nonatomic) float borderAlpha;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) float borderWidth;
@property (nonatomic) float dropShadowAlpha;
@property (nonatomic, retain) UIColor *dropShadowColor;
@property (nonatomic) unsigned int dropShadowEdges;
@property (nonatomic) float dropShadowWidth;
@property (nonatomic) float fillAlpha;
@property (nonatomic, retain) UIColor *fillColor;
@property (getter=isFullyTransparent, nonatomic, readonly) BOOL fullyTransparent;

- (void).cxx_destruct;
- (float)borderAlpha;
- (id)borderColor;
- (float)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dropShadowAlpha;
- (id)dropShadowColor;
- (unsigned int)dropShadowEdges;
- (float)dropShadowWidth;
- (float)fillAlpha;
- (id)fillColor;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFullyTransparent;
- (void)setBorderAlpha:(float)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setDropShadowAlpha:(float)arg1;
- (void)setDropShadowColor:(id)arg1;
- (void)setDropShadowEdges:(unsigned int)arg1;
- (void)setDropShadowWidth:(float)arg1;
- (void)setFillAlpha:(float)arg1;
- (void)setFillColor:(id)arg1;

@end
