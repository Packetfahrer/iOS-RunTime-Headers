/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBSourceConstraints : NSObject {
    struct { 
        unsigned int maxAlarmsAllowed : 1; 
        unsigned int maxRecurrencesAllowed : 1; 
        unsigned int supportsAlarmTriggerIntervals : 1; 
        unsigned int supportsAlarmTriggerDates : 1; 
        unsigned int supportsAlarmsTriggeringAfterStartDate : 1; 
        unsigned int snoozeAlarmRequiresDetach : 1; 
        unsigned int organizerCanSeeAttendeeStatuses : 1; 
        unsigned int inviteesCanSeeAttendeeStatuses : 1; 
        unsigned int statusesAreAccurate : 1; 
        unsigned int supportsIncomingInvitations : 1; 
        unsigned int supportsOutgoingInvitations : 1; 
        unsigned int requiresOutgoingInvitationsInDefaultCalendar : 1; 
        unsigned int supportsInvitationModifications : 1; 
        unsigned int supportsResponseComments : 1; 
        unsigned int deliverySourceOrExternalIDRequiredForResponse : 1; 
        unsigned int proposedStatusRequiredForResponse : 1; 
        unsigned int declinedStatusChangeRequiresNoPendingStatus : 1; 
        unsigned int eventDurationConstrainedToRecurrenceInterval : 1; 
        unsigned int alarmTriggerIntervalConstrainedToRecurrenceInterval : 1; 
        unsigned int occurrencesMustOccurOnSeparateDays : 1; 
        unsigned int futureStartDateLimitedToOccurrenceCacheBounds : 1; 
        unsigned int supportsRecurrencesOnDetachedEvents : 1; 
        unsigned int recurrencesShouldPinToMonthDays : 1; 
        unsigned int requiresAttendeeSearchInSingleAccount : 1; 
        unsigned int mustAcknowledgeMasterEvent : 1; 
        unsigned int canSetAvailability : 1; 
        unsigned int eventAvalabilityLimited : 1; 
        unsigned int requiresMSFormattedUID : 1; 
        unsigned int shouldCancelDeletedEvents : 1; 
        unsigned int shouldDeclineDeletedInvitations : 1; 
        unsigned int supportsStructuredLocations : 1; 
        unsigned int supportsReminderActions : 1; 
        unsigned int supportsReminderLocations : 1; 
        unsigned int supportsAlarmProximity : 1; 
        unsigned int allowsCalendarAddDeleteModify : 1; 
        unsigned int allowsTasks : 1; 
        unsigned int allowsEvents : 1; 
        unsigned int supportsURLField : 1; 
        unsigned int supportsAllDayDueDates : 1; 
        unsigned int supportsSharedCalendars : 1; 
        unsigned int isFacebook : 1; 
        unsigned int recurrenceSeriesMustIncludeMoreThanFirstOccurrence : 1; 
        unsigned int supportsPrivateEvents : 1; 
        unsigned int prohibitsPrivateEventsWithAttendees : 1; 
        unsigned int supportsAvailabilityRequests : 1; 
        unsigned int supportsIgnoringEventsInAvailabilityRequests : 1; 
        unsigned int supportsLocationDirectorySearches : 1; 
        unsigned int requiresSamePrivacyLevelAcrossRecurrenceSeries : 1; 
        unsigned int prohibitsMultipleMonthsInYearlyRecurrence : 1; 
        unsigned int prohibitsMultipleDaysInMonthlyRecurrence : 1; 
        unsigned int prohibitsYearlyRecurrenceInterval : 1; 
        unsigned int requiresOccurrencesConformToRecurrenceRule : 1; 
        unsigned int prohibitsDetachmentOnCommentChange : 1; 
    }  _flags;
    int  _maxAlarmsAllowed;
    int  _maxRecurrencesAllowed;
}

