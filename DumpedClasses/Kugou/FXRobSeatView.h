//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FXSGetRoomSeat, KGThemeButton, NSMutableArray, NSString, UITextField;

@interface FXRobSeatView : UIView <UITextFieldDelegate>
{
    _Bool isLoadingData;
    _Bool _isLiving;
    id <FXRobSeatViewDelegate> _delegate;
    NSMutableArray *_seatInfoArray;
    long long _type;
    UIView *_tickeHolder;
    long long _roomId;
    FXSGetRoomSeat *_roomSeat;
    UIView *_bgView;
    UIView *_ticketViewBg;
    UIView *_ticketCenterView;
    UITextField *_inputField;
    KGThemeButton *_okBtn;
    long long _leastTicket;
    long long _seatIndex;
    NSMutableArray *_seatItemArray;
}

@property(retain, nonatomic) NSMutableArray *seatItemArray; // @synthesize seatItemArray=_seatItemArray;
@property(nonatomic) long long seatIndex; // @synthesize seatIndex=_seatIndex;
@property(nonatomic) long long leastTicket; // @synthesize leastTicket=_leastTicket;
@property(retain, nonatomic) KGThemeButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UIView *ticketCenterView; // @synthesize ticketCenterView=_ticketCenterView;
@property(retain, nonatomic) UIView *ticketViewBg; // @synthesize ticketViewBg=_ticketViewBg;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) FXSGetRoomSeat *roomSeat; // @synthesize roomSeat=_roomSeat;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak UIView *tickeHolder; // @synthesize tickeHolder=_tickeHolder;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *seatInfoArray; // @synthesize seatInfoArray=_seatInfoArray;
@property(nonatomic) __weak id <FXRobSeatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)robSeatSuccess;
- (void)robSeat;
- (void)updateTicketOkBtn:(id)arg1;
- (void)updateView;
- (void)updateSeatWithDictionary:(id)arg1;
- (void)updateSeatView;
- (void)reloadView;
- (void)updateData:(long long)arg1 isLiving:(_Bool)arg2;
- (void)okRobTicketAction;
- (void)addAction;
- (void)moveUpTicketView;
- (void)hidenTicketView;
- (void)robActionWithIndex:(long long)arg1;
- (void)actionHide:(id)arg1;
- (void)disableAllRobBtn;
- (void)enableAllRobBtn;
- (void)hiddenAnimate;
- (void)showAnimate:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)initTicketViewBg;
- (void)initLiveSeatView;
- (void)initStarLiveSeat;
- (void)initTitle;
- (void)addHideController;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 tickeHolder:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

