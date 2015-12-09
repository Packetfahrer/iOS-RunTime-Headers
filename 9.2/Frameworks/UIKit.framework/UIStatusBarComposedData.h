/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarComposedData : NSObject <NSCopying> {
    NSString * _doubleHeightStatus;
    BOOL  _itemEnabled;
    struct { 
        BOOL itemIsEnabled[27]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
    }  _rawData;
    UISystemNavigationAction * _systemNavigationItem;
}

@property (nonatomic, copy) NSString *doubleHeightStatus;
@property (nonatomic, readonly) struct { BOOL x1[27]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; BOOL x29[256]; BOOL x30[256]; }*rawData;
@property (nonatomic, retain) UISystemNavigationAction *systemNavigationItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doubleHeightStatus;
- (id)initWithRawData:(const struct { BOOL x1[27]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; BOOL x29[256]; BOOL x30[256]; }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isItemEnabled:(int)arg1;
- (struct { BOOL x1[27]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; BOOL x29[256]; BOOL x30[256]; }*)rawData;
- (void)setDoubleHeightStatus:(id)arg1;
- (void)setItem:(int)arg1 enabled:(BOOL)arg2;
- (void)setSystemNavigationItem:(id)arg1;
- (id)systemNavigationItem;

@end
