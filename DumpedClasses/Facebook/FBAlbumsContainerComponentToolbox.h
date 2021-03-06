//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAlbumsContainerComponentToolbox-Protocol.h"

@class FBAlbumsContainerAnalytics, FBAlbumsContainerUpdateListenerAnnouncer, FBUserSession, NSString;
@protocol FBGraphQLConnectionFetchStatusListener, FBIntentHandler, FBNavigationCoordinator;

@interface FBAlbumsContainerComponentToolbox : NSObject <FBAlbumsContainerComponentToolbox>
{
    FBUserSession *_session;
    NSObject *_scenePath;
    id <FBIntentHandler> _intentHandler;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBAlbumsContainerUpdateListenerAnnouncer *_albumsUpdateListenerAnnouncer;
    id <FBGraphQLConnectionFetchStatusListener> _fetchStatusListener;
    FBAlbumsContainerAnalytics *_albumsContainerAnalytics;
}

@property(readonly, nonatomic) FBAlbumsContainerAnalytics *albumsContainerAnalytics; // @synthesize albumsContainerAnalytics=_albumsContainerAnalytics;
@property(readonly, nonatomic) __weak id <FBGraphQLConnectionFetchStatusListener> fetchStatusListener; // @synthesize fetchStatusListener=_fetchStatusListener;
@property(readonly, nonatomic) FBAlbumsContainerUpdateListenerAnnouncer *albumsUpdateListenerAnnouncer; // @synthesize albumsUpdateListenerAnnouncer=_albumsUpdateListenerAnnouncer;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(readonly, nonatomic) NSObject *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 intentHandler:(id)arg3 navigationCoordinator:(id)arg4 albumsUpdateListenerAnnouncer:(id)arg5 fetchStatusListener:(id)arg6 albumsContainerAnalytics:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

