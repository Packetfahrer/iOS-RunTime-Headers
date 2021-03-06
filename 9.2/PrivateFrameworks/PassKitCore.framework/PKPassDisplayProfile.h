/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDisplayProfile : PKDisplayProfile <NSCopying, NSSecureCoding> {
    PKColor * _backgroundColor;
    NSData * _backgroundHash;
    PKColor * _foregroundColor;
    NSData * _iconHash;
    PKColor * _labelColor;
    NSData * _logoHash;
    int  _passStyle;
    NSData * _paymentAssetsHash;
    PKColor * _stripColor;
    NSData * _stripHash;
    BOOL  _tallCode;
    NSData * _thumbnailHash;
}

@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) NSData *backgroundHash;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic, retain) NSData *iconHash;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, readonly) int layoutMode;
@property (nonatomic, retain) NSData *logoHash;
@property (nonatomic) int passStyle;
@property (nonatomic, retain) NSData *paymentAssetsHash;
@property (nonatomic, readonly) BOOL showsBackgroundImage;
@property (nonatomic, readonly) BOOL showsStripImage;
@property (nonatomic, retain) PKColor *stripColor;
@property (nonatomic, retain) NSData *stripHash;
@property (nonatomic) BOOL tallCode;
@property (nonatomic, retain) NSData *thumbnailHash;

+ (BOOL)supportsSecureCoding;

- (id)backgroundColor;
- (id)backgroundHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (id)iconHash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)labelColor;
- (int)layoutMode;
- (id)logoHash;
- (int)passStyle;
- (id)paymentAssetsHash;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundHash:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIconHash:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLogoHash:(id)arg1;
- (void)setPassStyle:(int)arg1;
- (void)setPaymentAssetsHash:(id)arg1;
- (void)setStripColor:(id)arg1;
- (void)setStripHash:(id)arg1;
- (void)setTallCode:(BOOL)arg1;
- (void)setThumbnailHash:(id)arg1;
- (BOOL)showsBackgroundImage;
- (BOOL)showsStripImage;
- (id)stripColor;
- (id)stripHash;
- (BOOL)tallCode;
- (id)thumbnailHash;
- (int)type;

@end
