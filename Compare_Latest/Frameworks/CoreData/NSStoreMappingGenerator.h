/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSStoreMappingGenerator : NSObject
{
}

+ (void)invalidate;
+ (id)defaultMappingGenerator;
- (id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)joinsForRelationship:(id)arg1;
- (id)primaryKeyForEntity:(id)arg1;
- (id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)internalNameForPropertyName:(id)arg1 version:(int)arg2;
- (id)internalNameForEntityName:(id)arg1 version:(int)arg2;
- (id)externalNameForPropertyName:(id)arg1;
- (id)externalNameForEntityName:(id)arg1;

@end

