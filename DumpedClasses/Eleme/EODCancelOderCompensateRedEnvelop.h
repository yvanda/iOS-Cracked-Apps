//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface EODCancelOderCompensateRedEnvelop : NVMModel
{
    _Bool _isDisplay;
    NSString *_title;
    NSString *_message;
    NSString *_redEnvelopDescription;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(copy, nonatomic) NSString *redEnvelopDescription; // @synthesize redEnvelopDescription=_redEnvelopDescription;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

