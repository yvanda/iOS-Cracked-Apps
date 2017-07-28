//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, XYAZTracker;

@interface XYAnalyze : NSObject
{
    _Bool _debugMode;
    NSArray *_tableCellImpressionWhiteList;
    NSArray *_collectionCellImpressionWhiteList;
    XYAZTracker *_tracker;
    NSString *_deviceId;
}

+ (id)getIncrementSequnceId;
+ (id)customContextWithCustomDic:(id)arg1 Controller:(id)arg2;
+ (id)customContextWithCustomDic:(id)arg1;
+ (id)customContext;
+ (void)flushBuffer;
+ (void)nonUIEvent:(id)arg1 Id:(id)arg2 idLabel:(id)arg3 attributes:(id)arg4;
+ (void)nonUIEvent:(id)arg1 Id:(id)arg2 idLabel:(id)arg3;
+ (void)nonUIEvent:(id)arg1;
+ (void)event:(id)arg1 action:(id)arg2 Id:(id)arg3 idLabel:(id)arg4 attributes:(id)arg5 controller:(id)arg6;
+ (void)event:(id)arg1 action:(id)arg2 Id:(id)arg3 idLabel:(id)arg4;
+ (void)event:(id)arg1 action:(id)arg2;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageViewWithController:(id)arg1;
+ (void)beginLogPageView:(id)arg1 title:(id)arg2;
+ (void)setExpIds:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)startWithConfigure:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) XYAZTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSArray *collectionCellImpressionWhiteList; // @synthesize collectionCellImpressionWhiteList=_collectionCellImpressionWhiteList;
@property(retain, nonatomic) NSArray *tableCellImpressionWhiteList; // @synthesize tableCellImpressionWhiteList=_tableCellImpressionWhiteList;
- (void).cxx_destruct;
- (_Bool)checkEventBlackList:(id)arg1 action:(id)arg2;
- (_Bool)checkPageBlackList:(id)arg1;
- (void)endSession:(id)arg1;
- (void)beginSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
