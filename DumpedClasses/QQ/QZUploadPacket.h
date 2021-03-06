//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSMutableDictionary, NSString, QZJFileUploadSvcRequestHead, QZUPloadCostTimeParam, QZUpIpInfo;

@interface QZUploadPacket : NSObject
{
    long long _state;
    NSString *_filePath;
    long long _netType;
    NSMutableData *_descData;
    NSObject *_param;
    long long _tag;
    long long _uploadTime;
    long long _businessSrc;
    _Bool _canceled;
    _Bool _bdataSharding;
    long long _lastSendShardingSize;
    long long _curDataOffset;
    long long _curFileSize;
    NSString *_curFileMd5;
    NSString *_curFileSHA1;
    _Bool _bUseHttpSharding;
    NSString *_fimeMd5;
    long long _fileSize;
    int _compressTime;
    long long _taskId;
    NSString *_curDesMd5;
    long long _packetIndify;
    _Bool _bMsgPacket;
    double _maxProcessRspTime;
    _Bool _bAsyncCompressFile;
    NSString *_fileMd5;
    QZJFileUploadSvcRequestHead *_requestHead;
    int _xo;
    _Bool bAsyncCompressFile;
    _Bool usePicUploadChannel;
    _Bool _isFileModified;
    _Bool _checkMD5ForSlice;
    _Bool _packetFinished;
    _Bool _waitProcess;
    long long watermarkRefer;
    double maxProcessRspTime;
    id _userDefineTrace;
    NSString *_session;
    long long _sliceSize;
    long long _recievedLength;
    NSMutableArray *_unfinishedOffset;
    NSMutableArray *_dataBufferArray;
    long long _retryCount;
    long long _packetState;
    NSString *_ipMgrKey;
    QZUpIpInfo *_targetIp;
    NSMutableDictionary *_processParam;
    long long _offset;
    QZUPloadCostTimeParam *_costTimeParam;
}

@property(retain, nonatomic) QZUPloadCostTimeParam *costTimeParam; // @synthesize costTimeParam=_costTimeParam;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableDictionary *processParam; // @synthesize processParam=_processParam;
@property(nonatomic) _Bool waitProcess; // @synthesize waitProcess=_waitProcess;
@property(retain, nonatomic) QZUpIpInfo *targetIp; // @synthesize targetIp=_targetIp;
@property(retain, nonatomic) NSString *ipMgrKey; // @synthesize ipMgrKey=_ipMgrKey;
@property(nonatomic) long long packetState; // @synthesize packetState=_packetState;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableArray *dataBufferArray; // @synthesize dataBufferArray=_dataBufferArray;
@property(retain, nonatomic) NSMutableArray *unfinishedOffset; // @synthesize unfinishedOffset=_unfinishedOffset;
@property(nonatomic) _Bool packetFinished; // @synthesize packetFinished=_packetFinished;
@property(nonatomic) long long recievedLength; // @synthesize recievedLength=_recievedLength;
@property(nonatomic) long long sliceSize; // @synthesize sliceSize=_sliceSize;
@property(nonatomic) _Bool checkMD5ForSlice; // @synthesize checkMD5ForSlice=_checkMD5ForSlice;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) id userDefineTrace; // @synthesize userDefineTrace=_userDefineTrace;
@property(nonatomic) _Bool isFileModified; // @synthesize isFileModified=_isFileModified;
@property(retain, nonatomic) QZJFileUploadSvcRequestHead *requestHead; // @synthesize requestHead=_requestHead;
@property(nonatomic) double maxProcessRspTime; // @synthesize maxProcessRspTime;
@property(nonatomic) _Bool bMsgPacket; // @synthesize bMsgPacket=_bMsgPacket;
@property(readonly, nonatomic) long long packetIndify; // @synthesize packetIndify=_packetIndify;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool bUseHttpSharding; // @synthesize bUseHttpSharding=_bUseHttpSharding;
@property(nonatomic) _Bool usePicUploadChannel; // @synthesize usePicUploadChannel;
@property(nonatomic) int compressTime; // @synthesize compressTime=_compressTime;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(nonatomic) long long watermarkRefer; // @synthesize watermarkRefer;
@property(readonly, nonatomic) _Bool bdataSharding; // @synthesize bdataSharding=_bdataSharding;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool bAsyncCompressFile; // @synthesize bAsyncCompressFile;
@property(nonatomic) long long businessSrc; // @synthesize businessSrc=_businessSrc;
@property(nonatomic) long long uploadTime; // @synthesize uploadTime=_uploadTime;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSObject *param; // @synthesize param=_param;
@property(retain, nonatomic) NSMutableData *descData; // @synthesize descData=_descData;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)packHeadWithPartDataLen:(long long)arg1 offset:(long long)arg2 fileLen:(long long)arg3;
- (int)getDescLen;
- (id)getSegmentData:(long long)arg1 length:(long long)arg2;
- (id)internalInfo;
- (void)checkNeedSharding;
- (long long)curSendLen;
- (long long)totalSendLen;
@property(readonly, nonatomic) NSString *curDesMd5;
@property(readonly, nonatomic) NSString *curFileMd5;
@property(readonly, nonatomic) long long curFileSize;
- (id)loadFileData:(unsigned long long)arg1 Len:(long long)arg2;
- (void)sendFinish;
- (id)nextFileData;
- (id)getBodyPacketSharding;
- (id)getBodyPacketNormal;
- (id)packetRespWithRspData:(id)arg1;
- (id)checkSum;
- (_Bool)useSHAForCheckSum;
- (id)curFileSHA1;
- (_Bool)isSendingFinished;
- (long long)getNextOffsetToSend;
- (id)sliceUploadAppId;
- (id)getControlDataWithError:(id *)arg1;
- (id)getBodyPacket;
- (id)getControlPacket;
- (long long)sendDataLength;
- (id)appidName;
- (id)name;
- (id)packFileBody;
- (id)packControlBody;
- (id)packHandShakeBody;
- (void)setUploadControlReq_OC:(id)arg1;
- (id)generateDescription;
- (id)packHead;
- (void)initRequestHead_OC:(id)arg1;
- (void)setHeadData_OC:(id)arg1;
- (void)setHeadCommonData_OC:(id)arg1;
- (long long)randomIn1000;
- (id)init;

@end

