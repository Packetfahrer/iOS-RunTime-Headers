/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCoastlineGroup : NSObject {
    struct unique_ptr<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> > > { 
        struct __compressed_pair<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> *, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> > > { 
            struct MeshVendor<ggl::PolygonMesh::MeshMesh> {} *__first_; 
        } __ptr_; 
    }  _coastlineMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > > { 
        struct __compressed_pair<ggl::MeshVendor<ggl::Glow::MeshMesh> *, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > > { 
            struct MeshVendor<ggl::Glow::MeshMesh> {} *__first_; 
        } __ptr_; 
    }  _glowMeshVendor;
    struct shared_ptr<gss::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
    unsigned int  _tilePointSize;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{MeshVendor<ggl::PolygonMesh::MeshMesh>={vector<ggl::PolygonMesh::MeshMesh *' */ struct *coastlineMeshVendor; /* unknown property attribute:  std::__1::allocator<ggl::PolygonMesh::MeshMesh *> >=^^{MeshMesh}}}^{MeshMesh}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{MeshVendor<ggl::Glow::MeshMesh>={vector<ggl::Glow::MeshMesh *' */ struct *glowMeshVendor; /* unknown property attribute:  std::__1::allocator<ggl::Glow::MeshMesh *> >=^^{MeshMesh}}}^{MeshMesh}} */
@property (nonatomic, readonly) struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; } styleQuery;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoastlineFeature:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*)arg1;
- (const struct MeshVendor<ggl::PolygonMesh::MeshMesh> { struct vector<ggl::PolygonMesh::MeshMesh *, std::__1::allocator<ggl::PolygonMesh::MeshMesh *> > { struct MeshMesh {} **x_1_1_1; struct MeshMesh {} **x_1_1_2; struct __compressed_pair<ggl::PolygonMesh::MeshMesh **, std::__1::allocator<ggl::PolygonMesh::MeshMesh *> > { struct MeshMesh {} **x_3_2_1; } x_1_1_3; } x1; struct MeshMesh {} *x2; }*)coastlineMeshVendor;
- (const struct MeshVendor<ggl::Glow::MeshMesh> { struct vector<ggl::Glow::MeshMesh *, std::__1::allocator<ggl::Glow::MeshMesh *> > { struct MeshMesh {} **x_1_1_1; struct MeshMesh {} **x_1_1_2; struct __compressed_pair<ggl::Glow::MeshMesh **, std::__1::allocator<ggl::Glow::MeshMesh *> > { struct MeshMesh {} **x_3_2_1; } x_1_1_3; } x1; struct MeshMesh {} *x2; }*)glowMeshVendor;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg1 tilePointSize:(unsigned int)arg2;
- (struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQuery;

@end
