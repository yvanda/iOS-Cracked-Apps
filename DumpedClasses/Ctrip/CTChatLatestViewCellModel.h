//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDate, NSString;

@interface CTChatLatestViewCellModel : NSObject
{
    _Bool _isDirector;
    _Bool _isBlocked;
    _Bool _isRedNet;
    _Bool _isNeedAddToSomeBody;
    NSAttributedString *_nickName;
    NSString *_subjectTitle;
    NSString *_uid;
    NSAttributedString *_latestMsgText;
    NSDate *_latestMsgTime;
    NSString *_avatarUrl;
    long long _unreadMsgCount;
    long long _type;
    long long _userType;
}

+ (id)lastestViewCellModelWithDict:(id)arg1;
+ (id)lastestCellModelWithMsg:(id)arg1;
+ (id)lastestCellModelWithConversation:(id)arg1;
@property(nonatomic) _Bool isNeedAddToSomeBody; // @synthesize isNeedAddToSomeBody=_isNeedAddToSomeBody;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) _Bool isRedNet; // @synthesize isRedNet=_isRedNet;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isDirector; // @synthesize isDirector=_isDirector;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long unreadMsgCount; // @synthesize unreadMsgCount=_unreadMsgCount;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSDate *latestMsgTime; // @synthesize latestMsgTime=_latestMsgTime;
@property(retain, nonatomic) NSAttributedString *latestMsgText; // @synthesize latestMsgText=_latestMsgText;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *subjectTitle; // @synthesize subjectTitle=_subjectTitle;
@property(retain, nonatomic) NSAttributedString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)setTitleWithConversation:(id)arg1;
- (void)setLatestMsgTextWithConversation:(id)arg1;
- (void)setIsNeedAddToSomeBodyWithConversation:(id)arg1;
- (void)setUnderlineURLStyle:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)initWithDict:(id)arg1;
- (id)initWithMsg:(id)arg1;
- (id)initWithChatConversation:(id)arg1;

@end
