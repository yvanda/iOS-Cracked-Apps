//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QLDislikeOptionItem;

@protocol QLFeedbackItemsDataSource <NSObject>
- (unsigned long long)feedbackCard:(id)arg1 shouldReturnCount:(_Bool)arg2;
- (NSMutableArray *)feedbackCard:(id)arg1 fetchAllItems:(_Bool)arg2;
- (QLDislikeOptionItem *)feedbackCard:(id)arg1 optionForItemAtPos:(unsigned long long)arg2;
@end

