/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSAppGlanceManager : NSObject <BPSInternalGlanceObserverDelegate> {
    NGSGlance * _glance;
    PSListController * _listControllerDelegate;
    BPSInternalGlanceManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NGSGlance *glance;
@property (readonly) unsigned int hash;
@property (nonatomic) PSListController *listControllerDelegate;
@property (nonatomic, retain) BPSInternalGlanceManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logGlanceDescriptions;
- (void)dealloc;
- (id)glance;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (id)init;
- (id)listControllerDelegate;
- (void)loadSettings;
- (id)manager;
- (void)setGlance:(id)arg1;
- (void)setListControllerDelegate:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (void)settingsManagerReloadedGlances:(id)arg1;
- (id)showsGlance:(id)arg1;

@end
