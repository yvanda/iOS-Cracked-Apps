//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@interface QQStoryAIOModel : QQAIOMsgModel
{
    _Bool _playReportFlag;
}

+ (void)refreshMsgContent:(id)arg1;
+ (_Bool)storyMsgTypeCheck:(id)arg1 smMsg:(id)arg2;
+ (_Bool)storyMsgTypeCheck:(id)arg1 xmlContent:(id)arg2;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) _Bool playReportFlag; // @synthesize playReportFlag=_playReportFlag;
- (_Bool)shouldDisplaySelfNick;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;

@end
