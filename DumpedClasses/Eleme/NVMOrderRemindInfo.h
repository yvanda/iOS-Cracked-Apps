//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@interface NVMOrderRemindInfo : NVMModel
{
    _Bool _showRemindButton;
    long long _status;
    long long _contact;
}

+ (id)contactJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long contact; // @synthesize contact=_contact;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool showRemindButton; // @synthesize showRemindButton=_showRemindButton;

@end

