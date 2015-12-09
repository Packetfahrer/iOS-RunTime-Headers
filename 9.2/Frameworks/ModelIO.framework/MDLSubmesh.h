/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSubmesh : NSObject <MDLNamed> {
    int  _geometryType;
    <MDLMeshBuffer> * _indexBuffer;
    unsigned int  _indexCount;
    unsigned int  _indexType;
    MDLMaterial * _material;
    NSString * _name;
    MDLSubmeshTopology * _topology;
}

@property (nonatomic, readonly) int geometryType;
@property (nonatomic, readonly, retain) <MDLMeshBuffer> *indexBuffer;
@property (nonatomic, readonly) unsigned int indexCount;
@property (nonatomic, readonly) unsigned int indexType;
@property (nonatomic, retain) MDLMaterial *material;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) MDLSubmeshTopology *topology;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (struct MDLAABB { })boundingBoxForMesh:(id)arg1;
- (void)dealloc;
- (void)debugPrintToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (int)geometryType;
- (id)indexBuffer;
- (unsigned int)indexCount;
- (unsigned int)indexType;
- (id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 geometryType:(int)arg4 material:(id)arg5;
- (id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned int)arg2 geometryType:(int)arg3;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned int)arg3 indexType:(unsigned int)arg4 geometryType:(int)arg5 material:(id)arg6;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned int)arg3 indexType:(unsigned int)arg4 geometryType:(int)arg5 material:(id)arg6 topology:(id)arg7;
- (id)material;
- (id)name;
- (void)setMaterial:(id)arg1;
- (void)setName:(id)arg1;
- (id)topology;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)newSubmeshWithSCNGeometryElement:(id)arg1;
+ (id)submeshWithSCNGeometryElement:(id)arg1;

@end
