//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTMyCtripOROrderAction : NSObject
{
    NSString *_ActionCode;
    NSString *_ActionName;
    NSString *_ActionURL;
    NSString *_MetricCode;
}

@property(copy, nonatomic) NSString *MetricCode; // @synthesize MetricCode=_MetricCode;
@property(copy, nonatomic) NSString *ActionURL; // @synthesize ActionURL=_ActionURL;
@property(copy, nonatomic) NSString *ActionName; // @synthesize ActionName=_ActionName;
@property(copy, nonatomic) NSString *ActionCode; // @synthesize ActionCode=_ActionCode;
- (void).cxx_destruct;
- (_Bool)compareString:(id)arg1 to:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

