//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITextField;

@protocol GWLoginDelegate <NSObject>
- (void)beginEdit:(UITextField *)arg1;
- (void)changeStatus:(_Bool)arg1;
- (void)enterReturn;
- (void)quickRegisterClicked;
- (void)passwordFindClicked;
- (void)alipayButtonClicked;
- (void)qqButtonClicked;
- (void)sinaButtonClicked;
- (void)weixinButtonClicked;
@end

