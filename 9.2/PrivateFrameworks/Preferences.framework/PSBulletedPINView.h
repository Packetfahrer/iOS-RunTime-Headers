/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {
    PSPasscodeField * _passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (void)hidePasscodeField:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 numberOfFields:(int)arg2;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (BOOL)resignFirstResponder;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
