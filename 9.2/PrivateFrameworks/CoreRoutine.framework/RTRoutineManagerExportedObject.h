/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) RTRoutineManager *routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)arg1;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)routineManager;
- (void)setRoutineManager:(id)arg1;

@end
