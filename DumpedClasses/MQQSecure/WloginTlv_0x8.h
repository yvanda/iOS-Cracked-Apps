//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x8 : WloginTlv
{
    unsigned short wTimeZoneVer;
    unsigned int dwLocaleID;
    unsigned short wTimeZoneOffsetMin;
}

@property(nonatomic) unsigned short wTimeZoneOffsetMin; // @synthesize wTimeZoneOffsetMin;
@property(nonatomic) unsigned int dwLocaleID; // @synthesize dwLocaleID;
@property(nonatomic) unsigned short wTimeZoneVer; // @synthesize wTimeZoneVer;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

