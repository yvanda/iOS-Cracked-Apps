//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGraphQLConnectionController, FBGraphQLConnectionControllerLoadBeganNotification, FBGraphQLConnectionControllerLoadCompletedNotification;

@protocol FBGraphQLConnectionControllerLoadListener <NSObject>
- (void)graphQLConnectionController:(FBGraphQLConnectionController *)arg1 didCompleteLoad:(FBGraphQLConnectionControllerLoadCompletedNotification *)arg2;
- (void)graphQLConnectionController:(FBGraphQLConnectionController *)arg1 didBeginLoad:(FBGraphQLConnectionControllerLoadBeganNotification *)arg2;
@end

