//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainValidateContactModel : CTBusinessBean
{
    NSString *name;
    NSString *passportType;
    NSString *passportNo;
    int passengerType;
}

@property(nonatomic) int passengerType; // @synthesize passengerType;
@property(copy, nonatomic) NSString *passportNo; // @synthesize passportNo;
@property(copy, nonatomic) NSString *passportType; // @synthesize passportType;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

