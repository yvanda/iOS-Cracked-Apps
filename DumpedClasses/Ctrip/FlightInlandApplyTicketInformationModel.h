//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandApplyTicketInformationModel : CTBusinessBean
{
    int policyType;
    int dateType;
    NSString *dateRange;
    NSString *successRatio;
}

@property(copy, nonatomic) NSString *successRatio; // @synthesize successRatio;
@property(copy, nonatomic) NSString *dateRange; // @synthesize dateRange;
@property(nonatomic) int dateType; // @synthesize dateType;
@property(nonatomic) int policyType; // @synthesize policyType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

