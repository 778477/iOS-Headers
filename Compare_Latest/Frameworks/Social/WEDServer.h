/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator;

@interface WEDServer : NSObject
{
    NSMutableDictionary *_sessionMap;
    NSMutableSet *_clientSessions;
    NSMutableSet *_daemonSessions;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addSessionWithConnection:(id)arg1;
- (void)_removeClientSessionProxy:(id)arg1;
- (void)_addClientSessionProxy:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
- (void)_removeSqliteFiles:(id)arg1 storeURL:(id)arg2;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (id)clientSessionForDaemonSession:(id)arg1;

@end

