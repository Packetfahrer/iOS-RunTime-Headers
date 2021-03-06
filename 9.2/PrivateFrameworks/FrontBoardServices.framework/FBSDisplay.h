/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplay : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    CADisplay * _caDisplay;
    unsigned int  _displayID;
    BOOL  _external;
    float  _orientation;
    int  _pid;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _referenceBounds;
    float  _scale;
    unsigned int  _seed;
    int  _tags;
    unsigned int  _type;
    NSString * _uniqueID;
}

@property (nonatomic, readonly, retain) CADisplay *caDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int displayID;
@property (getter=isExternal, nonatomic, readonly) BOOL external;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float orientation;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } referenceBounds;
@property (nonatomic, readonly) float scale;
@property (nonatomic) unsigned int seed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tags;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly, copy) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (id)_nameForDisplayType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_nameForDisplayType;
- (unsigned int)_typeFromTags:(unsigned int)arg1;
- (id)caDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isAirPlayDisplay;
- (BOOL)isCarDisplay;
- (BOOL)isConnected;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExternal;
- (BOOL)isHiddenDisplay;
- (BOOL)isMainDisplay;
- (BOOL)isMusicOnlyDisplay;
- (BOOL)isRestrictedAirPlayDisplay;
- (BOOL)isWatchOnlyDisplay;
- (BOOL)isiPodOnlyDisplay;
- (float)orientation;
- (int)pid;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })referenceBounds;
- (float)scale;
- (unsigned int)seed;
- (void)setSeed:(unsigned int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (int)tags;
- (unsigned int)type;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)UIScreen;
- (id)_screen;

@end
