//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVInvitedListDataManager, NSMutableArray;

@interface KTVInvitedListVM : KFViewModelObject
{
    _Bool _isFresh;
    KTVInvitedListDataManager *_listDM;
    NSMutableArray *_invites;
}

@property(retain, nonatomic) NSMutableArray *invites; // @synthesize invites=_invites;
@property(retain, nonatomic) KTVInvitedListDataManager *listDM; // @synthesize listDM=_listDM;
@property(nonatomic) _Bool isFresh; // @synthesize isFresh=_isFresh;
- (void).cxx_destruct;
- (long long)countOfInviteAchive;
- (void)deleteInviteForIndex:(long long)arg1;
- (id)invitedItemAtIndex:(long long)arg1;
- (void)handleLoadMoreSuccess;
- (void)handleUpdateSuccess;
- (long long)numberOfInvites;
- (void)loadMore;
- (void)update;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool haveMoreData;

@end

