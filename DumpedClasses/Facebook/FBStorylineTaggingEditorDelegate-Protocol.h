//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBStorylineCollaborator, FBStorylineTaggingEditor, NSArray;

@protocol FBStorylineTaggingEditorDelegate <NSObject>
- (void)storylineTaggingEditorDidTapTagButton:(FBStorylineTaggingEditor *)arg1;
- (void)storylineTaggingEditor:(FBStorylineTaggingEditor *)arg1 didTapCollaborator:(FBStorylineCollaborator *)arg2;
- (void)storylineTaggingEditor:(FBStorylineTaggingEditor *)arg1 didUpdateSuggestedTaggedCollaborators:(NSArray *)arg2;
@end

