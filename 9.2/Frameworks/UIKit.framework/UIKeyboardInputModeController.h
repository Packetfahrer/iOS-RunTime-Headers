/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputModeController : NSObject {
    NSArray * _allExtensions;
    BOOL  _allExtensionsNeedRefresh;
    NSArray * _allowedExtensions;
    BOOL  _cacheNeedsRefresh;
    UIKeyboardInputMode * _currentInputMode;
    UIKeyboardInputMode * _currentUsedInputMode;
    <UIKeyboardInputModeControllerDelegate> * _delegate;
    id  _extensionMatchingContext;
    NSString * _inputModeContextIdentifier;
    NSArray * _inputModesWithoutHardwareSupport;
    UIKeyboardInputMode * _lastUsedInputMode;
    UIKeyboardInputMode * _nextInputModeToUse;
    int  _notifyPasscodeChangedToken;
    BOOL  _shouldRunContinuousDiscovery;
    BOOL  _skipExtensionInputModes;
    NSArray * defaultInputModes;
    NSArray * defaultKeyboardInputModes;
    NSArray * defaultNormalizedInputModes;
    NSArray * defaultRawInputModes;
    NSArray * enabledInputModes;
    NSArray * keyboardInputModeIdentifiers;
    NSArray * keyboardInputModes;
    NSArray * normalizedInputModes;
}

@property (readonly) NSArray *activeInputModeIdentifiers;
@property (nonatomic, readonly) NSArray *allowedExtensions;
@property (nonatomic, readonly) BOOL containsDictationSupportedInputMode;
@property (retain) UIKeyboardInputMode *currentInputMode;
@property (nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (nonatomic, readonly) UIKeyboardInputMode *currentLinguisticInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *currentPublicInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *currentSystemInputMode;
@property (nonatomic, retain) UIKeyboardInputMode *currentUsedInputMode;
@property (retain) NSArray *defaultInputModes;
@property (retain) NSArray *defaultKeyboardInputModes;
@property (retain) NSArray *defaultNormalizedInputModes;
@property (nonatomic, copy) NSArray *defaultRawInputModes;
@property (nonatomic) <UIKeyboardInputModeControllerDelegate> *delegate;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (retain) NSArray *enabledInputModes;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, readonly) UIKeyboardInputMode *hardwareInputMode;
@property (nonatomic, copy) NSString *inputModeContextIdentifier;
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (retain) NSArray *keyboardInputModeIdentifiers;
@property (retain) NSArray *keyboardInputModes;
@property (nonatomic, retain) UIKeyboardInputMode *lastUsedInputMode;
@property (nonatomic, retain) UIKeyboardInputMode *nextInputModeToUse;
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (retain) NSArray *normalizedInputModes;
@property (nonatomic) BOOL shouldRunContinuousDiscovery;
@property (readonly) NSArray *supportedInputModeIdentifiers;

+ (id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)sharedInputModeController;

- (id)_MCFilteredExtensionIdentifiers;
- (id)_allExtensionsFromMatchingExtensions:(id)arg1;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)_clearAllExtensionIfNeeded;
- (BOOL)_mayContainExtensionInputModes;
- (void)_removeExtensions:(id)arg1;
- (void)_setCurrentAndNextInputModePreference;
- (void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2;
- (id)_systemInputModePassingTest:(id /* block */)arg1;
- (id)activeInputModeIdentifiers;
- (id)activeInputModes;
- (id)allowedExtensions;
- (id)appendPasscodeInputModes:(id)arg1;
- (BOOL)containsDictationSupportedInputMode;
- (id)currentInputMode;
- (id)currentInputModeInPreference;
- (id)currentLinguisticInputMode;
- (BOOL)currentLocaleRequiresExtendedSetup;
- (id)currentPublicInputMode;
- (id)currentSystemInputMode;
- (id)currentUsedInputMode;
- (void)dealloc;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1;
- (id)defaultInputModes;
- (id)defaultKeyboardInputModes;
- (id)defaultNormalizedInputModes;
- (id)defaultRawInputModes;
- (id)delegate;
- (BOOL)deviceStateIsLocked;
- (void)didEnterBackground:(id)arg1;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModeIdentifiers:(BOOL)arg1;
- (id)enabledInputModeLanguages;
- (id)enabledInputModes;
- (id)extensionInputModes;
- (id)extensionMatchingContext;
- (id)filteredTVInputModesFromInputModes:(id)arg1;
- (id)hardwareInputMode;
- (BOOL)identifierIsValidSystemInputMode:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
- (id)init;
- (id)inputModeContextIdentifier;
- (id)inputModeIdentifierLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)inputModesFromIdentifiers:(id)arg1;
- (id)inputModesWithoutHardwareSupport;
- (id)keyboardInputModeIdentifiers;
- (id)keyboardInputModes;
- (void)keyboardsPreferencesChanged:(id)arg1;
- (id)lastUsedInputMode;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned int)arg2 withTraits:(id)arg3;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2;
- (id)nextInputModeToUse;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(BOOL)arg2;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)normalizedInputModes;
- (void)performWithForcedExtensionInputModes:(id /* block */)arg1;
- (void)performWithoutExtensionInputModes:(id /* block */)arg1;
- (void)saveDeviceUnlockPasscodeInputModes;
- (void)setCurrentInputMode:(id)arg1;
- (void)setCurrentInputModeInPreference:(id)arg1;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDefaultRawInputModes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setInputModeContextIdentifier:(id)arg1;
- (void)setKeyboardInputModeIdentifiers:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (void)setNextInputModeToUse:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)setShouldRunContinuousDiscovery:(BOOL)arg1;
- (BOOL)shouldRunContinuousDiscovery;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2;
- (id)suggestedInputModesForPreferredLanguages;
- (id)supportedInputModeIdentifiers;
- (void)switchToCurrentSystemInputMode;
- (void)updateCurrentAndNextInputModes;
- (void)updateCurrentInputMode:(id)arg1;
- (void)updateDefaultInputModesIfNecessaryForIdiom;
- (void)updateLastUsedInputMode:(id)arg1;
- (BOOL)verifyKeyboardExtensionsWithApp;
- (void)willEnterForeground:(id)arg1;

@end
