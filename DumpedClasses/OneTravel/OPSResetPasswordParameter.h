//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPSRequestParameter.h"

@class NSString;

@interface OPSResetPasswordParameter : OPSRequestParameter
{
    NSString *_oldpassword;
    NSString *_newpassword;
    NSString *_rsakey;
    NSString *_ticket;
}

@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *rsakey; // @synthesize rsakey=_rsakey;
@property(copy, nonatomic) NSString *newpassword; // @synthesize newpassword=_newpassword;
@property(copy, nonatomic) NSString *oldpassword; // @synthesize oldpassword=_oldpassword;
- (void).cxx_destruct;

@end

