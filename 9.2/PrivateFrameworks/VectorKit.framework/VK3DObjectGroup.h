/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectGroup : NSObject {
    struct Box<float, 3> { 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _minimum; 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _maximum; 
    }  _bounds;
    bool  _hasBounds;
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > > { 
        struct __compressed_pair<ggl::MeshVendor<ggl::Building::BuildingMesh> *, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh> > > { 
            struct MeshVendor<ggl::Building::BuildingMesh> {} *__first_; 
        } __ptr_; 
    }  _meshVendor;
    struct shared_ptr<gss::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<float' */ struct  bounds; /* unknown property attribute:  1>=[3f]}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{MeshVendor<ggl::Building::BuildingMesh>={vector<ggl::Building::BuildingMesh *' */ struct *meshVendor; /* unknown property attribute:  std::__1::allocator<ggl::Building::BuildingMesh *> >=^^{BuildingMesh}}}^{BuildingMesh}} */
@property (nonatomic) struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; } styleQuery;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBoundingBox:(struct Box<float, 3> { struct Matrix<float, 3, 1> { float x_1_1_1[3]; } x1; struct Matrix<float, 3, 1> { float x_2_1_1[3]; } x2; })arg1;
- (struct Box<float, 3> { struct Matrix<float, 3, 1> { float x_1_1_1[3]; } x1; struct Matrix<float, 3, 1> { float x_2_1_1[3]; } x2; })bounds;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct MeshVendor<ggl::Building::BuildingMesh> { struct vector<ggl::Building::BuildingMesh *, std::__1::allocator<ggl::Building::BuildingMesh *> > { struct BuildingMesh {} **x_1_1_1; struct BuildingMesh {} **x_1_1_2; struct __compressed_pair<ggl::Building::BuildingMesh **, std::__1::allocator<ggl::Building::BuildingMesh *> > { struct BuildingMesh {} **x_3_2_1; } x_1_1_3; } x1; struct BuildingMesh {} *x2; }*)meshVendor;
- (void)setStyleQuery:(struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQuery;

@end
