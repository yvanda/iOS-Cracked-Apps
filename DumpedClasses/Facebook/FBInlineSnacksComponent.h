//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class CKComponent, FBHScrollComponent, FBInlineSnacksComponentState, FBInlineSnacksStoryBucketData, FBSnacksToolbox, FBStoriesCellComponent, NSArray;

@interface FBInlineSnacksComponent : CKCompositeComponent
{
    CKComponent *_mainComponent;
    _Bool _hasNewSeenState;
    _Bool _hasNewReactions;
    FBSnacksToolbox *_toolbox;
    FBStoriesCellComponent *_selfCellComponent;
    FBInlineSnacksStoryBucketData *_storyBucketData;
    FBHScrollComponent *_hScrollComponent;
    NSArray *_hScrollCellComponents;
    FBInlineSnacksComponentState *_state;
}

+ (id)newWithModel:(id)arg1 toolbox:(id)arg2;
+ (id)initialState;
@property(readonly, nonatomic) FBInlineSnacksComponentState *state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasNewReactions; // @synthesize hasNewReactions=_hasNewReactions;
@property(readonly, nonatomic) _Bool hasNewSeenState; // @synthesize hasNewSeenState=_hasNewSeenState;
@property(copy, nonatomic) NSArray *hScrollCellComponents; // @synthesize hScrollCellComponents=_hScrollCellComponents;
@property(retain, nonatomic) FBHScrollComponent *hScrollComponent; // @synthesize hScrollComponent=_hScrollComponent;
@property(copy, nonatomic) FBInlineSnacksStoryBucketData *storyBucketData; // @synthesize storyBucketData=_storyBucketData;
@property(retain, nonatomic) FBStoriesCellComponent *selfCellComponent; // @synthesize selfCellComponent=_selfCellComponent;
@property(retain, nonatomic) FBSnacksToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;

@end

