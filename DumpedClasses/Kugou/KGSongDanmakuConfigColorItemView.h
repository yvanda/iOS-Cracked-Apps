//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class KGSongDanmakuConfigColor;

@interface KGSongDanmakuConfigColorItemView : UIButton
{
    _Bool _chosen;
    KGSongDanmakuConfigColor *_color;
    id <KGSongDanmakuConfigColorItemViewDelegate> _delegate;
}

@property(nonatomic) _Bool chosen; // @synthesize chosen=_chosen;
@property(nonatomic) __weak id <KGSongDanmakuConfigColorItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KGSongDanmakuConfigColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setup;
- (id)init;

@end

