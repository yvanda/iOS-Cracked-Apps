//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface FlightPassengerSettingModel : CTBusinessBean
{
    int _segmentNo;
    int _passengerID;
    int _ticketType;
}

@property(nonatomic) int ticketType; // @synthesize ticketType=_ticketType;
@property(nonatomic) int passengerID; // @synthesize passengerID=_passengerID;
@property(nonatomic) int segmentNo; // @synthesize segmentNo=_segmentNo;
- (id)getPBAnnotationArray;
- (id)init;

@end

