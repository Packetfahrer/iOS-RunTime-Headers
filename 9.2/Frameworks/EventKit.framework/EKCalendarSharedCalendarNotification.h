/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {
    unsigned int  _allowedEntityTypes;
    unsigned int  _sharingInvitationResponse;
}

@property (nonatomic) unsigned int allowedEntityTypes;
@property (nonatomic) unsigned int sharingInvitationResponse;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (unsigned int)allowedEntityTypes;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(int)arg1;
- (void)setAllowedEntityTypes:(unsigned int)arg1;
- (void)setSharingInvitationResponse:(unsigned int)arg1;
- (unsigned int)sharingInvitationResponse;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)messageStringForDescriptionWithOptions:(unsigned int)arg1;
- (id)messageStringsForDescriptionWithOptions:(unsigned int)arg1;
- (BOOL)supportsDisplay;
- (id)titleStringWithOptions:(unsigned int)arg1;

@end