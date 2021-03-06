//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSTileType;

@interface GMSTileExpirationData : NSObject
{
    int _dataVersion;
    GMSTileType *_tileType;
    id <GMSTileExpirationState> _expirationState;
}

@property(readonly, nonatomic) id <GMSTileExpirationState> expirationState; // @synthesize expirationState=_expirationState;
@property(readonly, nonatomic) int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) GMSTileType *tileType; // @synthesize tileType=_tileType;
- (void).cxx_destruct;
- (id)initWithTileType:(id)arg1 dataVersion:(int)arg2 expirationState:(id)arg3;

@end

