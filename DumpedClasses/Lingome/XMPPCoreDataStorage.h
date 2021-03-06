//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSString;

@interface XMPPCoreDataStorage : NSObject
{
    NSMutableDictionary *myJidCache;
    int pendingRequests;
    NSManagedObjectModel *managedObjectModel;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectContext *managedObjectContext;
    NSManagedObjectContext *mainThreadManagedObjectContext;
    NSMutableArray *willSaveManagedObjectContextBlocks;
    NSMutableArray *didSaveManagedObjectContextBlocks;
    NSString *databaseFileName;
    NSDictionary *storeOptions;
    unsigned long long saveThreshold;
    unsigned long long saveCount;
    _Bool autoRemovePreviousDatabaseFile;
    _Bool autoRecreateDatabaseFile;
    _Bool autoAllowExternalBinaryDataStorage;
    struct dispatch_queue_s *storageQueue;
    void *storageQueueTag;
}

+ (void)unregisterDatabaseFileName:(id)arg1;
+ (_Bool)registerDatabaseFileName:(id)arg1;
+ (void)initialize;
@property(readonly) NSDictionary *storeOptions; // @synthesize storeOptions;
@property(readonly) NSString *databaseFileName; // @synthesize databaseFileName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addDidSaveManagedObjectContextBlock:(CDUnknownBlockType)arg1;
- (void)addWillSaveManagedObjectContextBlock:(CDUnknownBlockType)arg1;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)maybeSave;
- (void)maybeSave:(int)arg1;
- (void)save;
- (unsigned long long)numberOfUnsavedChanges;
@property _Bool autoAllowExternalBinaryDataStorage;
@property _Bool autoRecreateDatabaseFile;
@property _Bool autoRemovePreviousDatabaseFile;
- (void)managedObjectContextDidSave:(id)arg1;
@property(readonly) NSManagedObjectContext *mainThreadManagedObjectContext;
- (id)managedObjectContext;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property(readonly) NSManagedObjectModel *managedObjectModel;
- (id)persistentStoreDirectory;
- (void)updateJidCache:(id)arg1;
- (void)didChangeCachedMyJID:(id)arg1 forXMPPStream:(id)arg2;
- (id)myJIDForXMPPStream:(id)arg1;
@property unsigned long long saveThreshold;
- (_Bool)configureWithParent:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (id)initWithInMemoryStore;
- (id)initWithDatabaseFilename:(id)arg1 storeOptions:(id)arg2;
- (id)init;
- (void)commonInit;
- (void)mainThreadManagedObjectContextDidMergeChanges;
- (void)didSaveManagedObjectContext;
- (void)willSaveManagedObjectContext;
- (void)didCreateManagedObjectContext;
- (void)didNotAddPersistentStoreWithPath:(id)arg1 options:(id)arg2 error:(id)arg3;
- (_Bool)addPersistentStoreWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)willCreatePersistentStoreWithPath:(id)arg1 options:(id)arg2;
- (id)defaultStoreOptions;
- (id)defaultDatabaseFileName;
- (id)managedObjectModelBundle;
- (id)managedObjectModelName;

@end

