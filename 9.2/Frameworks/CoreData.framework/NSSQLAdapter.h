/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAdapter : NSObject {
    NSMutableArray * _connections;
    NSSQLCore * _sqlCore;
}

- (void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2;
- (id)_newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (id)_originalRowForUpdate:(id)arg1;
- (void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2;
- (id)_statementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned int)arg4;
- (id)connections;
- (id)createConnection;
- (void)dealloc;
- (id)generateDeleteStatementsForRequest:(id)arg1 resultObject:(id*)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2;
- (Class)generatorClass;
- (BOOL)hasOpenConnections;
- (id)initWithSQLCore:(id)arg1;
- (id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1;
- (id)newConnection;
- (id)newConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4;
- (id)newCorrelationDeleteStatementForRelationship:(id)arg1;
- (id)newCorrelationInsertStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)newCorrelationReorderStatementForRelationship:(id)arg1;
- (id)newCountStatementWithFetchRequest:(id)arg1;
- (id)newCreateIndexStatementForColumn:(id)arg1;
- (id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)newCreateIndexStatementForColumns:(id)arg1;
- (id)newCreateIndexStatementForCorrelationTable:(id)arg1;
- (id)newCreatePrimaryKeyTableStatement;
- (id)newCreateTableStatementForEntity:(id)arg1;
- (id)newCreateTableStatementForManyToMany:(id)arg1;
- (id)newDeleteStatementWithRow:(id)arg1;
- (id)newDropTableStatementForTableNamed:(id)arg1;
- (id)newGeneratorWithStatement:(id)arg1;
- (id)newInsertStatementWithRow:(id)arg1;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2;
- (id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2;
- (id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3;
- (id)newSelectStatementWithFetchRequest:(id)arg1;
- (id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1;
- (id)newStatementWithEntity:(id)arg1;
- (id)newStatementWithSQLString:(id)arg1;
- (id)newStatementWithoutEntity;
- (id)newUpdateStatementWithRow:(id)arg1;
- (void)registerConnection:(id)arg1;
- (id)sqlCore;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg1;
- (Class)statementClass;
- (BOOL)supportsCorrelatedSubqueries;
- (id)type;
- (id)typeStringForColumn:(id)arg1;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (void)unregisterConnection:(id)arg1;
- (id)url;

@end
