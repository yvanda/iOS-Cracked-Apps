//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSectionAdapter.h"

@class CTHotelDetailCacheBean, CTHotelOutlinePicturesCell;

@interface CTHotelOutlinePicturesAdapter : CTHotelSectionAdapter
{
    CTHotelDetailCacheBean *_cacheBean;
    long long _hotelInfoLoadStatus;
    CTHotelOutlinePicturesCell *_outlineView;
}

@property(retain, nonatomic) CTHotelOutlinePicturesCell *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) long long hotelInfoLoadStatus; // @synthesize hotelInfoLoadStatus=_hotelInfoLoadStatus;
@property(nonatomic) __weak CTHotelDetailCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
- (void).cxx_destruct;
- (void)gotoHotelGallery;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1;

@end

