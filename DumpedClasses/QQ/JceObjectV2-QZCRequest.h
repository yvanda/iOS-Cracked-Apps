//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class MQZStatisticsProtocol, NSDictionary, NSMutableString, NSString, QZJAdvReportMobileAdvReportReq, QZWnsRetryInfo;

@interface JceObjectV2 (QZCRequest)
- (void)resetRequestTimeStamp;
- (void)appendTraceFormat:(id)arg1 arguments:(char *)arg2;
- (void)appendTraceFormat:(id)arg1;
- (void)appendTraceStr:(id)arg1;
- (void)appendTraceTime;
@property(retain, nonatomic) QZWnsRetryInfo *retryInfo;
@property(retain, nonatomic) QZJAdvReportMobileAdvReportReq *advReportReq;
@property(retain, nonatomic) MQZStatisticsProtocol *statistics;
@property(nonatomic) _Bool notCompress;
@property(nonatomic) _Bool returnWorkThread;
@property(nonatomic) _Bool ignoreBizBufRetCode;
@property(retain, nonatomic) NSDictionary *userParam;
@property(retain, nonatomic) NSDictionary *businessAttributes;
@property(retain, nonatomic) NSDictionary *elementRequests;
@property(nonatomic) long long targetUin;
@property(retain, nonatomic) NSMutableString *traceInfo;
@property(nonatomic) long long retryCnt;
@property(nonatomic) long long timeOut;
@property(nonatomic) long long reqStatus;
@property(retain, nonatomic) Class responseClass;
@property(copy, nonatomic) NSString *msfCommand;
@property(copy, nonatomic) NSString *serviceCmd;
@property(copy, nonatomic) NSString *command;
@property(nonatomic) long long requestID;
@property(nonatomic) long long seqNo;
@end

