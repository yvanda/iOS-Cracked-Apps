//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightPassengerGovernmentCheckInformationModel : CTBusinessBean
{
    int _cardEType;
    int _businessType;
    NSString *_passengerName;
    NSString *_cardNumber;
    NSString *_bankCardCode;
    NSString *_budgetUnit;
    NSString *_airlineCode;
}

@property(copy, nonatomic) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(copy, nonatomic) NSString *budgetUnit; // @synthesize budgetUnit=_budgetUnit;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *bankCardCode; // @synthesize bankCardCode=_bankCardCode;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) int cardEType; // @synthesize cardEType=_cardEType;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

