/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabase : TSUDatabase {
    BOOL  _incrementalVacuum;
    struct sqlite3_stmt { } * _insertDataStateStatement;
    struct sqlite3_stmt { } * _insertObjectStatement;
    struct sqlite3_stmt { } * _insertRelationshipStatement;
    NSURL * _packageURL;
    struct sqlite3_stmt { } * _relationshipTargetsStatement;
    struct sqlite3_stmt { } * _updateDataStateStatement;
}

- (void).cxx_destruct;
- (BOOL)closeWithError:(id*)arg1;
- (BOOL)documentVersion:(struct { unsigned long long x1; unsigned long long x2; }*)arg1 closedCleanlyToken:(long long*)arg2 error:(id*)arg3;
- (BOOL)documentVersion:(unsigned long long*)arg1 error:(id*)arg2;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1 error:(id*)arg2;
- (id)init;
- (id)initReadonlyWithPath:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (BOOL)insertDataStateWithSize:(int)arg1 identifier:(long long*)arg2 error:(id*)arg3;
- (BOOL)insertObjectWithIdentifier:(long long)arg1 stateIdentifier:(const struct ObjectStateIdentifier { BOOL x1; long long x2; BOOL x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; SEL x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; SEL x49; void*x50; void*x51; void*x52; void*x53; void*x54; bycopy long doublex55; void*x56; long x57; void*x58; BOOL x59; void*x60; void*x61; out long x62; double x63; void*x64; const unsigned char x65; out long x66; out const void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; SEL x106; void*x107; void*x108; void*x109; void*x110; void*x111; bycopy long doublex112; void*x113; long x114; void*x115; BOOL x116; void*x117; void*x118; out long x119; double x120; void*x121; const unsigned char x122; out long x123; out const void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; SEL x131; void*x132; void*x133; void*x134; void*x135; void*x136; unsigned short x137; unsigned short x138; unsigned int x139; void*x140; void*x141; void*x142; void*x143; void*x144; int x145; void*x146; void*x147; void*x148; void*x149; long x150; void*x151; SEL x152; void*x153; unsigned short x154; void*x155; short x156; void*x157; void*x158; void*x159; void*x160; unsigned long x161; int x162; unsigned int x163/* : ? */; const void*x164; const void*x165; void*x166; void*x167; const int x168; void x169; void*x170; void*x171; void*x172; void*x173; const void*x174; void*x175; void*x176; void*x177; out const void*x178; short x179; void*x180; oneway void*x181; BOOL x182; void*x183; out const void*x184; int x185; void*x186; void*x187; float x188; const void*x189; void*x190; void*x191; void*x192; out const void*x193; void*x194; oneway void*x195; BOOL x196; void*x197; out const void*x198; int x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; unsigned long long x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; int x258; void*x259; void*x260; void*x261; void*x262; long x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; bool x293; void*x294; void*x295; void*x296; void*x297; void*x298; unsigned char x299; out in BOOL x300; const void*x301; void*x302; void*x303; void*x304; void*x305; double x306; int x307; void*x308; unsigned int x309; void*x310; void*x311; void*x312; unsigned char x313; out long x314; long x315; void*x316; BOOL x317; void*x318; int x319; out in void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; unsigned short x340; void*x341; short x342; void*x343; void*x344; void*x345; void*x346; unsigned long x347; int x348; unsigned int x349/* : ? */; const void*x350; const void*x351; void*x352; void*x353; const void*x354; void*x355; void*x356; void*x357; out const void*x358; short x359; void*x360; void*x361; void*x362; double x363; int x364; void*x365; void*x366; long x367; void*x368; void*x369; void*x370; const void*x371; float x372; const void*x373; void*x374; void*x375; void*x376; out const void*x377; void*x378; void*x379; void*x380; double x381; int x382; void*x383; void*x384; long x385; void*x386; void*x387; void*x388; const void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; bool x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; SEL x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; bycopy void*x443; long doublex444; unsigned short x445; void*x446; void*x447; const BOOL x448; void*x449; bool x450; const out void*x451; short x452; void*x453; unsigned char x454; void*x455; void*x456; void*x457; void*x458; out const void*x459; unsigned short x460; void*x461; void*x462; void*x463; void*x464; short x465; void*x466; int x467; out in void*x468; void*x469; short x470; void*x471; long x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; unsigned short x497; void*x498; bool x499; void*x500; float x501; float x502; void*x503; const void*x504; double x505; void*x506; void*x507; void*x508; double x509; unsigned char x510; void*x511; void*x512; in in void*x513; long x514; void*x515; void*x516; long x517; void*x518; void*x519; const void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; const void*x536; void*x537; void*x538; void*x539; void*x540; unsigned int x541; long doublex542; void*x543; long x544; void*x545; void*x546; void*x547; double x548; BOOL x549; void*x550; int x551; out in unsigned char x552; void*x553; in BOOL x554; void*x555; long x556; unsigned char x557; out void*x558; void*x559; void*x560; in double x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; long doublex581; unsigned short x582; BOOL x583; void*x584; void*x585; void*x586; void*x587; void*x588; float x589; float x590; void*x591; BOOL x592; void*x593; long doublex594; void*x595; float x596; int x597; in int x598; void*x599; int x600; out in void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; short x627; int x628; BOOL x629; void*x630; void*x631; inout void*x632; void*x633; void*x634; void*x635; void*x636; in BOOL x637; void*x638; bycopy void*x639; void*x640; oneway int x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; unsigned long long x664; void*x665; void*x666; void*x667; void*x668; void*x669; unsigned short x670; void*x671; void*x672; out void*x673; out short x674; void*x675; double x676; unsigned char x677; void*x678; void*x679; void*x680; const void*x681; unsigned short x682; void*x683; void*x684; void*x685; int x686; in void*x687; short x688; long doublex689; void*x690; void*x691; void*x692; int x693; long x694; void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; unsigned short x713; void*x714; void*x715; const BOOL x716; void*x717; void*x718; short x719; void*x720; bool x721; void*x722; void*x723; BOOL x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; void*x742; void*x743; unsigned char x744; inout unsigned short x745; BOOL x746; void*x747; in void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; inout void*x774; void*x775; void*x776; const out void*x777; out unsigned char x778; out void*x779; void*x780; out short x781; void*x782; double x783; void*x784; void*x785; short x786; short x787; void*x788; void*x789; void*x790; unsigned short x791; void*x792; in double x793; int x794; in void*x795; void*x796; const out void*x797; const void*x798; short x799; short x800; void*x801; void*x802; void*x803; out const void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; unsigned int x825; void*x826; void*x827; void*x828; out void x829; void*x830; unsigned char x831; out in void*x832; const out long x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; void*x849; void*x850; void*x851; unsigned short x852; inout void*x853; long x854; long x855; void*x856; void*x857; void*x858; struct x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; void*x868; void*x869; void*x870; void*x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; SEL x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; unsigned short x926; long doublex927; void*x928; unsigned long x929; unsigned char x930; void*x931; const void x932; void*x933; double x934; unsigned short x935; void*x936; void*x937; double x938; out void*x939; unsigned char x940; void*x941; const void x942; void*x943; void*x944; int x945; long x946; void*x947; void*x948; const void*x949; void*x950; void*x951; void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; int x960; void*x961; void*x962; void*x963; void*x964; void*x965; short x966; void*x967; void*x968; void*x969; void*x970; void*x971; out in SEL x972; void*x973; void*x974; void*x975; void*x976; SEL x977; void*x978; void*x979; void*x980; void*x981; void*x982; void*x983; void*x984; void*x985; void*x986; void*x987; void*x988; void*x989; void*x990; void*x991; void*x992; void*x993; id x994; void*x995; void*x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; void*x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; SEL x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; unsigned int x1015; void*x1016; bool x1017; void*x1018; void*x1019; in double x1020; void*x1021; const void*x1022; void*x1023; BOOL x1024; void*x1025; out const void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; float x1034; void*x1035; void*x1036; void*x1037; }*)arg2 classType:(int)arg3 error:(id*)arg4;
- (BOOL)insertRelationshipWithSourceIdentifier:(long long)arg1 targetIdentifier:(long long)arg2 error:(id*)arg3;
- (BOOL)lastObjectIdentifier:(long long*)arg1 error:(id*)arg2;
- (BOOL)needsUpgradeFromSchemaVersion:(int)arg1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)newRelationshipTargetsForSourceIdentifier:(long long)arg1 error:(id*)arg2;
- (BOOL)numberOfDatabaseObjects:(unsigned int*)arg1 error:(id*)arg2;
- (id)objectFromStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_blob { }*)openBlobForObject:(id)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 error:(id*)arg2;
- (struct sqlite3_blob { }*)openDataStateBlobWithIdentifier:(long long)arg1 willWrite:(BOOL)arg2 error:(id*)arg3;
- (BOOL)parseArchive:(struct Message { int (**x1)(); }*)arg1 forObject:(id)arg2 error:(id*)arg3;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)queryObjectWithIdentifier:(long long)arg1 error:(id*)arg2;
- (BOOL)setClosedCleanlyToken:(long long)arg1 error:(id*)arg2;
- (BOOL)setDocumentVersion:(struct { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (BOOL)updateDataStateWithIdentifier:(long long)arg1 size:(int)arg2 error:(id*)arg3;
- (BOOL)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2;

@end
