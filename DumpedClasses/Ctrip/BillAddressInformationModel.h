//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BillAddressInformationModel : CTBusinessBean
{
    NSString *cardBankCountry;
    NSString *cardBank;
    NSString *contractPhoneNum;
    NSString *postNo;
    NSString *email;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *address;
    NSString *cardHolder;
    NSString *idCardType;
    NSString *idCardNo;
}

@property(copy, nonatomic) NSString *idCardNo; // @synthesize idCardNo;
@property(copy, nonatomic) NSString *idCardType; // @synthesize idCardType;
@property(copy, nonatomic) NSString *cardHolder; // @synthesize cardHolder;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(copy, nonatomic) NSString *city; // @synthesize city;
@property(copy, nonatomic) NSString *province; // @synthesize province;
@property(copy, nonatomic) NSString *country; // @synthesize country;
@property(copy, nonatomic) NSString *email; // @synthesize email;
@property(copy, nonatomic) NSString *postNo; // @synthesize postNo;
@property(copy, nonatomic) NSString *contractPhoneNum; // @synthesize contractPhoneNum;
@property(copy, nonatomic) NSString *cardBank; // @synthesize cardBank;
@property(copy, nonatomic) NSString *cardBankCountry; // @synthesize cardBankCountry;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

