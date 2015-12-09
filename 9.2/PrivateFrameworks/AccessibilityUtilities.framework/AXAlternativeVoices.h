/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAlternativeVoices : NSObject {
    NSSet * _supportedSiriLanguages;
    NSDictionary * _voiceClassesMap;
    NSMutableDictionary * _voiceNameMap;
}

@property (nonatomic, retain) NSSet *supportedSiriLanguages;
@property (nonatomic, retain) NSDictionary *voiceClassesMap;
@property (nonatomic, retain) NSMutableDictionary *voiceNameMap;

+ (BOOL)inUnitTestMode;
+ (void)setInUnitTestMode:(BOOL)arg1;
+ (id)sharedInstance;

- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(int)arg3;
- (BOOL)_siriSupportsLanguage:(id)arg1;
- (id)alternativeVoiceIdentifiersForLangauge:(id)arg1;
- (void)dealloc;
- (BOOL)isAlexAvailableForLanguage:(id)arg1;
- (BOOL)isAlternativeVoice:(id)arg1;
- (BOOL)isAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (BOOL)isSiriVoiceIdentifier:(id)arg1;
- (id)nameForVoiceIdentifier:(id)arg1;
- (void)setSupportedSiriLanguages:(id)arg1;
- (void)setVoiceClassesMap:(id)arg1;
- (void)setVoiceNameMap:(id)arg1;
- (id)supportedSiriLanguages;
- (id)voiceClassesMap;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)voiceNameMap;

@end
