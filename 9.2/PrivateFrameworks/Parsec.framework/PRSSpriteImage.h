/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSpriteImage : PRSImage {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _spriteRect;
}

@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } spriteRect;

// Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpriteMap:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spriteRect;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

+ (struct CGImage { }*)spriteImage;

- (void)preloadImageWithSource:(id)arg1;
- (void)produceImageWithSource:(id)arg1 complete:(id /* block */)arg2;

@end
