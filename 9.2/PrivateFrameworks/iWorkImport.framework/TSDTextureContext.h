/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTextureContext : NSObject <NSCopying> {
    unsigned int  _isMagicMove;
    <TSDAnimationSession> * _session;
    unsigned int  _shouldAddFinal;
    unsigned int  _shouldAddMagicMoveObjectOnly;
    unsigned int  _shouldAddMasks;
    BOOL  _shouldAddNoShapeAttributes;
    unsigned int  _shouldAddReversedFinal;
    unsigned int  _shouldDistortToFit;
    unsigned int  _shouldForceTextureGeneration;
    unsigned int  _shouldIgnoreScaleInSourceImage;
    unsigned int  _shouldNotAddContainedReps;
    unsigned int  _shouldNotAddShapeAttributes;
    unsigned int  _shouldNotAddText;
    unsigned int  _shouldNotCacheTexture;
    unsigned int  _shouldSeparateReflection;
    unsigned int  _shouldSeparateShadow;
    unsigned int  _shouldSeparateStroke;
    unsigned int  _shouldSeparateText;
}

@property (nonatomic) BOOL isMagicMove;
@property (nonatomic) <TSDAnimationSession> *session;
@property (nonatomic) BOOL shouldAddFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldAddMasks;
@property (nonatomic) BOOL shouldAddReversedFinal;
@property (nonatomic) BOOL shouldDistortToFit;
@property (nonatomic) BOOL shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldIgnoreScaleInSourceImage;
@property (nonatomic) BOOL shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText;
@property (nonatomic) BOOL shouldNotCacheTexture;
@property (nonatomic) BOOL shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke;
@property (nonatomic) BOOL shouldSeparateText;

+ (id)context;
+ (id)contextWithSession:(id)arg1;
+ (id)contextWithTextureContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMagicMove;
- (void)reset;
- (id)session;
- (void)setIsMagicMove:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldAddFinal:(BOOL)arg1;
- (void)setShouldAddMagicMoveObjectOnly:(BOOL)arg1;
- (void)setShouldAddMasks:(BOOL)arg1;
- (void)setShouldAddReversedFinal:(BOOL)arg1;
- (void)setShouldDistortToFit:(BOOL)arg1;
- (void)setShouldForceTextureGeneration:(BOOL)arg1;
- (void)setShouldIgnoreScaleInSourceImage:(BOOL)arg1;
- (void)setShouldNotAddContainedReps:(BOOL)arg1;
- (void)setShouldNotAddShapeAttributes:(BOOL)arg1;
- (void)setShouldNotAddText:(BOOL)arg1;
- (void)setShouldNotCacheTexture:(BOOL)arg1;
- (void)setShouldSeparateReflection:(BOOL)arg1;
- (void)setShouldSeparateShadow:(BOOL)arg1;
- (void)setShouldSeparateStroke:(BOOL)arg1;
- (void)setShouldSeparateText:(BOOL)arg1;
- (BOOL)shouldAddFinal;
- (BOOL)shouldAddMagicMoveObjectOnly;
- (BOOL)shouldAddMasks;
- (BOOL)shouldAddReversedFinal;
- (BOOL)shouldDistortToFit;
- (BOOL)shouldForceTextureGeneration;
- (BOOL)shouldIgnoreScaleInSourceImage;
- (BOOL)shouldNotAddContainedReps;
- (BOOL)shouldNotAddShapeAttributes;
- (BOOL)shouldNotAddText;
- (BOOL)shouldNotCacheTexture;
- (BOOL)shouldSeparateReflection;
- (BOOL)shouldSeparateShadow;
- (BOOL)shouldSeparateStroke;
- (BOOL)shouldSeparateText;

@end
