/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice {
    unsigned int  _accelID;
    unsigned int  _acceleratorPort;
    MTLResourceListPool * _akPrivateResourceListPool;
    MTLResourceListPool * _akResourceListPool;
    struct MTLIOAccelHeap { 
        MTLIOAccelBuffer *buffers[64]; 
        struct MTLRangeAllocator { 
            struct MTLRangeAllocatorElement {} *elements; 
            unsigned int numElements; 
            unsigned int capacity; 
            unsigned int capacityIncrement; 
            unsigned int defaultAlignmentMask; 
        } allocators[64]; 
        unsigned int count; 
    }  _bufferHeaps;
    struct MTLIOAccelCommandBufferStoragePool { struct storageQueue { struct MTLIOAccelCommandBufferStorage {} *x_1_1_1; struct MTLIOAccelCommandBufferStorage {} **x_1_1_2; } x1; int x2; int x3; int x4; id x5; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; SEL x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; unsigned short x27; void*x28; short x29; void*x30; void*x31; void*x32; void*x33; unsigned long x34; int x35; unsigned int x36/* : ? */; const void*x37; const void*x38; void*x39; void*x40; const int x41; void x42; void*x43; void*x44; void*x45; void*x46; const void*x47; void*x48; void*x49; void*x50; out const void*x51; short x52; void*x53; oneway out int x54; BOOL x55; void*x56; unsigned short x57; void*x58; const void x59; int x60; BOOL x61; void*x62; short x63; void*x64; float x65; const void*x66; void*x67; void*x68; void*x69; out const void*x70; void*x71; oneway out int x72; BOOL x73; void*x74; unsigned short x75; void*x76; const void x77; int x78; BOOL x79; void*x80; short x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; SEL x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; struct x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; SEL x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; unsigned short x183; void*x184; short x185; void*x186; void*x187; void*x188; void*x189; unsigned long x190; int x191; unsigned int x192/* : ? */; const void*x193; const void*x194; void*x195; void*x196; const int x197; void x198; void*x199; void*x200; void*x201; void*x202; const void*x203; void*x204; void*x205; void*x206; out const void*x207; short x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; int x215; void*x216; unsigned short x217; void*x218; const void x219; int x220; BOOL x221; void*x222; short x223; void*x224; float x225; const void*x226; void*x227; void*x228; void*x229; out const void*x230; void*x231; void*x232; const void*x233; void*x234; void*x235; void*x236; out const void*x237; short x238; void*x239; void*x240; unsigned char x241; out in float x242; void*x243; const void*x244; in BOOL x245; void*x246; void*x247; float x248; const void*x249; void*x250; void*x251; void*x252; out const void*x253; void*x254; void*x255; unsigned char x256; out in float x257; void*x258; const void*x259; in BOOL x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; oneway void*x276; void*x277; void*x278; void*x279; long x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; SEL x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; const void*x352; long x353; long x354; void*x355; void*x356; unsigned char x357; out in void*x358; const out long x359; long x360; void*x361; const void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; SEL x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; SEL x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; SEL x510; void*x511; void*x512; void*x513; void*x514; void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; SEL x526; void*x527; void*x528; void*x529; void*x530; void*x531; long doublex532; long doublex533; unsigned char x534; out in void*x535; void*x536; BOOL x537; void*x538; void*x539; void*x540; int x541; long x542; short x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; long x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; struct { double x_565_1_1; double x_565_1_2; } x565; struct { double x_566_1_1; double x_566_1_2; } x566; } * _commandBufferStoragePool;
    unsigned int  _configBits;
    unsigned int  _deviceBits;
    struct __IOAccelDevice { } * _deviceRef;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    unsigned int  _hwResourcePoolCount;
    id * _hwResourcePools;
    MTLIOAccelDeviceShmemPool * _kernelCommandShmemPool;
    int  _numCommandBuffers;
    unsigned long long  _segmentByteThreshold;
    MTLIOAccelDeviceShmemPool * _segmentListShmemPool;
    struct __IOAccelShared { } * _sharedRef;
    unsigned long long  _textureRam;
    unsigned long long  _videoRam;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) id*hwResourcePools;
@property (readonly) int numCommandBuffers;

+ (void)registerDevices;

- (void)_purgeDevice;
- (unsigned int)acceleratorPort;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (id)allocBufferSubDataWithLength:(unsigned int)arg1 options:(unsigned int)arg2 alignment:(int)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(int*)arg6;
- (void)dealloc;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (struct __IOAccelDevice { }*)deviceRef;
- (short)heapIndexWithOptions:(unsigned int)arg1;
- (unsigned int)hwResourcePoolCount;
- (id*)hwResourcePools;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (unsigned int)initialKernelCommandShmemSize;
- (unsigned int)initialSegmentListShmemSize;
- (int)numCommandBuffers;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setHwResourcePool:(id*)arg1 count:(int)arg2;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (struct __IOAccelShared { }*)sharedRef;

@end
