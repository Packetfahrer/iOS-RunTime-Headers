/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPDCNFDOverfeatNetwork : NSObject {
    NSString * _basename;
    int  _cpin;
    NSMutableDictionary * _errorForLayers;
    float  _maxScale;
    int  _mode;
    int  _scaleConfig;
    int  _scalingMode;
    BOOL  _useGPUScaler;
    NSString * _weights;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__first_; 
        } __end_cap_; 
    }  boxBlobs;
    struct CGColorSpace { } * colorSpace;
    struct pair<unsigned long long, unsigned long long> { 
        unsigned long long first; 
        unsigned long long second; 
    }  cropDims;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__first_; 
        } __end_cap_; 
    }  ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__first_; 
        } __end_cap_; 
    }  full_scales;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__first_; 
        } __end_cap_; 
    }  gpu_nets;
    int  n_resizers_for_batching;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__first_; 
        } __end_cap_; 
    }  net_scales;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__first_; 
        } __end_cap_; 
    }  probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__begin_; 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
            struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__first_; 
        } __end_cap_; 
    }  resizers_for_batching;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  retile_n_outputs_v;
    int  retile_stride;
    int  retile_tile_sz;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    }  scalesc;
    struct net_strides_configuration { 
        int num_layer; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } kernel_size; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } stride; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__first_; 
            } __end_cap_; 
        } pad; 
    }  strideConf;
    int  tile_h_1;
    int  tile_w_1;
}

