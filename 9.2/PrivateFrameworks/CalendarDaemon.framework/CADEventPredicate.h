/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *eventUUID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL shouldLoadDefaultProperties;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long x_20_1_1; BOOL x_20_1_2[40]; } x20; bool x21; struct __CFArray {} *x22; struct __CFArray {} *x23; id x24; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; SEL x37; void*x38; void*x39; void*x40; void*x41; void*x42; unsigned short x43; void*x44; void*x45; void*x46; in void*x47; const int x48; BOOL x49; unsigned int x50; in void*x51; void*x52; in void*x53; void*x54; void*x55; long long x56; void*x57; void*x58; short x59; void*x60; void*x61; BOOL x62; void*x63; void*x64; void*x65; void*x66; out void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; int x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; unsigned long x160; void*x161; in void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; SEL x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; SEL x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; unsigned int x227; long doublex228; unsigned short x229; void*x230; void*x231; in void*x232; const int x233; BOOL x234; unsigned char x235; out void*x236; void*x237; long x238; void*x239; void*x240; int x241; out in void*x242; void*x243; in double x244; long x245; void*x246; const void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; SEL x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; unsigned short x268; void*x269; short x270; void*x271; void*x272; void*x273; void*x274; unsigned long x275; int x276; unsigned int x277/* : ? */; const void*x278; const void*x279; void*x280; void*x281; const int x282; void x283; void*x284; void*x285; void*x286; void*x287; const void*x288; void*x289; void*x290; void*x291; out const void*x292; short x293; void*x294; unsigned int x295; long doublex296; unsigned short x297; void*x298; float x299; const void*x300; void*x301; void*x302; void*x303; out const void*x304; void*x305; unsigned int x306; long doublex307; unsigned short x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; SEL x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; in void*x347; short x348; void*x349; int x350; void*x351; void*x352; void*x353; in void*x354; void*x355; void*x356; double x357; void*x358; void*x359; void*x360; short x361; void*x362; void*x363; void*x364; out void*x365; const void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; SEL x376; void*x377; void*x378; void*x379; void*x380; void*x381; unsigned short x382; void*x383; void*x384; unsigned int x385; void*x386; out void*x387; out void x388; void*x389; const bycopy unsigned int x390/* : ? */; short x391; void*x392; const void x393; void*x394; const void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; out void*x401; void*x402; int x403; in void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; unsigned short x412; Class x413; long long x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; void*x436; void*x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; out void*x450; void*x451; unsigned short x452; void*x453; void*x454; unsigned long x455; int x456; in void*x457; unsigned short x458; void*x459; void*x460; BOOL x461; int x462; in void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; int x478; long long x479; void*x480; void*x481; unsigned short x482; void*x483; short x484; void*x485; void*x486; void*x487; void*x488; unsigned long x489; int x490; unsigned int x491/* : ? */; const void*x492; const void*x493; void*x494; void*x495; const int x496; void x497; void*x498; void*x499; void*x500; void*x501; const void*x502; void*x503; void*x504; void*x505; out const void*x506; short x507; void*x508; int x509; void*x510; out const void*x511; unsigned int x512; void*x513; void*x514; out const void*x515; void*x516; float x517; const void*x518; void*x519; void*x520; void*x521; out const void*x522; void*x523; int x524; void*x525; out const void*x526; unsigned int x527; void*x528; void*x529; out const void*x530; void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; oneway void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; SEL x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; void*x624; void*x625; void*x626; void*x627; void*x628; void*x629; void*x630; void*x631; void*x632; SEL x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; in void*x645; int x646; BOOL x647; void*x648; void*x649; void*x650; void*x651; void*x652; short x653; void*x654; out in short x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; id x666; void*x667; void*x668; void*x669; void*x670; long doublex671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; int x691; void*x692; void*x693; void*x694; out void*x695; void*x696; void*x697; void*x698; void*x699; void*x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; SEL x739; void*x740; void*x741; void*x742; void*x743; void*x744; void*x745; void*x746; void*x747; void*x748; void*x749; void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; void*x769; void*x770; void*x771; void*x772; void*x773; int x774; void*x775; void*x776; void*x777; void*x778; void*x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; unsigned long x804; void*x805; in void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; SEL x833; void*x834; void*x835; void*x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; void*x843; void*x844; void*x845; void*x846; void*x847; void*x848; SEL x849; void*x850; void*x851; void*x852; void*x853; unsigned char x854; void*x855; unsigned short x856; void*x857; short x858; void*x859; void*x860; void*x861; void*x862; unsigned long x863; int x864; unsigned int x865/* : ? */; const void*x866; const void*x867; void*x868; void*x869; const int x870; void x871; void*x872; void*x873; void*x874; void*x875; const void*x876; void*x877; void*x878; void*x879; out const void*x880; short x881; void*x882; int x883; void*x884; out const void*x885; unsigned int x886; void*x887; void*x888; out const void*x889; void*x890; float x891; const void*x892; void*x893; void*x894; void*x895; out const void*x896; void*x897; int x898; void*x899; out const void*x900; unsigned int x901; void*x902; void*x903; out const void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; void*x913; void*x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; void*x921; void*x922; void*x923; void*x924; void*x925; void*x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; oneway void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; bycopy void*x951; void*x952; unsigned long x953; unsigned int x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; void*x979; void*x980; unsigned short x981; void*x982; short x983; void*x984; void*x985; void*x986; void*x987; unsigned long x988; int x989; unsigned int x990/* : ? */; const void*x991; const void*x992; void*x993; void*x994; const int x995; void x996; void*x997; void*x998; void*x999; void*x1000; const void*x1001; void*x1002; void*x1003; void*x1004; out const void*x1005; short x1006; void*x1007; void*x1008; void*x1009; out unsigned short x1010; void*x1011; const void x1012; int x1013; BOOL x1014; void*x1015; short x1016; void*x1017; float x1018; const void*x1019; void*x1020; void*x1021; void*x1022; out const void*x1023; void*x1024; void*x1025; void*x1026; out unsigned short x1027; void*x1028; const void x1029; int x1030; BOOL x1031; void*x1032; short x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; oneway void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; void*x1067; void*x1068; void*x1069; void*x1070; SEL x1071; void*x1072; void*x1073; void*x1074; void*x1075; unsigned char x1076; void*x1077; unsigned short x1078; void*x1079; short x1080; void*x1081; void*x1082; void*x1083; void*x1084; unsigned long x1085; int x1086; unsigned int x1087/* : ? */; const void*x1088; const void*x1089; void*x1090; void*x1091; const int x1092; void x1093; void*x1094; void*x1095; void*x1096; void*x1097; const void*x1098; void*x1099; void*x1100; void*x1101; out const void*x1102; short x1103; void*x1104; int x1105; void*x1106; out const void*x1107; unsigned int x1108; void*x1109; void*x1110; out const void*x1111; void*x1112; float x1113; const void*x1114; void*x1115; void*x1116; void*x1117; out const void*x1118; void*x1119; int x1120; void*x1121; out const void*x1122; unsigned int x1123; void*x1124; void*x1125; out const void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; SEL x1134; void*x1135; void*x1136; void*x1137; void*x1138; void*x1139; void*x1140; void*x1141; void*x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; void*x1151; void*x1152; void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; void*x1178; void*x1179; void*x1180; long long x1181; void*x1182; void*x1183; void*x1184; out void*x1185; void*x1186; void*x1187; void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; void*x1212; void*x1213; void*x1214; void*x1215; out void*x1216; void*x1217; unsigned long long x1218; void*x1219; unsigned long x1220; void*x1221; short x1222; short x1223; out void*x1224; void*x1225; void*x1226; void*x1227; void*x1228; void*x1229; void*x1230; void*x1231; void*x1232; void*x1233; void*x1234; void*x1235; void*x1236; void*x1237; void*x1238; void*x1239; void*x1240; void*x1241; void*x1242; void*x1243; void*x1244; int x1245; long long x1246; void*x1247; void*x1248; unsigned short x1249; void*x1250; short x1251; void*x1252; void*x1253; void*x1254; void*x1255; unsigned long x1256; int x1257; unsigned int x1258/* : ? */; const void*x1259; const void*x1260; void*x1261; void*x1262; const int x1263; void x1264; void*x1265; void*x1266; void*x1267; void*x1268; const void*x1269; void*x1270; void*x1271; void*x1272; out const void*x1273; short x1274; void*x1275; int x1276; void*x1277; out const void*x1278; unsigned int x1279; void*x1280; void*x1281; out const void*x1282; void*x1283; float x1284; const void*x1285; void*x1286; void*x1287; void*x1288; out const void*x1289; void*x1290; int x1291; void*x1292; out const void*x1293; unsigned int x1294; void*x1295; void*x1296; out const void*x1297; void*x1298; void*x1299; void*x1300; void*x1301; void*x1302; void*x1303; void*x1304; void*x1305; void*x1306; oneway void*x1307; void*x1308; void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; void*x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; void*x1330; void*x1331; void*x1332; void*x1333; void*x1334; void*x1335; SEL x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; inout unsigned short x1342; void*x1343; void*x1344; unsigned long x1345; unsigned short x1346; void*x1347; short x1348; short x1349; int x1350; out in long doublex1351; void*x1352; void*x1353; void*x1354; long doublex1355; void*x1356; long x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; void*x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; void*x1378; void*x1379; void*x1380; SEL x1381; void*x1382; void*x1383; void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; short x1389; int x1390; BOOL x1391; unsigned short x1392; void*x1393; out const void*x1394; unsigned int x1395; void*x1396; void*x1397; void*x1398; void*x1399; void*x1400; void*x1401; void*x1402; double x1403; void*x1404; void*x1405; void*x1406; unsigned char x1407; out in void*x1408; void*x1409; void*x1410; void*x1411; void*x1412; void*x1413; void*x1414; void*x1415; void*x1416; void*x1417; void*x1418; void*x1419; void*x1420; void*x1421; void*x1422; void*x1423; out void*x1424; void*x1425; Class x1426; long long x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; out void*x1437; long x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; out void*x1444; in void*x1445; unsigned short x1446; void*x1447; void*x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; struct x1458; void*x1459; void*x1460; void*x1461; int x1462; void*x1463; in void*x1464; void*x1465; void*x1466; void*x1467; void*x1468; union x1469; void*x1470; char *x1471; void*x1472; char *x1473; void*x1474; void*x1475; void*x1476; void*x1477; void*x1478; void*x1479; void*x1480; void*x1481; void*x1482; void*x1483; void*x1484; void*x1485; void*x1486; void*x1487; void*x1488; void*x1489; void*x1490; union x1491; void*x1492; void*x1493; void*x1494; void*x1495; void*x1496; void*x1497; void*x1498; unsigned int x1499/* : ? */; void*x1500; out void*x1501; out void*x1502; long x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; void*x1523; void*x1524; int x1525; void*x1526; in void*x1527; void*x1528; void*x1529; void*x1530; void*x1531; void*x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; void*x1547; void*x1548; void*x1549; int x1550; void*x1551; in void*x1552; void*x1553; void*x1554; void*x1555; void*x1556; void*x1557; void*x1558; void*x1559; void*x1560; void*x1561; void*x1562; void*x1563; void*x1564; void*x1565; void*x1566; void*x1567; void*x1568; void*x1569; void*x1570; void*x1571; void*x1572; void*x1573; void*x1574; void*x1575; void*x1576; in void*x1577; short x1578; void*x1579; int x1580; void*x1581; void*x1582; void*x1583; in void*x1584; void*x1585; void*x1586; double x1587; void*x1588; void*x1589; void*x1590; int x1591; void*x1592; in void*x1593; void*x1594; void*x1595; void*x1596; void*x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; void*x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; void*x1611; void*x1612; void*x1613; void*x1614; void*x1615; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)eventUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (BOOL)shouldLoadDefaultProperties;
- (id)timeZone;

@end
