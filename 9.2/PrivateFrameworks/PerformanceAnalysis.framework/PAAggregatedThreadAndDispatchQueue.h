/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack> {
    PAAggregatedProcessInstance * _aggregatedTask;
    NSMutableArray * _contiguousThreadArrays;
    unsigned long long  _cpuTimeNsCached;
    unsigned long long  _dispatchQueueId;
    int  _maxBasePriority;
    int  _maxPriority;
    int  _minBasePriority;
    int  _minPriority;
    unsigned long long  _threadId;
}

@property (readonly) PAAggregatedProcessInstance *aggregatedTask;
@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) NSMutableArray *contiguousThreadArrays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long dispatchQueueId;
@property (readonly) unsigned int firstTimestampIndex;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isIdleWorkQueueThread;
@property (readonly) BOOL isMainThread;
@property (readonly) BOOL isProcessorIdleThread;
@property (readonly) unsigned int lastTimestampIndex;
@property int maxBasePriority;
@property int maxPriority;
@property int minBasePriority;
@property int minPriority;
@property (readonly) Class superclass;
@property unsigned long long threadId;

- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)aggregatedTask;
- (id)aggregator;
- (int)compare:(id)arg1;
- (id)contiguousThreadArrays;
- (id)copyDescriptionForSampleFrame:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned int)arg1;
- (int)count;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned int)firstTimestampIndex;
- (unsigned int)hash;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIdleWorkQueueThread;
- (BOOL)isMainThread;
- (BOOL)isProcessorIdleThread;
- (BOOL)isSingleStack;
- (unsigned int)lastTimestampIndex;
- (int)maxBasePriority;
- (int)maxPriority;
- (int)minBasePriority;
- (int)minPriority;
- (unsigned int)numMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned int)arg1;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printHeavyStacksToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 onlyPrintHeaviest:(BOOL)arg2;
- (void)printStackToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)sampleStore;
- (void)setDispatchQueueId:(unsigned long long)arg1;
- (void)setMaxBasePriority:(int)arg1;
- (void)setMaxPriority:(int)arg1;
- (void)setMinBasePriority:(int)arg1;
- (void)setMinPriority:(int)arg1;
- (void)setThreadId:(unsigned long long)arg1;
- (unsigned long long)threadId;

@end
