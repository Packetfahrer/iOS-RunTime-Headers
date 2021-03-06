/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

@interface StructuredDataReport : AppleErrorReport {
    int  _log_type;
    NSString * _raw_logfile;
}

- (id)appleCareCSVFieldsWithCount:(unsigned int)arg1;
- (void)dealloc;
- (id)fileExtension;
- (void)generateCustomLogAtLevel:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (id)initWithType:(int)arg1 withFile:(id)arg2;
- (BOOL)isActionable;
- (id)problemType;
- (id)reportIdAtDate:(id)arg1;
- (int)streamContentAtLevel:(BOOL)arg1 withBlock:(id /* block */)arg2;

@end
