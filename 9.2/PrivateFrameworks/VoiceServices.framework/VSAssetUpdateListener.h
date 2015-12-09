/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSAssetUpdateListener : NSObject {
    PCPersistentTimer * _assetCleanupTimer;
    BOOL  _isListening;
}

+ (id)sharedListener;

- (void)_cancelAssetCleanupTimer;
- (void)_cleanupAssets;
- (void)_flushLanguageChanges;
- (id)_initShared;
- (void)_rescheduleAssetCleanup;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)_updateNextCleanupDate;
- (BOOL)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (void)dealloc;
- (void)downloadAssetForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (id)init;
- (void)removeAssetForLanguage:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
