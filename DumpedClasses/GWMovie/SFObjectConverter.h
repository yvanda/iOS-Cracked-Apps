//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SFObjectPropertyMapping;

@interface SFObjectConverter : NSObject
{
    id <SFObjectPropertyMapping> propertyMapping;
    CDUnknownBlockType propertyMappingBlock;
}

+ (id)objectListWithParentElement:(id)arg1 classSelector:(CDUnknownBlockType)arg2 propertyMappingSelector:(CDUnknownBlockType)arg3 propertyMappingBlock:(CDUnknownBlockType)arg4;
+ (id)stringListWithParentElement:(id)arg1;
+ (id)createWithPropertyMappingBlock:(CDUnknownBlockType)arg1;
+ (id)createWithPropertyMapping:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType propertyMappingBlock; // @synthesize propertyMappingBlock;
@property(retain, nonatomic) id <SFObjectPropertyMapping> propertyMapping; // @synthesize propertyMapping;
- (id)objectListWithParentElement:(id)arg1 targetClass:(Class)arg2;
- (id)objectWithParentElement:(id)arg1 targetClass:(Class)arg2;
- (id)initWithPropertyMappingBlock:(CDUnknownBlockType)arg1;
- (id)initWithPropertyMapping:(id)arg1;
- (void)dealloc;

@end

