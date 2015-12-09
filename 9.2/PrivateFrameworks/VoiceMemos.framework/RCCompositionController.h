/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionController : NSObject {
    NSMutableDictionary * _accessTokensByName;
    RCCaptureSession * _activeCaptureSession;
    RCComposition * _composition;
    BOOL  _hasLoggedUsageStatisticRecordingEvent;
    BOOL  _hasStartedRecording;
    NSMutableArray * _undoableCompositionItemStack;
    unsigned int  _usageHistoryMask;
}

@property (nonatomic, readonly) RCCaptureSession *activeCaptureSession;
@property (nonatomic, retain) RCComposition *composition;
@property (nonatomic, readonly) unsigned int countOfUndoableCompositions;
@property (nonatomic, readonly) BOOL isTopUndoableCompositionFromCapture;
@property (nonatomic, readonly) NSURL *savedRecordingURI;

+ (id)compositionControllerForComposedAVURL:(id)arg1;

- (void).cxx_destruct;
- (id)_activitySourceRecording;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1;
- (void)_endAccessSessionWithToken:(id)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(struct { double x1; double x2; })arg1 isOverdub:(BOOL)arg2;
- (void)_reloadComposition;
- (id)activeCaptureSession;
- (void)activeRecordingSessionWillFinish;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { float x1; float x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)beginAccessSessionToExportWithAssetReadyBlock:(id /* block */)arg1;
- (void)beginAccessSessionToPlayTimeRange:(struct { double x1; double x2; })arg1 readyToPlayBlock:(id /* block */)arg2;
- (void)beginAccessSessionToTrimAsCopy:(BOOL)arg1 assetReadyBlock:(id /* block */)arg2;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(id /* block */)arg5 sessionFinishedBlock:(id /* block */)arg6;
- (id)composition;
- (unsigned int)countOfUndoableCompositions;
- (void)deleteCompositionFromFileSystem;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)endAccessSessions;
- (void)endEditing;
- (void)endPreviewAccessSession;
- (void)endTrimAccessSession;
- (void)finalizingComposedAssetWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (BOOL)isCaptureSessionActive;
- (BOOL)isTopUndoableCompositionFromCapture;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id /* block */)arg1;
- (void)prepareToBeginEditingWithReadyBlock:(id /* block */)arg1;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)sanitizeWithCompletionBlock:(id /* block */)arg1;
- (id)savedRecordingURI;
- (void)setComposition:(id)arg1;

@end