//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface Goods : GWObject
{
    NSString *goodsname;
    NSString *shortname;
    NSString *summary;
    NSString *unitprice;
    NSString *quantity;
    NSString *price;
    NSString *relatedid;
    NSString *goodslogo;
}

@property(copy, nonatomic) NSString *goodslogo; // @synthesize goodslogo;
@property(copy, nonatomic) NSString *relatedid; // @synthesize relatedid;
@property(copy, nonatomic) NSString *price; // @synthesize price;
@property(copy, nonatomic) NSString *shortname; // @synthesize shortname;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity;
@property(copy, nonatomic) NSString *unitprice; // @synthesize unitprice;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSString *goodsname; // @synthesize goodsname;
- (void).cxx_destruct;
- (id)goodsDescription;
- (void)dealloc;

@end

