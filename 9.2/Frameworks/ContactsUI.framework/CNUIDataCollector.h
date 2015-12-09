/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDataCollector : NSObject {
    NSString * _appIdentifier;
    CNUIDataCollectorLogger * _logger;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) CNUIDataCollectorLogger *logger;

+ (BOOL)isEnabled;
+ (id)sharedCollector;

- (void).cxx_destruct;
- (void)_reallyLogIndexUsage;
- (id)appIdentifier;
- (id)init;
- (void)logAddProperty:(id)arg1 contact:(id)arg2;
- (void)logContactActionType:(id)arg1 attributes:(id)arg2;
- (void)logGroupsShown:(int)arg1 totalGroups:(int)arg2;
- (void)logIndexUsage;
- (void)logPresentation;
- (void)logRefreshUsage;
- (void)logSearchResultSelectedSuggested:(BOOL)arg1;
- (void)logSearchResultsFetchedSuggested:(BOOL)arg1;
- (void)logSearchUsage;
- (id)logger;
- (void)setAppIdentifier:(id)arg1;
- (void)setLogger:(id)arg1;

@end
