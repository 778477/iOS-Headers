/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMappingModel, NSMutableDictionary, NSSQLAdapter, NSSQLConnection, NSSQLCore, NSSQLModel;

@interface _NSSQLiteStoreMigrator : NSObject
{
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLConnection *_connection;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
}

+ (void)_setAnnotatesMigrationMetadata:(BOOL)arg1;
+ (BOOL)_annotatesMigrationMetadata;
@property(readonly) NSSQLAdapter *adapter; // @synthesize adapter=_adapter;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 migrationType:(int)arg3;
- (void)_populateTableMigrationDescriptions;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (id)createIndexStatementsForEntity:(id)arg1;
- (id)createStatementsForUpdatingEntityKeys;
- (id)createEntityMigrationStatements;
- (BOOL)performMigration:(id *)arg1;
- (void)dealloc;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;

@end

