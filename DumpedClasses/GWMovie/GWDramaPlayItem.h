//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, WPShowsDeliveryModel;

@interface GWDramaPlayItem : NSObject
{
    _Bool _isNeedRealName;
    _Bool _isPause;
    NSString *_endtime;
    NSString *_elecard;
    NSString *_booking;
    NSString *_opentype;
    NSString *_theatrename;
    NSString *_fieldlogo;
    NSString *_fieldid;
    NSString *_dramaid;
    long long _maxbuy;
    NSString *_expressid;
    NSString *_period;
    NSString *_takemethod;
    NSString *_fieldname;
    NSString *_citycode;
    NSString *_dramaname;
    NSString *_prices;
    NSString *_dpid;
    NSString *_language;
    NSString *_playtime;
    NSString *_theatreid;
    NSString *_name;
    NSString *_remark;
    NSString *_remarks;
    NSArray *_theatreSeatAreaList;
    NSString *_greetings;
    NSString *_crmMsg;
    NSString *_gypMsg;
    NSString *_takeAddress;
    NSString *_idcard;
    NSString *_crmFlag;
    NSString *_separate;
    NSString *_areaCount;
    NSString *_disCount;
    NSString *_remnantnotice;
    long long _areaHeight;
    long long _areaWidth;
    WPShowsDeliveryModel *_showsDeliveryModel;
    long long _realNameLimitNumber;
    long long _stopTicketType;
    long long _saleStatus;
    NSString *_svgData;
    NSMutableArray *_areas;
    long long _priceType;
    NSMutableArray *_showsPrices;
}

+ (id)convertFromWPDic:(id)arg1;
@property(retain, nonatomic) NSMutableArray *showsPrices; // @synthesize showsPrices=_showsPrices;
@property(nonatomic) long long priceType; // @synthesize priceType=_priceType;
@property(retain, nonatomic) NSMutableArray *areas; // @synthesize areas=_areas;
@property(copy, nonatomic) NSString *svgData; // @synthesize svgData=_svgData;
@property(nonatomic) long long saleStatus; // @synthesize saleStatus=_saleStatus;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) long long stopTicketType; // @synthesize stopTicketType=_stopTicketType;
@property(nonatomic) long long realNameLimitNumber; // @synthesize realNameLimitNumber=_realNameLimitNumber;
@property(nonatomic) _Bool isNeedRealName; // @synthesize isNeedRealName=_isNeedRealName;
@property(retain, nonatomic) WPShowsDeliveryModel *showsDeliveryModel; // @synthesize showsDeliveryModel=_showsDeliveryModel;
@property(nonatomic) long long areaWidth; // @synthesize areaWidth=_areaWidth;
@property(nonatomic) long long areaHeight; // @synthesize areaHeight=_areaHeight;
@property(copy, nonatomic) NSString *remnantnotice; // @synthesize remnantnotice=_remnantnotice;
@property(copy, nonatomic) NSString *disCount; // @synthesize disCount=_disCount;
@property(copy, nonatomic) NSString *areaCount; // @synthesize areaCount=_areaCount;
@property(copy, nonatomic) NSString *separate; // @synthesize separate=_separate;
@property(copy, nonatomic) NSString *crmFlag; // @synthesize crmFlag=_crmFlag;
@property(copy, nonatomic) NSString *idcard; // @synthesize idcard=_idcard;
@property(copy, nonatomic) NSString *takeAddress; // @synthesize takeAddress=_takeAddress;
@property(copy, nonatomic) NSString *gypMsg; // @synthesize gypMsg=_gypMsg;
@property(copy, nonatomic) NSString *crmMsg; // @synthesize crmMsg=_crmMsg;
@property(copy, nonatomic) NSString *greetings; // @synthesize greetings=_greetings;
@property(retain, nonatomic) NSArray *theatreSeatAreaList; // @synthesize theatreSeatAreaList=_theatreSeatAreaList;
@property(copy, nonatomic) NSString *remarks; // @synthesize remarks=_remarks;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *theatreid; // @synthesize theatreid=_theatreid;
@property(copy, nonatomic) NSString *playtime; // @synthesize playtime=_playtime;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *dpid; // @synthesize dpid=_dpid;
@property(copy, nonatomic) NSString *prices; // @synthesize prices=_prices;
@property(copy, nonatomic) NSString *dramaname; // @synthesize dramaname=_dramaname;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *fieldname; // @synthesize fieldname=_fieldname;
@property(copy, nonatomic) NSString *takemethod; // @synthesize takemethod=_takemethod;
@property(copy, nonatomic) NSString *period; // @synthesize period=_period;
@property(copy, nonatomic) NSString *expressid; // @synthesize expressid=_expressid;
@property(nonatomic) long long maxbuy; // @synthesize maxbuy=_maxbuy;
@property(copy, nonatomic) NSString *dramaid; // @synthesize dramaid=_dramaid;
@property(copy, nonatomic) NSString *fieldid; // @synthesize fieldid=_fieldid;
@property(copy, nonatomic) NSString *fieldlogo; // @synthesize fieldlogo=_fieldlogo;
@property(copy, nonatomic) NSString *theatrename; // @synthesize theatrename=_theatrename;
@property(copy, nonatomic) NSString *opentype; // @synthesize opentype=_opentype;
@property(copy, nonatomic) NSString *booking; // @synthesize booking=_booking;
@property(copy, nonatomic) NSString *elecard; // @synthesize elecard=_elecard;
@property(copy, nonatomic) NSString *endtime; // @synthesize endtime=_endtime;
- (void).cxx_destruct;
- (_Bool)isWillSaleOut;
- (id)formatedPlayDate;
- (_Bool)isHasDisprice;
- (_Bool)isSignleArea;
- (_Bool)isMultiPriceSale;
- (unsigned long long)currentStatus;
- (id)playItemTime;
- (id)playItemDate;
- (id)playItemName;
- (_Bool)isCRM;
- (unsigned long long)orderIDCardType;
- (id)remarkV2;
- (_Bool)isSupportCustomerTicket;
- (_Bool)isPeriod;
- (_Bool)isSupportSelectSeat;

@end

