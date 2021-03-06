/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletin : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    BBAccessoryIcon * _accessoryIconMask;
    NSMutableDictionary * _actions;
    int  _addressBookRecordID;
    NSSet * _alertSuppressionContexts;
    BBAttachments * _attachments;
    NSString * _bulletinID;
    NSString * _bulletinVersionID;
    NSArray * _buttons;
    BOOL  _clearable;
    BBContent * _content;
    NSDictionary * _context;
    unsigned int  _counter;
    NSDate * _date;
    int  _dateFormatStyle;
    BOOL  _dateIsAllDay;
    NSString * _dismissalID;
    NSDate * _endDate;
    NSDate * _expirationDate;
    unsigned int  _expirationEvents;
    BOOL  _expiresOnPublisherDeath;
    BOOL  _hasEventDate;
    NSDate * _lastInterruptDate;
    NSMutableArray * _lifeAssertions;
    BOOL  _loading;
    BBContent * _modalAlertContent;
    NSMutableSet * _observers;
    NSString * _parentSectionID;
    NSDate * _publicationDate;
    NSString * _publisherBulletinID;
    NSString * _publisherRecordID;
    NSDate * _recencyDate;
    NSString * _sectionID;
    int  _sectionSubtype;
    BOOL  _showsMessagePreview;
    BBSound * _sound;
    BBContent * _starkBannerContent;
    NSSet * _subsectionIDs;
    NSMutableDictionary * _supplementaryActionsByLayout;
    NSTimeZone * _timeZone;
    NSString * _universalSectionID;
    NSString * _unlockActionLabelOverride;
    BOOL  _usesExternalSync;
    BOOL  _wantsFullscreenPresentation;
    NSSet * alertSuppressionAppIDs_deprecated;
    unsigned int  realertCount_deprecated;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic, copy) NSMutableDictionary *actions;
@property (nonatomic) int addressBookRecordID;
@property (nonatomic, readonly) NSSet *alertSuppressionAppIDs;
@property (nonatomic, copy) NSSet *alertSuppressionAppIDs_deprecated;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, readonly) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic, readonly) BOOL allowsAutomaticRemovalFromLockScreen;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic, readonly) NSString *alternateActionLabel;
@property (nonatomic, retain) BBAttachments *attachments;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSString *bulletinVersionID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) BOOL canBeSilencedByMenuButtonPress;
@property (nonatomic) BOOL clearable;
@property (nonatomic, readonly) BOOL coalescesWhenLocked;
@property (nonatomic, retain) BBContent *content;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned int counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int dateFormatStyle;
@property (nonatomic) BOOL dateIsAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) BBAction *defaultAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned int expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) BOOL expiresOnPublisherDeath;
@property (nonatomic, readonly) NSString *fullAlternateActionLabel;
@property (nonatomic, readonly) NSString *fullUnlockActionLabel;
@property (nonatomic) BOOL hasEventDate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int iPodOutAlertType;
@property (nonatomic, readonly) BOOL ignoresQuietMode;
@property (nonatomic, readonly) BOOL inertWhenLocked;
@property (nonatomic, retain) NSDate *lastInterruptDate;
@property (nonatomic, retain) NSMutableArray *lifeAssertions;
@property (getter=isLoading, nonatomic) BOOL loading;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) unsigned int messageNumberOfLines;
@property (nonatomic, readonly) NSString *missedBannerDescriptionFormat;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, readonly) BOOL orderSectionUsingRecencyDate;
@property (nonatomic, copy) NSString *parentSectionID;
@property (nonatomic, readonly) BOOL playsSoundForModify;
@property (nonatomic, readonly) BOOL preservesUnlockActionCase;
@property (nonatomic, readonly) BOOL preventLock;
@property (nonatomic, readonly) int primaryAttachmentType;
@property (nonatomic, retain) NSDate *publicationDate;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic, readonly) unsigned int realertCount;
@property (nonatomic) unsigned int realertCount_deprecated;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, readonly) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *secondaryContentRemoteViewControllerClassName;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, readonly) NSString *sectionDisplayName;
@property (nonatomic, readonly) BOOL sectionDisplaysCriticalBulletins;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, readonly) BBSectionIcon *sectionIcon;
@property (nonatomic) int sectionSubtype;
@property (nonatomic, readonly) BOOL showsContactPhoto;
@property (nonatomic, readonly) BOOL showsDateInFloatingLockScreenAlert;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic, readonly) BOOL showsSubtitle;
@property (nonatomic, readonly) BOOL showsUnreadIndicatorForNoticesFeed;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned int subtypePriority;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *supplementaryActionsByLayout;
@property (nonatomic, readonly) BOOL suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) BOOL suppressesMessageForPrivacy;
@property (nonatomic, readonly) BOOL suppressesTitle;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) BBColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *topic;
@property (nonatomic, copy) NSString *universalSectionID;
@property (nonatomic, readonly) NSString *unlockActionLabel;
@property (nonatomic, copy) NSString *unlockActionLabelOverride;
@property (nonatomic) BOOL usesExternalSync;
@property (nonatomic, readonly) BOOL usesVariableLayout;
@property (nonatomic, readonly) BOOL visuallyIndicatesWhenDateIsInFuture;
@property (nonatomic) BOOL wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)addBulletinToCache:(id)arg1;
+ (id)bulletinReferenceDateFromDate:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)removeBulletinFromCache:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;
+ (void)vetSortDescriptor:(id)arg1;

