//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSx_QTMCollectionViewInfoBar;

@protocol QTMCollectionViewInfoBarDelegate <NSObject>
- (void)updateControllerWithInfoBar:(GMSx_QTMCollectionViewInfoBar *)arg1;

@optional
- (void)infoBar:(GMSx_QTMCollectionViewInfoBar *)arg1 didDismissAnimated:(_Bool)arg2 didAutoDismiss:(_Bool)arg3;
- (void)infoBar:(GMSx_QTMCollectionViewInfoBar *)arg1 willDismissAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)infoBar:(GMSx_QTMCollectionViewInfoBar *)arg1 didShowAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)infoBar:(GMSx_QTMCollectionViewInfoBar *)arg1 willShowAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)didPerformTapWithInfoBar:(GMSx_QTMCollectionViewInfoBar *)arg1;
@end
