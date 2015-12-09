/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPipeline : SGPipelineDissector {
    NSDictionary * _dissectorsAndDependencies;
}

+ (id)customPipeline:(id)arg1;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
+ (id)fullPipeline;
+ (id)parallelPipeline:(id)arg1;
+ (id)quotedRegionPipeline;
+ (id)quotedRegionPipelineForIpsosTesting;

- (void).cxx_destruct;
- (void)_dissectEntity:(id)arg1 andThen:(id /* block */)arg2;
- (void)dissect:(id)arg1;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (id)dissectOperations:(id)arg1;
- (void)dissectSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 andStore:(id)arg5;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;

@end
