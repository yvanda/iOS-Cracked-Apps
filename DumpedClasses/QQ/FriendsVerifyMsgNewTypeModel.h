//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface FriendsVerifyMsgNewTypeModel : NSObject <NSCoding>
{
    unsigned int _unread_count;
    unsigned long long _friend_msg_type_flag;
    NSMutableArray *_msg_notify;
}

@property(nonatomic) unsigned int unread_count; // @synthesize unread_count=_unread_count;
@property(retain, nonatomic) NSMutableArray *msg_notify; // @synthesize msg_notify=_msg_notify;
@property(nonatomic) unsigned long long friend_msg_type_flag; // @synthesize friend_msg_type_flag=_friend_msg_type_flag;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
