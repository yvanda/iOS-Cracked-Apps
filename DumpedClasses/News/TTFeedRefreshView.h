//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTAlphaThemedButton;

@interface TTFeedRefreshView : UIView
{
    TTAlphaThemedButton *_arrowBtn;
    double _originAlpha;
}

@property(nonatomic) double originAlpha; // @synthesize originAlpha=_originAlpha;
@property(retain, nonatomic) TTAlphaThemedButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
- (void).cxx_destruct;
- (void)endLoading;
- (void)startLoading;
- (id)init;

@end

