/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFunctionNode : TSTExpressionNode {
    TSTFunctionEndNode * mFunctionEndNode;
    int  mFunctionIndex;
    NSString * mInvalidFunctionName;
    NSArray * mWhitespaceAfterDelimiters;
    NSString * mWhitespaceAfterFunctionName;
    NSString * mWhitespaceAfterLeftParen;
}

@property (nonatomic, retain) TSTFunctionEndNode *functionEndNode;
@property (nonatomic, readonly) int functionIndex;
@property (nonatomic, retain) NSString *invalidFunctionName;
@property (nonatomic, readonly) short maxArguments;
@property (nonatomic, readonly) short minArguments;
@property (nonatomic, readonly) unsigned int numArguments;
@property (nonatomic, retain) NSArray *whitespaceAfterDelimiters;
@property (nonatomic, retain) NSString *whitespaceAfterFunctionName;
@property (retain) NSString *whitespaceAfterLeftParen;

+ (id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2;
+ (id)newSumNodeWithContext:(id)arg1 children:(id)arg2;

- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(int)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void**x29; void*x30; void*x31; void*x32; void*x33; void*x34; short x35; void*x36; void*x37; void*x38; void*x39; unsigned int x40/* : ? */; void*x41; unsigned long long x42; void*x43; void*x44; unsigned short x45; void*x46; short x47; void*x48; void*x49; void*x50; void*x51; unsigned long x52; int x53; unsigned int x54/* : ? */; const void*x55; const void*x56; void*x57; void*x58; const int x59; void x60; void*x61; void*x62; void*x63; void*x64; const void*x65; void*x66; void*x67; void*x68; out const void*x69; short x70; void*x71; int x72; unsigned char x73; void*x74; long x75; void*x76; in double x77; void*x78; const void*x79; float x80; const void*x81; void*x82; void*x83; void*x84; out const void*x85; void*x86; int x87; unsigned char x88; void*x89; long x90; void*x91; in double x92; void*x93; const void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; long long x105; unsigned long x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; out out long x146; unsigned int x147/* : ? */; void*x148; const oneway int x149; void*x150; void*x151; void*x152; out double x153; void*x154; long x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; unsigned short x171; void*x172; short x173; void*x174; void*x175; void*x176; void*x177; unsigned long x178; int x179; unsigned int x180/* : ? */; const void*x181; const void*x182; void*x183; void*x184; const void*x185; void*x186; void*x187; void*x188; out const void*x189; short x190; void*x191; void*x192; void*x193; out void*x194; out short x195; void*x196; unsigned int x197; void*x198; float x199; const void*x200; void*x201; void*x202; void*x203; out const void*x204; void*x205; void*x206; void*x207; out void*x208; out short x209; void*x210; unsigned int x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; SEL x248; void*x249; void*x250; void*x251; void*x252; void*x253; inout unsigned short x254; unsigned char x255; out void*x256; void*x257; int x258; in void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; long long x277; unsigned long x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; id x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; SEL x340; void*x341; void*x342; void*x343; void*x344; void*x345; unsigned short x346; bool x347; void*x348; void*x349; void*x350; const void*x351; long x352; long x353; void*x354; void*x355; unsigned short x356; void*x357; void*x358; void*x359; int x360; in void*x361; short x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; Class x375; void*x376; void*x377; void*x378; void*x379; void*x380; const void*x381; int x382; BOOL x383; void*x384; void*x385; const oneway int x386; void*x387; void*x388; unsigned char x389; out in void*x390; const out long x391; long x392; void*x393; const void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; in void*x423; void*x424; void*x425; long x426; int x427; BOOL x428; void*x429; void*x430; int x431; out in void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; long long x442; void*x443; void*x444; unsigned long long x445; void*x446; void*x447; void*x448; unsigned int x449/* : ? */; long x450; void*x451; unsigned char x452; void*x453; long x454; long x455; unsigned short x456; void*x457; void*x458; long x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; unsigned int x476; void*x477; long x478; int x479; double x480; void*x481; void*x482; void*x483; float x484; long x485; void*x486; BOOL x487; void*x488; void*x489; double x490; void*x491; int x492; long x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; inout unsigned short x508; void*x509; out short x510; void*x511; unsigned char x512; out void*x513; void*x514; out in void*x515; out const void*x516; void*x517; in unsigned char x518; void*x519; void*x520; const short x521; void*x522; void*x523; void*x524; unsigned short x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; struct unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSString>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::hash<unsigned int>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, SFUtility::ObjcSharedPtr<NSString> >, std::__1::equal_to<unsigned int>, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct vector<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > >, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_4_1_1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_4_1_2; struct __compressed_pair<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > *, std::__1::allocator<std::__1::unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > > > { struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > {} *x_3_2_1; } x_4_1_3; } x4; }*)arg3;
- (void)dealloc;
- (id)exportString;
- (id)formulaPlainText;
- (id)functionEndNode;
- (int)functionIndex;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(unsigned int)arg4 lastIndex:(unsigned int)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 unwrapped:(BOOL)arg3;
- (id)invalidFunctionName;
- (BOOL)isDescendantOfChild:(id)arg1;
- (BOOL)isEmptyFunctionNode;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (BOOL)isMissingRequiredArgument;
- (short)maxArguments;
- (short)minArguments;
- (unsigned int)numArguments;
- (id)p_functionSpec;
- (void)p_resetArgumentSpecForChildren;
- (struct TSTCSENodeData { unsigned int x1; unsigned int x2; })recordHashesForSubexpressions:(id)arg1;
- (void)resurrectModeTokens;
- (void)saveToArchive:(struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setFunctionEndNode:(id)arg1;
- (void)setInvalidFunctionName:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceAfterFunctionName:(id)arg1;
- (void)setWhitespaceAfterLeftParen:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceAfterFunctionName;
- (id)whitespaceAfterLeftParen;

@end
