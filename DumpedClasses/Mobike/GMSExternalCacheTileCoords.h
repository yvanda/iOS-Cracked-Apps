//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface GMSExternalCacheTileCoords : NSObject <NSCopying>
{
    int _zoom;
    int _x;
    int _y;
}

@property(readonly, nonatomic) int y; // @synthesize y=_y;
@property(readonly, nonatomic) int x; // @synthesize x=_x;
@property(readonly, nonatomic) int zoom; // @synthesize zoom=_zoom;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileCoords:(id)arg1;

@end

