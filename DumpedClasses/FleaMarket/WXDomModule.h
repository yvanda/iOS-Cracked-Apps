//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface WXDomModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_52;
+ (id)wx_export_method_51;
+ (id)wx_export_method_50;
+ (id)wx_export_method_49;
+ (id)wx_export_method_48;
+ (id)wx_export_method_47;
+ (id)wx_export_method_46;
+ (id)wx_export_method_45;
+ (id)wx_export_method_44;
+ (id)wx_export_method_43;
+ (id)wx_export_method_42;
+ (id)wx_export_method_41;
+ (id)wx_export_method_40;
+ (id)wx_export_method_39;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (id)_componentRectInfoWithViewFrame:(struct CGRect)arg1;
- (void)destroyInstance;
- (void)getComponentRect:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addRule:(id)arg1 rule:(id)arg2;
- (void)updateAttrs:(id)arg1 attrs:(id)arg2;
- (void)updateStyle:(id)arg1 styles:(id)arg2;
- (void)scrollToElement:(id)arg1 options:(id)arg2;
- (void)refreshFinish;
- (void)updateFinish;
- (void)createFinish;
- (void)removeEvent:(id)arg1 event:(id)arg2;
- (void)addEvent:(id)arg1 event:(id)arg2;
- (void)moveElement:(id)arg1 parentRef:(id)arg2 index:(long long)arg3;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 element:(id)arg2 atIndex:(long long)arg3;
- (void)createBody:(id)arg1;
- (id)targetExecuteThread;
- (void)performSelectorOnRuleManager:(CDUnknownBlockType)arg1;
- (void)performBlockOnComponentManager:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
