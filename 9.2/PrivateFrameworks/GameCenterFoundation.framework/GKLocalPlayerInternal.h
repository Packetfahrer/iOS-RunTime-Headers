/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString * _accountName;
    NSArray * _emailAddresses;
    NSString * _facebookUserID;
    NSNumber * _iCloudUserID;
    unsigned int  _loginStatus;
    unsigned short  _numberOfChallenges;
    unsigned short  _numberOfRequests;
    unsigned short  _numberOfTurns;
}

@property unsigned int loginStatus;

+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)emailAddresses;
- (id)facebookUserID;
- (id)iCloudUserID;
- (BOOL)isFindable;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (BOOL)isPhotoPending;
- (BOOL)isPurpleBuddyAccount;
- (BOOL)isUnderage;
- (unsigned int)loginStatus;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (void)setAccountName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)setFindable:(BOOL)arg1;
- (void)setICloudUserID:(id)arg1;
- (void)setLoginStatus:(unsigned int)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setPhotoPending:(BOOL)arg1;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (void)setUnderage:(BOOL)arg1;

@end
