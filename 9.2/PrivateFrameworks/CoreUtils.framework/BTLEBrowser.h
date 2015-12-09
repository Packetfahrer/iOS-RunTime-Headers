/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate> {
    NSMutableDictionary * _accessories;
    CBCentralManager * _centralManager;
    struct BTLEBrowserPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; SEL x15; void*x16; void*x17; void*x18; void*x19; void*x20; unsigned short x21; unsigned short x22; void*x23; void*x24; void*x25; void*x26; void*x27; long x28; void*x29; void*x30; void*x31; unsigned int x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; Class x48; void*x49; void*x50; void*x51; void*x52; const void*x53; void x54; int x55; void*x56; void*x57; oneway int x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; int x84; in double x85; out void*x86; void*x87; double x88; void*x89; void*x90; unsigned char x91; long x92; int x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; const void*x113; void x114; int x115; void*x116; void*x117; oneway int x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; } * _cfBrowser;
    void * _eventHandler_ctx;
    int (* _eventHandler_f;
    NSObject<OS_dispatch_source> * _lostTimer;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _started;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; } * _ucat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_lostTimer;
- (void)_postEventType:(unsigned int)arg1 accessory:(id)arg2;
- (void)_start;
- (void)_stop:(long)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)initWithCFBrowser:(struct BTLEBrowserPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; SEL x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; unsigned short x22; void*x23; short x24; void*x25; void*x26; void*x27; void*x28; unsigned long x29; int x30; unsigned int x31/* : ? */; const void*x32; const void*x33; void*x34; void*x35; const void*x36; void*x37; void*x38; void*x39; out const void*x40; short x41; void*x42; unsigned long long x43; void*x44; int x45; BOOL x46; void*x47; unsigned long x48; out out void*x49; void*x50; float x51; const void*x52; void*x53; void*x54; void*x55; out const void*x56; void*x57; unsigned long long x58; void*x59; int x60; BOOL x61; void*x62; unsigned long x63; out out void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; struct x82; void*x83; void*x84; void*x85; void*x86; BOOL x87; void*x88; void*x89; void*x90; in void*x91; bool x92; void*x93; long x94; long x95; out out in unsigned short x96; void*x97; unsigned int x98/* : ? */; void*x99; int x100; void*x101; long x102; void*x103; void*x104; void*x105; void*x106; void*x107; unsigned char x108; out long x109; out const void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; struct x121; void*x122; void*x123; void*x124; void*x125; BOOL x126; void*x127; void*x128; void*x129; in void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; out in void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; SEL x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; long doublex152; void*x153; int x154; void*x155; const out void*x156; unsigned long x157; void*x158; unsigned short x159; BOOL x160; void*x161; in unsigned short x162; void*x163; out void*x164; void*x165; void*x166; short x167; void*x168; long x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; SEL x188; void*x189; void*x190; void*x191; void*x192; char *x193; void*x194; void*x195; short x196; const void*x197; long x198; int x199; unsigned int x200/* : ? */; void*x201; long x202; int x203; unsigned int x204/* : ? */; void*x205; long doublex206; unsigned short x207; void*x208; void*x209; void*x210; out const void*x211; void*x212; const void*x213; void*x214; void*x215; void*x216; out const void*x217; void*x218; double x219; void*x220; long x221; int x222; unsigned int x223/* : ? */; void*x224; void*x225; void*x226; void*x227; void*x228; SEL x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; struct x263; void*x264; void*x265; unsigned int x266/* : ? */; short x267; BOOL x268; const int x269; unsigned int x270/* : ? */; void*x271; void*x272; out long x273; unsigned int x274/* : ? */; void*x275; void*x276; SEL x277; union { int x_278_1_1; double x_278_1_2; } x278; void*x279; const void*x280; void*x281; void*x282; BOOL x283; out void*x284; void*x285; long x286; void*x287; void*x288; int x289; out in bool x290; long x291; out BOOL x292; void*x293; SEL x294; union { int x_295_1_1; double x_295_1_2; void*x_295_1_3; void*x_295_1_4; char *x_295_1_5; void*x_295_1_6; unsigned int x_295_1_7/* : ? */; long x_295_1_8; out BOOL x_295_1_9; void*x_295_1_10; void*x_295_1_11; char *x_295_1_12; void*x_295_1_13; } x295; void*x296; const void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; SEL x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; }*)arg1;

@end