//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWUpdateMemberProvider : GWBaseInfoProvider
{
    NSString *_logoHex;
    NSString *_filetype;
    NSString *_nickname;
    NSString *_sex;
    NSString *_birthday;
    NSString *_address;
    NSString *_fancy;
}

@property(copy, nonatomic) NSString *fancy; // @synthesize fancy=_fancy;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *filetype; // @synthesize filetype=_filetype;
@property(copy, nonatomic) NSString *logoHex; // @synthesize logoHex=_logoHex;
- (void).cxx_destruct;
- (void)imageForString:(id)arg1;
- (void)requestWithResultHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