@property (nonatomic, retain) NSString *basename;
@property (nonatomic) int cpin;
@property (nonatomic) float maxScale;
@property (nonatomic) int mode;
@property (nonatomic) int scaleConfig;
@property (nonatomic) int scalingMode;
@property (nonatomic) BOOL useGPUScaler;
@property (nonatomic, retain) NSString *weights;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoResizeForAspectRatio:(float)arg1;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(BOOL)arg7;
- (id)basename;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })boxBlobForScale:(int)arg1;
- (void)buildPyramid:(struct CGImage { }*)arg1 ci:(id)arg2 resizer:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (int)cpin;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })cpu_net:(int)arg1;
- (void)dealloc;
- (int)default_retile_outputs;
- (id)errorForLayers;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)generatePyramid:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (int)getNumScales;
- (double)getScale:(int)arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })gpu_net:(int)arg1;
- (id)init;
- (float)maxScale;
- (int)mode;
- (BOOL)needRetiling:(int)arg1;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })probBlobForScale:(int)arg1;
- (void)processBlob:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (void)processBlobNoRotation:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3;
- (void)processCGImage:(struct CGImage { }*)arg1;
- (void)processCGImageBatch:(id /* block */)arg1 block:(id /* block */)arg2;
- (void)processCIImage:(id)arg1;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1 gpu_resizer:(struct fast_pyramid_resizer_metal { struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { struct pair<unsigned long long, unsigned long long> {} *x_1_1_1; struct pair<unsigned long long, unsigned long long> {} *x_1_1_2; struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { struct pair<unsigned long long, unsigned long long> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<id<MTLTexture>, std::__1::allocator<id<MTLTexture> > > { id *x_2_1_1; id x_2_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_2_1_3; void*x_2_1_4; BOOL x_2_1_5; out void*x_2_1_6; void*x_2_1_7; const void*x_2_1_8; short x_2_1_9; short x_2_1_10; void*x_2_1_11; double x_2_1_12; void*x_2_1_13; void*x_2_1_14; void*x_2_1_15; int x_2_1_16; const void*x_2_1_17; void*x_2_1_18; void*x_2_1_19; short x_2_1_20; void*x_2_1_21; const out in void*x_2_1_22; void*x_2_1_23; int x_2_1_24; double x_2_1_25; void*x_2_1_26; void*x_2_1_27; void*x_2_1_28; unsigned long x_2_1_29; void*x_2_1_30; void*x_2_1_31; void*x_2_1_32; void*x_2_1_33; void*x_2_1_34; const void*x_2_1_35; void*x_2_1_36; void*x_2_1_37; char *x_2_1_38; void*x_2_1_39; void*x_2_1_40; short x_2_1_41; void*x_2_1_42; double x_2_1_43; SEL x_2_1_44; SEL x_2_1_45; void*x_2_1_46; void*x_2_1_47; void*x_2_1_48; SEL x_2_1_49; SEL x_2_1_50; void*x_2_1_51; long x_2_1_52; long x_2_1_53; out BOOL x_2_1_54; void*x_2_1_55; void*x_2_1_56; out const void*x_2_1_57; int x_2_1_58; double x_2_1_59; void*x_2_1_60; void*x_2_1_61; void*x_2_1_62; unsigned long x_2_1_63; void*x_2_1_64; void*x_2_1_65; void*x_2_1_66; void*x_2_1_67; void*x_2_1_68; const void*x_2_1_69; void*x_2_1_70; void*x_2_1_71; void*x_2_1_72; void*x_2_1_73; void*x_2_1_74; void*x_2_1_75; id *x_2_1_76; } x2; struct vector<id<MTLTexture>, std::__1::allocator<id<MTLTexture> > > { id *x_3_1_1; id x_3_1_2; void*x_3_1_3; void*x_3_1_4; BOOL x_3_1_5; out void*x_3_1_6; void*x_3_1_7; const void*x_3_1_8; short x_3_1_9; short x_3_1_10; void*x_3_1_11; double x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; int x_3_1_16; const void*x_3_1_17; void*x_3_1_18; void*x_3_1_19; short x_3_1_20; void*x_3_1_21; const out in void*x_3_1_22; void*x_3_1_23; int x_3_1_24; double x_3_1_25; void*x_3_1_26; void*x_3_1_27; void*x_3_1_28; unsigned long x_3_1_29; void*x_3_1_30; void*x_3_1_31; void*x_3_1_32; void*x_3_1_33; void*x_3_1_34; const void*x_3_1_35; void*x_3_1_36; void*x_3_1_37; char *x_3_1_38; void*x_3_1_39; void*x_3_1_40; short x_3_1_41; void*x_3_1_42; double x_3_1_43; SEL x_3_1_44; SEL x_3_1_45; void*x_3_1_46; void*x_3_1_47; void*x_3_1_48; SEL x_3_1_49; SEL x_3_1_50; void*x_3_1_51; long x_3_1_52; long x_3_1_53; out BOOL x_3_1_54; void*x_3_1_55; void*x_3_1_56; out const void*x_3_1_57; int x_3_1_58; double x_3_1_59; void*x_3_1_60; void*x_3_1_61; void*x_3_1_62; unsigned long x_3_1_63; void*x_3_1_64; void*x_3_1_65; void*x_3_1_66; void*x_3_1_67; void*x_3_1_68; const void*x_3_1_69; void*x_3_1_70; void*x_3_1_71; void*x_3_1_72; void*x_3_1_73; void*x_3_1_74; void*x_3_1_75; id *x_3_1_76; } x3; }*)arg2;
- (void)reset;
- (struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })resizerAtIndex:(int)arg1;
- (int)resizerCount;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg2 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)retryLoadingCaffeNet:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg1 name:(id)arg2 weights:(id)arg3 platform:(int)arg4 cp:(int)arg5;
- (int)scaleConfig;
- (int)scalingMode;
- (void)setBasename:(id)arg1;
- (void)setCpin:(int)arg1;
- (void)setMaxScale:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setScaleConfig:(int)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setUseGPUScaler:(BOOL)arg1;
- (void)setWeights:(id)arg1;
- (void)setup_retile;
- (void)storeDataForPruning:(struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1 prob:(float)arg2;
- (struct net_strides_configuration { int x1; struct vector<int, std::__1::allocator<int> > { int *x_2_1_1; int *x_2_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; })strideConfiguration;
- (BOOL)useGPUScaler;
- (id)weights;

@end