@property (nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;
@property (nonatomic) BOOL allowsCalendarAddDeleteModify;
@property (nonatomic) BOOL allowsEvents;
@property (nonatomic) BOOL allowsTasks;
@property (nonatomic) BOOL canSetAvailability;
@property (nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus;
@property (nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse;
@property (nonatomic) BOOL eventAvalabilityLimited;
@property (nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval;
@property (nonatomic) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; } flags;
@property (nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds;
@property (nonatomic) BOOL inviteesCanSeeAttendeeStatuses;
@property (nonatomic) BOOL isFacebook;
@property (nonatomic) int maxAlarmsAllowed;
@property (nonatomic) int maxRecurrencesAllowed;
@property (nonatomic) BOOL mustAcknowledgeMasterEvent;
@property (nonatomic) BOOL occurrencesMustOccurOnSeparateDays;
@property (nonatomic) BOOL organizerCanSeeAttendeeStatuses;
@property (nonatomic) BOOL prohibitsDetachmentOnCommentChange;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsPrivateEventsWithAttendees;
@property (nonatomic) BOOL prohibitsYearlyRecurrenceInterval;
@property (nonatomic) BOOL proposedStatusRequiredForResponse;
@property (nonatomic) BOOL recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
@property (nonatomic) BOOL recurrencesShouldPinToMonthDays;
@property (nonatomic) BOOL requiresAttendeeSearchInSingleAccount;
@property (nonatomic) BOOL requiresMSFormattedUID;
@property (nonatomic) BOOL requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar;
@property (nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic) BOOL shouldCancelDeletedEvents;
@property (nonatomic) BOOL shouldDeclineDeletedInvitations;
@property (nonatomic) BOOL snoozeAlarmRequiresDetach;
@property (nonatomic) BOOL statusesAreAccurate;
@property (nonatomic) BOOL supportsAlarmProximity;
@property (nonatomic) BOOL supportsAlarmTriggerDates;
@property (nonatomic) BOOL supportsAlarmTriggerIntervals;
@property (nonatomic) BOOL supportsAlarmsTriggeringAfterStartDate;
@property (nonatomic) BOOL supportsAllDayDueDates;
@property (nonatomic) BOOL supportsAvailabilityRequests;
@property (nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic) BOOL supportsIncomingInvitations;
@property (nonatomic) BOOL supportsInvitationModifications;
@property (nonatomic) BOOL supportsLocationDirectorySearches;
@property (nonatomic) BOOL supportsOutgoingInvitations;
@property (nonatomic) BOOL supportsPrivateEvents;
@property (nonatomic) BOOL supportsRecurrencesOnDetachedEvents;
@property (nonatomic) BOOL supportsReminderActions;
@property (nonatomic) BOOL supportsReminderLocations;
@property (nonatomic) BOOL supportsResponseComments;
@property (nonatomic) BOOL supportsSharedCalendars;
@property (nonatomic) BOOL supportsStructuredLocations;
@property (nonatomic) BOOL supportsURLField;

- (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;
- (BOOL)allowsCalendarAddDeleteModify;
- (BOOL)allowsEvents;
- (BOOL)allowsTasks;
- (BOOL)canSetAvailability;
- (BOOL)declinedStatusChangeRequiresNoPendingStatus;
- (BOOL)deliverySourceOrExternalIDRequiredForResponse;
- (BOOL)eventAvalabilityLimited;
- (BOOL)eventDurationConstrainedToRecurrenceInterval;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; })flags;
- (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;
- (id)init;
- (id)initWithMaxAlarms:(int)arg1 maxRecurrences:(int)arg2 constraintFlags:(unsigned long long)arg3;
- (BOOL)inviteesCanSeeAttendeeStatuses;
- (BOOL)isFacebook;
- (int)maxAlarmsAllowed;
- (int)maxRecurrencesAllowed;
- (BOOL)mustAcknowledgeMasterEvent;
- (BOOL)occurrencesMustOccurOnSeparateDays;
- (BOOL)organizerCanSeeAttendeeStatuses;
- (BOOL)prohibitsDetachmentOnCommentChange;
- (BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
- (BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
- (BOOL)prohibitsPrivateEventsWithAttendees;
- (BOOL)prohibitsYearlyRecurrenceInterval;
- (BOOL)proposedStatusRequiredForResponse;
- (BOOL)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
- (BOOL)recurrencesShouldPinToMonthDays;
- (BOOL)requiresAttendeeSearchInSingleAccount;
- (BOOL)requiresMSFormattedUID;
- (BOOL)requiresOccurrencesConformToRecurrenceRule;
- (BOOL)requiresOutgoingInvitationsInDefaultCalendar;
- (BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
- (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)arg1;
- (void)setAllowsCalendarAddDeleteModify:(BOOL)arg1;
- (void)setAllowsEvents:(BOOL)arg1;
- (void)setAllowsTasks:(BOOL)arg1;
- (void)setCanSetAvailability:(BOOL)arg1;
- (void)setDeclinedStatusChangeRequiresNoPendingStatus:(BOOL)arg1;
- (void)setDeliverySourceOrExternalIDRequiredForResponse:(BOOL)arg1;
- (void)setEventAvalabilityLimited:(BOOL)arg1;
- (void)setEventDurationConstrainedToRecurrenceInterval:(BOOL)arg1;
- (void)setFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; })arg1;
- (void)setFutureStartDateLimitedToOccurrenceCacheBounds:(BOOL)arg1;
- (void)setInviteesCanSeeAttendeeStatuses:(BOOL)arg1;
- (void)setIsFacebook:(BOOL)arg1;
- (void)setMaxAlarmsAllowed:(int)arg1;
- (void)setMaxRecurrencesAllowed:(int)arg1;
- (void)setMustAcknowledgeMasterEvent:(BOOL)arg1;
- (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)arg1;
- (void)setOrganizerCanSeeAttendeeStatuses:(BOOL)arg1;
- (void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1;
- (void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1;
- (void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1;
- (void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1;
- (void)setProposedStatusRequiredForResponse:(BOOL)arg1;
- (void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(BOOL)arg1;
- (void)setRecurrencesShouldPinToMonthDays:(BOOL)arg1;
- (void)setRequiresAttendeeSearchInSingleAccount:(BOOL)arg1;
- (void)setRequiresMSFormattedUID:(BOOL)arg1;
- (void)setRequiresOccurrencesConformToRecurrenceRule:(BOOL)arg1;
- (void)setRequiresOutgoingInvitationsInDefaultCalendar:(BOOL)arg1;
- (void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1;
- (void)setShouldCancelDeletedEvents:(BOOL)arg1;
- (void)setShouldDeclineDeletedInvitations:(BOOL)arg1;
- (void)setSnoozeAlarmRequiresDetach:(BOOL)arg1;
- (void)setStatusesAreAccurate:(BOOL)arg1;
- (void)setSupportsAlarmProximity:(BOOL)arg1;
- (void)setSupportsAlarmTriggerDates:(BOOL)arg1;
- (void)setSupportsAlarmTriggerIntervals:(BOOL)arg1;
- (void)setSupportsAlarmsTriggeringAfterStartDate:(BOOL)arg1;
- (void)setSupportsAllDayDueDates:(BOOL)arg1;
- (void)setSupportsAvailabilityRequests:(BOOL)arg1;
- (void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1;
- (void)setSupportsIncomingInvitations:(BOOL)arg1;
- (void)setSupportsInvitationModifications:(BOOL)arg1;
- (void)setSupportsLocationDirectorySearches:(BOOL)arg1;
- (void)setSupportsOutgoingInvitations:(BOOL)arg1;
- (void)setSupportsPrivateEvents:(BOOL)arg1;
- (void)setSupportsRecurrencesOnDetachedEvents:(BOOL)arg1;
- (void)setSupportsReminderActions:(BOOL)arg1;
- (void)setSupportsReminderLocations:(BOOL)arg1;
- (void)setSupportsResponseComments:(BOOL)arg1;
- (void)setSupportsSharedCalendars:(BOOL)arg1;
- (void)setSupportsStructuredLocations:(BOOL)arg1;
- (void)setSupportsURLField:(BOOL)arg1;
- (BOOL)shouldCancelDeletedEvents;
- (BOOL)shouldDeclineDeletedInvitations;
- (BOOL)snoozeAlarmRequiresDetach;
- (BOOL)statusesAreAccurate;
- (BOOL)supportsAlarmProximity;
- (BOOL)supportsAlarmTriggerDates;
- (BOOL)supportsAlarmTriggerIntervals;
- (BOOL)supportsAlarmsTriggeringAfterStartDate;
- (BOOL)supportsAllDayDueDates;
- (BOOL)supportsAvailabilityRequests;
- (BOOL)supportsIgnoringEventsInAvailabilityRequests;
- (BOOL)supportsIncomingInvitations;
- (BOOL)supportsInvitationModifications;
- (BOOL)supportsLocationDirectorySearches;
- (BOOL)supportsOutgoingInvitations;
- (BOOL)supportsPrivateEvents;
- (BOOL)supportsRecurrencesOnDetachedEvents;
- (BOOL)supportsReminderActions;
- (BOOL)supportsReminderLocations;
- (BOOL)supportsResponseComments;
- (BOOL)supportsSharedCalendars;
- (BOOL)supportsStructuredLocations;
- (BOOL)supportsURLField;

@end
