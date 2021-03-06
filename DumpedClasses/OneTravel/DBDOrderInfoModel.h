//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DBAlertModel<Optional>, DBDPassengerInfoModel<Optional>, DBDPriceDetailModel<Optional>, DBHongBaoModel<Optional>, DBRouteInfoModel<Optional>, DBShareModel<Optional>, DCCarpoolersInfoModel<Optional>, DCClickOrderInfoModel<Optional>, DCComfirmInfoModel<Optional>, DCComplainInfoModel<Optional>, DCMoreModel<Optional>, DCNoteInfoModel<Optional>, DCOrderBottomTipsModel<Optional>, DCOrdertInfoAdApiModel<Optional>, DCPOrderContextModel<Optional>, DCPriceDisplayDetailModel<Optional>, DCRemindListInfoAlertModel<Optional>, DCRobLiftAlertModel<Optional>, DCRouteOrderInviteInfo<Optional>, DCYSInviteInfoModel<Optional>, NSArray<DCColorText><Optional>, NSArray<DCFloatLayerModel><Ignore>, NSArray<DCTimeDescInfoModel><Optional>, NSArray<Optional><DCOrderInfo>, NSArray<Optional><DCOrderTripDescModel>, NSArray<Optional><DCTripInfo>, NSArray<Optional><DCUserInfo>, NSNumber<Optional>, NSString<Ignore>, NSString<Optional>;

@interface DBDOrderInfoModel : TRBaseModel
{
    NSArray<Optional><DCUserInfo> *_user_infos;
    NSArray<Optional><DCOrderInfo> *_order_infos;
    NSArray<Optional><DCTripInfo> *_trip_infos;
    NSString<Optional> *_card_type;
    NSString<Optional> *_package_id;
    NSArray<DCColorText><Optional> *_extra_desc;
    NSString<Optional> *_carpool_id;
    NSString<Optional> *_order_id;
    NSString<Optional> *_route_id;
    NSString<Optional> *_status_txt;
    NSString<Optional> *_status_desc_color;
    NSNumber<Optional> *_iscan_delete;
    NSString<Optional> *_passenger_id;
    NSString<Optional> *_setup_time;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_from_lat;
    NSString<Optional> *_from_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_to_name;
    NSString<Optional> *_to_address;
    DBDPassengerInfoModel<Optional> *_passenger_info;
    NSString<Optional> *_extra_info;
    NSString<Optional> *_price;
    NSString<Optional> *_amount;
    DBRouteInfoModel<Optional> *_route_info;
    NSString<Optional> *_minutes_to_go;
    NSNumber<Optional> *_serial;
    DBDPriceDetailModel<Optional> *_pay_success_price;
    DBShareModel<Optional> *_share;
    DBHongBaoModel<Optional> *_hongbao;
    DBAlertModel<Optional> *_terminate_alert;
    NSString<Optional> *_free;
    NSString<Optional> *_business_area;
    DCNoteInfoModel<Optional> *_note_info;
    NSString<Optional> *_departure_time;
    NSString<Optional> *_departure_time_status;
    NSString<Optional> *_departure_distance;
    NSString<Optional> *_is_o2o;
    DCOrdertInfoAdApiModel<Optional> *_ad_info;
    NSNumber<Optional> *_match_type;
    DCComfirmInfoModel<Optional> *_confirm_info;
    DCClickOrderInfoModel<Optional> *_clickOrder_Info;
    NSNumber<Optional> *_is_carpool;
    NSString<Optional> *_title;
    DCRobLiftAlertModel<Optional> *_alter_info;
    NSNumber<Optional> *_is_carpool_succeed;
    NSString<Optional> *_from_business_area;
    NSString<Optional> *_to_departure_distance;
    NSString<Optional> *_to_business_area;
    DCRemindListInfoAlertModel<Optional> *_cancel_alert;
    NSArray<DCFloatLayerModel><Ignore> *_float_layer;
    NSString<Optional> *_multiple;
    DCCarpoolersInfoModel<Optional> *_carpoolers;
    NSArray<Optional><DCOrderTripDescModel> *_trip_desc;
    DCOrderBottomTipsModel<Optional> *_bottom_tips;
    DCMoreModel<Optional> *_driver_more;
    DCPriceDisplayDetailModel<Optional> *_price_display_detail;
    NSArray<DCTimeDescInfoModel><Optional> *_time_desc_info;
    DCComplainInfoModel<Optional> *_complain_info;
    NSString<Optional> *_refresh_time;
    NSString<Optional> *_is_show_nav;
    NSString<Optional> *_arrival_distance;
    DCYSInviteInfoModel<Optional> *_invite_info;
    NSString<Optional> *_date_id;
    NSString<Ignore> *_playPushSound;
    NSString<Optional> *_scene_msg;
    NSNumber<Optional> *_use_web;
    NSString<Optional> *_web_url;
    DCPOrderContextModel<Optional> *_tempModel;
    DCRouteOrderInviteInfo<Optional> *_bottom_button;
    NSString<Optional> *_extra_params;
    NSString<Optional> *_action_type;
    NSNumber<Optional> *_order_new_status;
}

