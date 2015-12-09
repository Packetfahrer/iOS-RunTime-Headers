/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTaskData : NSObject <PASerializable> {
    NSSet * _donatingPids;
    PASampleTaskDataPrivateData * _privateData;
    PASampleTimeInsensitiveTaskData * _timeInsensitiveTaskData;
    NSArray * sampleThreadsArray;
}

@property (readonly) BOOL allowsIdleExit;
@property (readonly) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *donatingPids;
@property (readonly) unsigned int hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) BOOL isBoosted;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isDarwinExtBG;
@property (readonly) BOOL isDirty;
@property (readonly) BOOL isForeground;
@property (readonly) BOOL isFrozen;
@property (readonly) BOOL isNonVisible;
@property (readonly) BOOL isPidSuspended;
@property (readonly) BOOL isSuppressed;
@property (readonly) BOOL isTaskResourceFlagged;
@property (readonly) BOOL isTerminatedSnapshot;
@property (readonly) BOOL isThirdParty;
@property (readonly) BOOL isTimerThrottled;
@property (readonly) BOOL isUnresponsive;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned int latency_qos;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) double mostRecentTimeSamplingOnlyMainThread;
@property (readonly) NSString *name;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned long long sharedCacheLength;
@property (readonly) unsigned long long sharedCacheOffset;
@property (readonly) unsigned long long sharedCacheStart;
@property (readonly) NSUUID *sharedCacheUUID;
@property (readonly) unsigned int ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInPages;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) BOOL usesSuddenTermination;
@property (readonly) BOOL workQueueExceededConstrainedThreadLimit;
@property (readonly) BOOL workQueueExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)allowsIdleExit;
- (id)architectureString;
- (id)bundleName;
- (void)dealloc;
- (id)debugDescription;
- (id)donatingPids;
- (id)imageInfos;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (BOOL)isBoosted;
- (BOOL)isDarwinBG;
- (BOOL)isDarwinExtBG;
- (BOOL)isDirty;
- (BOOL)isForeground;
- (BOOL)isFrozen;
- (BOOL)isNonVisible;
- (BOOL)isPidSuspended;
- (BOOL)isSameAsTask:(id)arg1;
- (BOOL)isSuppressed;
- (BOOL)isTaskResourceFlagged;
- (BOOL)isTerminatedSnapshot;
- (BOOL)isThirdParty;
- (BOOL)isTimerThrottled;
- (BOOL)isUnresponsive;
- (BOOL)isVisible;
- (unsigned int)latency_qos;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (double)mostRecentTimeSamplingOnlyMainThread;
- (id)name;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (int)rpid;
- (void)setDonatingPids:(id)arg1;
- (unsigned long long)sharedCacheLength;
- (unsigned long long)sharedCacheOffset;
- (unsigned long long)sharedCacheStart;
- (id)sharedCacheUUID;
- (unsigned long)sizeInBytesForSerializedVersion;
- (unsigned int)ss_flags;
- (int)suspendCount;
- (int)taskSizeInPages;
- (id)timeInsensitiveTaskData;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniqueId;
- (BOOL)usesSuddenTermination;
- (BOOL)workQueueExceededConstrainedThreadLimit;
- (BOOL)workQueueExceededTotalThreadLimit;

@end
