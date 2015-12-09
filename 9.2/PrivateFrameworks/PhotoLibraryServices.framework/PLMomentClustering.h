/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentClustering : NSObject {
    NSMutableDictionary * __clustersByNodeObjectID;
    NSMutableDictionary * __clustersByObjectID;
    CLGeocoder * __geocoder;
    NSMutableDictionary * __markedNodesByObjectID;
    unsigned int  __minimumNumberOfNodes;
    PLMomentNodeCache * __nodeCache;
    unsigned int  __numberOfVisitedNodes;
    unsigned int  __totalNumberOfNodes;
    BOOL  _accumulatesSmallClusters;
    double  _accumulationJoinThreshold;
    double  _accumulationRejectionThreshold;
    double  _accumulationRejectionTimeInterval;
    unsigned int  _accumulationSize;
    double  _accumulationTimeInterval;
    NSArray * _clusters;
    NSSet * _deletedClusters;
    BOOL  _dirty;
    NSSet * _insertedClusters;
    id /* block */  _progressBlock;
    BOOL  _shouldApplyUserInfluenceBeforeClustering;
    double  _sigma;
    double  _spatialJoinThreshold;
    double  _spatialJoinTimeInterval;
    BOOL  _spatialJoinsAdjacentClusters;
    double  _theta;
    NSSet * _updatedClusters;
}

@property (nonatomic, readonly) NSMutableDictionary *_clustersByNodeObjectID;
@property (nonatomic, readonly) NSMutableDictionary *_clustersByObjectID;
@property (nonatomic, readonly) CLGeocoder *_geocoder;
@property (nonatomic, readonly) NSMutableDictionary *_markedNodesByObjectID;
@property (setter=_setMinimumNumberOfNodes:, nonatomic) unsigned int _minimumNumberOfNodes;
@property (nonatomic, readonly) PLMomentNodeCache *_nodeCache;
@property (setter=_setNumberOfVisitedNodes:, nonatomic) unsigned int _numberOfVisitedNodes;
@property (setter=_setTotalNumberOfNodes:, nonatomic) unsigned int _totalNumberOfNodes;
@property (nonatomic) BOOL accumulatesSmallClusters;
@property (nonatomic) double accumulationJoinThreshold;
@property (nonatomic) double accumulationRejectionThreshold;
@property (nonatomic) double accumulationRejectionTimeInterval;
@property (nonatomic) unsigned int accumulationSize;
@property (nonatomic) double accumulationTimeInterval;
@property (nonatomic, copy) NSArray *clusters;
@property (nonatomic, copy) NSSet *deletedClusters;
@property (getter=isDirty, setter=_setDirty:, nonatomic) BOOL dirty;
@property (nonatomic, readonly) BOOL hasMarkedNodes;
@property (nonatomic, copy) NSSet *insertedClusters;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic) BOOL shouldApplyUserInfluenceBeforeClustering;
@property (nonatomic) double sigma;
@property (nonatomic) double spatialJoinThreshold;
@property (nonatomic) double spatialJoinTimeInterval;
@property (nonatomic) BOOL spatialJoinsAdjacentClusters;
@property (nonatomic) double theta;
@property (nonatomic, copy) NSSet *updatedClusters;

+ (double)maximumClusterTime;

- (id)_clustersByMergingUserInfluencedClusters:(id)arg1;
- (id)_clustersByNodeObjectID;
- (id)_clustersByObjectID;
- (id)_clustersBySplittingUserInfluencedClusters:(id)arg1;
- (void)_commonPLMomentClusteringManagerInitialization;
- (id)_geocoder;
- (id)_markedNodesByObjectID;
- (unsigned int)_minimumNumberOfNodes;
- (id)_nodeCache;
- (unsigned int)_numberOfVisitedNodes;
- (void)_setClusters:(id)arg1;
- (void)_setDeletedClusters:(id)arg1;
- (void)_setDirty:(BOOL)arg1;
- (void)_setInsertedClusters:(id)arg1;
- (void)_setMinimumNumberOfNodes:(unsigned int)arg1;
- (void)_setNumberOfVisitedNodes:(unsigned int)arg1;
- (void)_setTotalNumberOfNodes:(unsigned int)arg1;
- (void)_setUpdatedClusters:(id)arg1;
- (unsigned int)_totalNumberOfNodes;
- (id)accumulateSmallClustersFromClusters:(id)arg1;
- (BOOL)accumulatesSmallClusters;
- (double)accumulationJoinThreshold;
- (double)accumulationRejectionThreshold;
- (double)accumulationRejectionTimeInterval;
- (unsigned int)accumulationSize;
- (double)accumulationTimeInterval;
- (id)clusters;
- (id)clustersByApplyingUserInfluenceToClusters:(id)arg1;
- (id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3;
- (void)dealloc;
- (id)deletedClusters;
- (id)generateClustersForAssets:(id)arg1;
- (void)generateClustersForAssets:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (BOOL)hasMarkedNodes;
- (id)init;
- (id)initWithManagedMoments:(id)arg1;
- (id)insertedClusters;
- (BOOL)isDirty;
- (void)markNodeForDiagnosis:(id)arg1;
- (id)neighborsOfNode:(id)arg1;
- (id)neighborsOfTaggedNode:(id)arg1;
- (id /* block */)progressBlock;
- (void)setAccumulatesSmallClusters:(BOOL)arg1;
- (void)setAccumulationJoinThreshold:(double)arg1;
- (void)setAccumulationRejectionThreshold:(double)arg1;
- (void)setAccumulationRejectionTimeInterval:(double)arg1;
- (void)setAccumulationSize:(unsigned int)arg1;
- (void)setAccumulationTimeInterval:(double)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setShouldApplyUserInfluenceBeforeClustering:(BOOL)arg1;
- (void)setSigma:(double)arg1;
- (void)setSpatialJoinThreshold:(double)arg1;
- (void)setSpatialJoinTimeInterval:(double)arg1;
- (void)setSpatialJoinsAdjacentClusters:(BOOL)arg1;
- (void)setTheta:(double)arg1;
- (BOOL)shouldApplyUserInfluenceBeforeClustering;
- (double)sigma;
- (id)spatialJoinClustersFromClusters:(id)arg1;
- (double)spatialJoinThreshold;
- (double)spatialJoinTimeInterval;
- (BOOL)spatialJoinsAdjacentClusters;
- (id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2;
- (double)theta;
- (id)updatedClusters;

@end