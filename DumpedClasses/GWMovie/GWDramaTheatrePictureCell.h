//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWCinemaBaseCell.h"

@class GWDramaTheatrePictureView;
@protocol GWDramaTheatrePictureDelegate;

@interface GWDramaTheatrePictureCell : GWCinemaBaseCell
{
    GWDramaTheatrePictureView *_pictureView;
    id <GWDramaTheatrePictureDelegate> _delegate;
}

+ (double)rowHeightWithCellObject:(id)arg1;
@property(nonatomic) __weak id <GWDramaTheatrePictureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GWDramaTheatrePictureView *pictureView; // @synthesize pictureView=_pictureView;
- (void).cxx_destruct;
- (void)showCellWithCellObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
