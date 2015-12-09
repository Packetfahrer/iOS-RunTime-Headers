/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTracker : NSObject <PASerializable> {
    NSMutableDictionary * _activityNames;
    NSMutableDictionary * _breadcrumbs;
    struct os_activity_stream_s { } * _messageStream;
    NSMutableDictionary * _messages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void)_addActivityName:(const char *)arg1 forId:(unsigned long long)arg2;
- (void)_addBreadcrumb:(struct os_activity_breadcrumb_s { unsigned int x1; unsigned long long x2; unsigned long long x3; char *x4; char *x5; char *x6; }*)arg1 forProcess:(id)arg2 withActivityId:(unsigned long long)arg3;
- (void)_addMessage:(struct os_trace_message_s { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; id x5; char *x6; char *x7; void *x8; unsigned int x9; char *x10; char *x11; int x12; }*)arg1 withActivityId:(unsigned long long)arg2;
- (void)_parseStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; char *x4; char *x5; unsigned long long x6; unsigned long long x7; union { struct os_activity_breadcrumb_s { unsigned int x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; char *x_1_2_6; } x_8_1_1; struct os_activity_stream_activity_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; char *x_2_2_6; unsigned int x_2_2_7; } x_8_1_2; struct os_trace_message_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; unsigned int x_3_2_4; id x_3_2_5; char *x_3_2_6; char *x_3_2_7; void *x_3_2_8; unsigned int x_3_2_9; char *x_3_2_10; char *x_3_2_11; int x_3_2_12; } x_8_1_3; } x8; int x9; unsigned long long x10[0]; }*)arg1;
- (id)activityNameForId:(unsigned long long)arg1;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)breadcrumbsForProcess:(int)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (void)dealloc;
- (id)init;
- (id)messagesForThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long)sizeInBytesForSerializedVersion;
- (void)stopTracking;
- (void)trackGloballyWithFlags:(unsigned long long)arg1;
- (void)trackPid:(int)arg1 withFlags:(unsigned long long)arg2;

@end