- (id)_actionKeyForType:(int)arg1;
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;
- (id)_allActions;
- (id)_allSupplementaryActions;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_responseForAction:(id)arg1;
- (id)_safeDescription:(BOOL)arg1;
- (id)_sectionParameters;
- (id)_sectionSubtypeParameters;
- (id)accessoryIconMask;
- (id)acknowledgeAction;
- (id)actionForResponse:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actions;
- (void)addLifeAssertion:(id)arg1;
- (void)addObserver:(id)arg1;
- (int)addressBookRecordID;
- (id)alertSuppressionAppIDs;
- (id)alertSuppressionAppIDs_deprecated;
- (id)alertSuppressionContexts;
- (BOOL)allowsAddingToLockScreenWhenUnlocked;
- (BOOL)allowsAutomaticRemovalFromLockScreen;
- (id)alternateAction;
- (id)alternateActionLabel;
- (id)attachments;
- (id)attachmentsCreatingIfNecessary:(BOOL)arg1;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (id)bulletinID;
- (id)bulletinVersionID;
- (id)buttons;
- (BOOL)canBeSilencedByMenuButtonPress;
- (BOOL)clearable;
- (BOOL)coalescesWhenLocked;
- (id)composedAttachmentImage;
- (id)composedAttachmentImageForKey:(id)arg1;
- (id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSize;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)content;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (id)date;
- (int)dateFormatStyle;
- (BOOL)dateIsAllDay;
- (void)dealloc;
- (id)defaultAction;
- (id)description;
- (id)dismissAction;
- (id)dismissalID;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expirationDate;
- (unsigned int)expirationEvents;
- (id)expireAction;
- (BOOL)expiresOnPublisherDeath;
- (id)firstValidObserver;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (BOOL)hasEventDate;
- (int)iPodOutAlertType;
- (BOOL)ignoresQuietMode;
- (BOOL)inertWhenLocked;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLoading;
- (id)lastInterruptDate;
- (id)lifeAssertions;
- (id)message;
- (unsigned int)messageNumberOfLines;
- (id)missedBannerDescriptionFormat;
- (id)modalAlertContent;
- (unsigned int)numberOfAdditionalAttachments;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (id)observers;
- (BOOL)orderSectionUsingRecencyDate;
- (id)parentSectionID;
- (BOOL)playsSoundForModify;
- (BOOL)preservesUnlockActionCase;
- (BOOL)preventLock;
- (int)primaryAttachmentType;
- (id)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (id)raiseAction;
- (unsigned int)realertCount;
- (unsigned int)realertCount_deprecated;
- (id)recencyDate;
- (id)recordID;
- (id)responseForAcknowledgeAction;
- (id)responseForAction:(id)arg1;
- (id)responseForButtonActionAtIndex:(unsigned int)arg1;
- (id)responseForDefaultAction;
- (id)responseForExpireAction;
- (id)responseForRaiseAction;
- (id)responseForSnoozeAction;
- (id /* block */)responseSendBlock;
- (id)safeDescription;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)section;
- (id)sectionDisplayName;
- (BOOL)sectionDisplaysCriticalBulletins;
- (id)sectionID;
- (id)sectionIcon;
- (int)sectionSubtype;
- (void)setAccessoryIconMask:(id)arg1;
- (void)setAcknowledgeAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAddressBookRecordID:(int)arg1;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setBulletinVersionID:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setClearable:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCounter:(unsigned int)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(int)arg1;
- (void)setDateIsAllDay:(BOOL)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpirationEvents:(unsigned int)arg1;
- (void)setExpireAction:(id)arg1;
- (void)setExpiresOnPublisherDeath:(BOOL)arg1;
- (void)setHasEventDate:(BOOL)arg1;
- (void)setLastInterruptDate:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalAlertContent:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPublicationDate:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRaiseAction:(id)arg1;
- (void)setRealertCount_deprecated:(unsigned int)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(int)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setStarkBannerContent:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActionsByLayout:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (void)setUsesExternalSync:(BOOL)arg1;
- (void)setWantsFullscreenPresentation:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)showsContactPhoto;
- (BOOL)showsDateInFloatingLockScreenAlert;
- (BOOL)showsMessagePreview;
- (BOOL)showsSubtitle;
- (BOOL)showsUnreadIndicatorForNoticesFeed;
- (id)snoozeAction;
- (id)sound;
- (id)starkBannerContent;
- (id)subsectionIDs;
- (id)subtitle;
- (unsigned int)subtypePriority;
- (id)supplementaryActions;
- (id)supplementaryActionsByLayout;
- (id)supplementaryActionsForLayout:(int)arg1;
- (BOOL)suppressesAlertsWhenAppIsActive;
- (BOOL)suppressesMessageForPrivacy;
- (BOOL)suppressesTitle;
- (id)syncHash;
- (id)timeZone;
- (id)tintColor;
- (id)title;
- (id)topic;
- (id)uniqueIdentifier;
- (id)universalSectionID;
- (id)unlockActionLabel;
- (id)unlockActionLabelOverride;
- (BOOL)usesExternalSync;
- (BOOL)usesVariableLayout;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;
- (BOOL)wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)dateOrRecencyDate;
- (BOOL)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2;
- (id)publishDate;
- (id)publisherMatchID;
- (id)sectionMatchID;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

+ (void)killSounds;

- (id)_defaultActionWithFilter:(id /* block */)arg1;
- (BOOL)_isPushOrLocalNotification;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id /* block */)actionBlockForAction:(id)arg1;
- (id /* block */)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (id /* block */)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id /* block */)actionBlockForButton:(id)arg1;
- (BOOL)bulletinAlertShouldOverridePocketMode;
- (BOOL)bulletinAlertShouldOverrideQuietMode;
- (BOOL)isPlayingSound;
- (void)killSound;
- (BOOL)playSound;
- (BOOL)sb_hasCustomSecondaryContent;
- (id)sb_minimalSupplementaryActions;
- (id)sb_nonPluginDefaultAction;
- (BOOL)sb_shouldSuppressMessageForPrivacy;
- (BOOL)sb_supportsRaiseAction;

@end
