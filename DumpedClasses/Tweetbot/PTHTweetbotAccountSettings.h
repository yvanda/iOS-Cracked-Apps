//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PTHTweetbotAccount;

@interface PTHTweetbotAccountSettings : NSObject <NSCoding>
{
    NSMutableArray *_statusFilters;
    Class _syncClass;
    _Bool _showMarker;
    _Bool _syncEnabled;
    _Bool _mobilizerEnabled;
    _Bool _syncedStatusFilters;
    int _geoType;
    PTHTweetbotAccount *_account;
    Class _urlShortnerClass;
    Class _bookmarkerClass;
    Class _imageUploaderClass;
    Class _movieUploaderClass;
    Class _mobilizerClass;
    long long _lastSelectedListTID;
    NSMutableDictionary *_dictionary;
}

@property(nonatomic) _Bool syncedStatusFilters; // @synthesize syncedStatusFilters=_syncedStatusFilters;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSArray *statusFilters; // @synthesize statusFilters=_statusFilters;
@property(nonatomic) long long lastSelectedListTID; // @synthesize lastSelectedListTID=_lastSelectedListTID;
@property(nonatomic, getter=isMobilizerEnabled) _Bool mobilizerEnabled; // @synthesize mobilizerEnabled=_mobilizerEnabled;
@property(readonly, nonatomic, getter=isSyncEnabled) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(nonatomic) _Bool showMarker; // @synthesize showMarker=_showMarker;
@property(nonatomic) __weak Class mobilizerClass; // @synthesize mobilizerClass=_mobilizerClass;
@property(nonatomic) __weak Class movieUploaderClass; // @synthesize movieUploaderClass=_movieUploaderClass;
@property(nonatomic) __weak Class imageUploaderClass; // @synthesize imageUploaderClass=_imageUploaderClass;
@property(nonatomic) __weak Class bookmarkerClass; // @synthesize bookmarkerClass=_bookmarkerClass;
@property(nonatomic, setter=setURLShortnerClass:) __weak Class urlShortnerClass; // @synthesize urlShortnerClass=_urlShortnerClass;
@property(nonatomic) int geoType; // @synthesize geoType=_geoType;
@property(nonatomic) __weak PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) __weak Class syncClass;
- (void)setURLShortnerServiceClass:(Class)arg1;
- (_Bool)hasSimilarStatusFilter:(id)arg1;
- (void)removeSimilarStatusFilter:(id)arg1;
- (void)removeStatusFilter:(id)arg1;
- (void)addStatusFilter:(id)arg1;
@property(readonly, copy, nonatomic) NSString *syncPrivateStatusFiltersKey;
@property(readonly, copy, nonatomic) NSString *syncPublicStatusFiltersKey;
- (void)_storeDidChange:(id)arg1;
- (void)_replaceStatusFilters:(id)arg1;
- (void)_mergeStatusFilters:(id)arg1;
- (void)_saveStatusFilters;
- (void)_setup;
- (id)initWithAccount:(id)arg1;

@end