@property(retain, nonatomic) NSNumber<Optional> *order_new_status; // @synthesize order_new_status=_order_new_status;
@property(copy, nonatomic) NSString<Optional> *action_type; // @synthesize action_type=_action_type;
@property(copy, nonatomic) NSString<Optional> *extra_params; // @synthesize extra_params=_extra_params;
@property(retain, nonatomic) DCRouteOrderInviteInfo<Optional> *bottom_button; // @synthesize bottom_button=_bottom_button;
@property(retain, nonatomic) DCPOrderContextModel<Optional> *tempModel; // @synthesize tempModel=_tempModel;
@property(retain, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(retain, nonatomic) NSNumber<Optional> *use_web; // @synthesize use_web=_use_web;
@property(copy, nonatomic) NSString<Optional> *scene_msg; // @synthesize scene_msg=_scene_msg;
@property(copy, nonatomic) NSString<Ignore> *playPushSound; // @synthesize playPushSound=_playPushSound;
@property(copy, nonatomic) NSString<Optional> *date_id; // @synthesize date_id=_date_id;
@property(retain, nonatomic) DCYSInviteInfoModel<Optional> *invite_info; // @synthesize invite_info=_invite_info;
@property(copy, nonatomic) NSString<Optional> *arrival_distance; // @synthesize arrival_distance=_arrival_distance;
@property(copy, nonatomic) NSString<Optional> *is_show_nav; // @synthesize is_show_nav=_is_show_nav;
@property(copy, nonatomic) NSString<Optional> *refresh_time; // @synthesize refresh_time=_refresh_time;
@property(retain, nonatomic) DCComplainInfoModel<Optional> *complain_info; // @synthesize complain_info=_complain_info;
@property(retain, nonatomic) NSArray<DCTimeDescInfoModel><Optional> *time_desc_info; // @synthesize time_desc_info=_time_desc_info;
@property(retain, nonatomic) DCPriceDisplayDetailModel<Optional> *price_display_detail; // @synthesize price_display_detail=_price_display_detail;
@property(retain, nonatomic) DCMoreModel<Optional> *driver_more; // @synthesize driver_more=_driver_more;
@property(retain, nonatomic) DCOrderBottomTipsModel<Optional> *bottom_tips; // @synthesize bottom_tips=_bottom_tips;
@property(retain, nonatomic) NSArray<Optional><DCOrderTripDescModel> *trip_desc; // @synthesize trip_desc=_trip_desc;
@property(retain, nonatomic) DCCarpoolersInfoModel<Optional> *carpoolers; // @synthesize carpoolers=_carpoolers;
@property(copy, nonatomic) NSString<Optional> *multiple; // @synthesize multiple=_multiple;
@property(retain, nonatomic) NSArray<DCFloatLayerModel><Ignore> *float_layer; // @synthesize float_layer=_float_layer;
@property(retain, nonatomic) DCRemindListInfoAlertModel<Optional> *cancel_alert; // @synthesize cancel_alert=_cancel_alert;
@property(copy, nonatomic) NSString<Optional> *to_business_area; // @synthesize to_business_area=_to_business_area;
@property(copy, nonatomic) NSString<Optional> *to_departure_distance; // @synthesize to_departure_distance=_to_departure_distance;
@property(copy, nonatomic) NSString<Optional> *from_business_area; // @synthesize from_business_area=_from_business_area;
@property(retain, nonatomic) NSNumber<Optional> *is_carpool_succeed; // @synthesize is_carpool_succeed=_is_carpool_succeed;
@property(retain, nonatomic) DCRobLiftAlertModel<Optional> *alter_info; // @synthesize alter_info=_alter_info;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *is_carpool; // @synthesize is_carpool=_is_carpool;
@property(retain, nonatomic) DCClickOrderInfoModel<Optional> *clickOrder_Info; // @synthesize clickOrder_Info=_clickOrder_Info;
@property(retain, nonatomic) DCComfirmInfoModel<Optional> *confirm_info; // @synthesize confirm_info=_confirm_info;
@property(retain, nonatomic) NSNumber<Optional> *match_type; // @synthesize match_type=_match_type;
@property(retain, nonatomic) DCOrdertInfoAdApiModel<Optional> *ad_info; // @synthesize ad_info=_ad_info;
@property(retain, nonatomic) NSString<Optional> *is_o2o; // @synthesize is_o2o=_is_o2o;
@property(retain, nonatomic) NSString<Optional> *departure_distance; // @synthesize departure_distance=_departure_distance;
@property(copy, nonatomic) NSString<Optional> *departure_time_status; // @synthesize departure_time_status=_departure_time_status;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
@property(retain, nonatomic) DCNoteInfoModel<Optional> *note_info; // @synthesize note_info=_note_info;
@property(copy, nonatomic) NSString<Optional> *business_area; // @synthesize business_area=_business_area;
@property(retain, nonatomic) NSString<Optional> *free; // @synthesize free=_free;
@property(retain, nonatomic) DBAlertModel<Optional> *terminate_alert; // @synthesize terminate_alert=_terminate_alert;
@property(retain, nonatomic) DBHongBaoModel<Optional> *hongbao; // @synthesize hongbao=_hongbao;
@property(retain, nonatomic) DBShareModel<Optional> *share; // @synthesize share=_share;
@property(retain, nonatomic) DBDPriceDetailModel<Optional> *pay_success_price; // @synthesize pay_success_price=_pay_success_price;
@property(retain, nonatomic) NSNumber<Optional> *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString<Optional> *minutes_to_go; // @synthesize minutes_to_go=_minutes_to_go;
@property(retain, nonatomic) DBRouteInfoModel<Optional> *route_info; // @synthesize route_info=_route_info;
@property(retain, nonatomic) NSString<Optional> *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString<Optional> *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString<Optional> *extra_info; // @synthesize extra_info=_extra_info;
@property(retain, nonatomic) DBDPassengerInfoModel<Optional> *passenger_info; // @synthesize passenger_info=_passenger_info;
@property(retain, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(retain, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(retain, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(retain, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(retain, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(retain, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(retain, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
@property(retain, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(retain, nonatomic) NSString<Optional> *setup_time; // @synthesize setup_time=_setup_time;
@property(retain, nonatomic) NSString<Optional> *passenger_id; // @synthesize passenger_id=_passenger_id;
@property(retain, nonatomic) NSNumber<Optional> *iscan_delete; // @synthesize iscan_delete=_iscan_delete;
@property(copy, nonatomic) NSString<Optional> *status_desc_color; // @synthesize status_desc_color=_status_desc_color;
@property(copy, nonatomic) NSString<Optional> *status_txt; // @synthesize status_txt=_status_txt;
@property(retain, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
@property(retain, nonatomic) NSString<Optional> *order_id; // @synthesize order_id=_order_id;
@property(copy, nonatomic) NSString<Optional> *carpool_id; // @synthesize carpool_id=_carpool_id;
@property(copy, nonatomic) NSArray<DCColorText><Optional> *extra_desc; // @synthesize extra_desc=_extra_desc;
@property(copy, nonatomic) NSString<Optional> *package_id; // @synthesize package_id=_package_id;
@property(copy, nonatomic) NSString<Optional> *card_type; // @synthesize card_type=_card_type;
@property(copy, nonatomic) NSArray<Optional><DCTripInfo> *trip_infos; // @synthesize trip_infos=_trip_infos;
@property(copy, nonatomic) NSArray<Optional><DCOrderInfo> *order_infos; // @synthesize order_infos=_order_infos;
@property(copy, nonatomic) NSArray<Optional><DCUserInfo> *user_infos; // @synthesize user_infos=_user_infos;
- (void).cxx_destruct;
- (id)originOrderStatus;
@property(readonly, nonatomic, getter=currentOrderFlowStatus) long long currentOrderFlowStatus;

@end

