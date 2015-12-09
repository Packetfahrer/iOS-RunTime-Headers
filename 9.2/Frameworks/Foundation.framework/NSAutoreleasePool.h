/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoreleasePool : NSObject {
    void * _reserved;
    void * _reserved2;
    void * _reserved3;
    void * _token;
}

+ (void)addObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)autoreleasePoolExists;
+ (unsigned int)autoreleasedObjectCount;
+ (void)enableFreedObjectCheck:(BOOL)arg1;
+ (void)enableRelease:(BOOL)arg1;
+ (unsigned int)poolCountHighWaterMark;
+ (unsigned int)poolCountHighWaterResolution;
+ (void)releaseAllPools;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(unsigned int)arg1;
+ (void)setPoolCountHighWaterResolution:(unsigned int)arg1;
+ (void)showPools;
+ (unsigned int)topAutoreleasePoolCount;
+ (unsigned int)totalAutoreleasedObjects;

- (void)addObject:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)drain;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end