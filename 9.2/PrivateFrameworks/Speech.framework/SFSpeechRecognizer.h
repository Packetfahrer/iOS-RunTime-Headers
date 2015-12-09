/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Speech.framework/Speech
 */

@interface SFSpeechRecognizer : NSObject <AFDictationDelegate> {
    int  _defaultTaskHint;
    <SFSpeechRecognizerDelegate> * _delegate;
    AFDictationConnection * _dictationConnection;
    NSString * _languageCode;
    NSLocale * _locale;
    NSOperationQueue * _queue;
}

@property (getter=isAvailable, nonatomic, readonly) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defaultTaskHint;
@property (nonatomic) <SFSpeechRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)supportedLocales;

- (void).cxx_destruct;
- (void)_sendEngagementFeedback:(int)arg1 requestIdentifier:(id)arg2;
- (void)dealloc;
- (int)defaultTaskHint;
- (id)delegate;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (BOOL)isAvailable;
- (id)locale;
- (void)prepareWithRequest:(id)arg1;
- (id)queue;
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)recognitionTaskWithResultHandler:(id /* block */)arg1;
- (void)setDefaultTaskHint:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end