//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentGalleryCollectionViewCell.h"

@class QLCutOutImageView;

@interface QLMomentGalleryImageCollectionViewCell : QLMomentGalleryCollectionViewCell
{
    QLCutOutImageView *_thumbnailImageView;
}

@property(retain, nonatomic) QLCutOutImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (_Bool)galleryItemIsloadedByNetWork;
- (void)loadGalleryItem;
- (id)initWithFrame:(struct CGRect)arg1;

@end
