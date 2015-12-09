/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusManager : NSObject {
    NSString * _clientIdentifier;
    NSMutableSet * _currentState;
    <BKSEventFocusIPCInterface> * _ipcInterface;
    BOOL  _needsFlush;
    NSMutableDictionary * _pendingStatesByPriority;
    int  _pid;
    BOOL  _systemAppControlsFocusOnMainDisplay;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, retain) NSMutableSet *currentState;
@property (nonatomic) BOOL needsFlush;
@property (nonatomic, readonly, retain) NSMutableDictionary *pendingStatesByPriority;
@property (nonatomic) int pid;
@property (nonatomic) BOOL systemAppControlsFocusOnMainDisplay;

+ (id)sharedInstance;

- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(id /* block */)arg2;
- (id)clientIdentifier;
- (id)currentState;
- (void)dealloc;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (id)description;
- (void)flush;
- (id)init;
- (id)initWithIPCInterface:(id)arg1;
- (BOOL)needsFlush;
- (id)pendingStatesByPriority;
- (int)pid;
- (void)reallyFlushWithSet:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)setNeedsFlush:(BOOL)arg1;
- (void)setPid:(int)arg1;
- (void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg1;
- (BOOL)systemAppControlsFocusOnMainDisplay;

@end
