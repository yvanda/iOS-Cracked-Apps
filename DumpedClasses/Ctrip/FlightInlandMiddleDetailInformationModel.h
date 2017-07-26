//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightInlandMiddleArriveAirportInformationModel, FlightInlandMiddleBasicDetailInformationModel, FlightInlandMiddleCraftTypeInformationModel, FlightInlandMiddleDateTimeInformationModel, FlightInlandMiddleDepartAirportInformationModel, FlightInlandMiddleStopInformationModel, NSMutableArray, NSString;

@interface FlightInlandMiddleDetailInformationModel : CTBusinessBean
{
    int flightIndex;
    FlightInlandMiddleBasicDetailInformationModel *basicInfoModel;
    FlightInlandMiddleDepartAirportInformationModel *departAirportInfoModel;
    FlightInlandMiddleArriveAirportInformationModel *arriveAirportInfoModel;
    FlightInlandMiddleDateTimeInformationModel *dateInfoModel;
    FlightInlandMiddleCraftTypeInformationModel *craftInfoModel;
    FlightInlandMiddleStopInformationModel *stopInfoModel;
    NSMutableArray *comfortInfoList;
    NSString *comfortRequestString;
}

@property(copy, nonatomic) NSString *comfortRequestString; // @synthesize comfortRequestString;
@property(retain, nonatomic) NSMutableArray *comfortInfoList; // @synthesize comfortInfoList;
@property(retain, nonatomic) FlightInlandMiddleStopInformationModel *stopInfoModel; // @synthesize stopInfoModel;
@property(retain, nonatomic) FlightInlandMiddleCraftTypeInformationModel *craftInfoModel; // @synthesize craftInfoModel;
@property(retain, nonatomic) FlightInlandMiddleDateTimeInformationModel *dateInfoModel; // @synthesize dateInfoModel;
@property(retain, nonatomic) FlightInlandMiddleArriveAirportInformationModel *arriveAirportInfoModel; // @synthesize arriveAirportInfoModel;
@property(retain, nonatomic) FlightInlandMiddleDepartAirportInformationModel *departAirportInfoModel; // @synthesize departAirportInfoModel;
@property(retain, nonatomic) FlightInlandMiddleBasicDetailInformationModel *basicInfoModel; // @synthesize basicInfoModel;
@property(nonatomic) int flightIndex; // @synthesize flightIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
