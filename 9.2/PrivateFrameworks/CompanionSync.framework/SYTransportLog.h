/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYTransportLog : NSObject {
    NSString * _facility;
    NSString * _rootPath;
}

@property (nonatomic, copy) NSString *facility;

+ (id)_logPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)_ensureFolder;
- (void)_logMessage:(id)arg1 file:(const char *)arg2 line:(int)arg3 function:(const char *)arg4;
- (id)_setupLog;
- (id)facility;
- (id)init;
- (void)logMessage:(id)arg1;
- (void)logMessage:(id)arg1 args:(void*)arg2;
- (void)setFacility:(id)arg1;

@end
