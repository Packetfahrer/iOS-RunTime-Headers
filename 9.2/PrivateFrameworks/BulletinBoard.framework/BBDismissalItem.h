/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalItem : NSObject {
    NSDate * _expiration;
    unsigned int  _feeds;
}

@property (nonatomic, readonly, retain) NSDate *expiration;
@property (nonatomic, readonly) unsigned int feeds;

- (void)addFeeds:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)expiration;
- (unsigned int)feeds;
- (BOOL)hasExpired;
- (id)initWithFeeds:(unsigned int)arg1;

@end
