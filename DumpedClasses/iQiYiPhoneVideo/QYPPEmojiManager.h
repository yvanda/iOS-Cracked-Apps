//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYPPEmojiKeyboardDataSource-Protocol.h"

@class NSArray, NSString;

@interface QYPPEmojiManager : NSObject <QYPPEmojiKeyboardDataSource>
{
    NSArray *_emojiJsonList;
    NSString *_version;
}

+ (_Bool)checkInternetAccessable;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)getBusinessNameWithType:(unsigned long long)arg1;
- (id)getFullUrlOfEmotion:(unsigned long long)arg1;
- (id)emojiVersion;
- (id)emojiKeyboard:(id)arg1 itemForEmojiAtIndexPath:(id)arg2;
- (long long)emojiKeyboard:(id)arg1 numberOfEmojiInSection:(long long)arg2;
- (void)downloadEmojiWithFinishBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

