/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPasswordGeneration : NSObject

+ (id)defaultRequirementsForDomain:(id)arg1;
+ (id)defaultRequirementsForURL:(id)arg1;
+ (id)generatedPasswordMatchingRequirements:(id)arg1;
+ (BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
+ (BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg1;
+ (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
+ (id)test_getPasswordRandomCharactersWithFirstCharacterConstraints:(id)arg1 numberOfPasswordRandomCharacters:(unsigned long)arg2 allowedCharacters:(id)arg3;
+ (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned int)arg2;

@end
