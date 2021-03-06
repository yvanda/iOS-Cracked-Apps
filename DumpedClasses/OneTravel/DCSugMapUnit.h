//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCMapCom.h"

@class DCTakeCarBussiness, RACCommand, RACSubject;

@interface DCSugMapUnit : DCMapCom
{
    RACSubject *_locateBegin;
    RACSubject *_locateError;
    RACSubject *_locateSuccess;
    RACCommand *_beginLocateCommand;
}

@property(retain, nonatomic) RACCommand *beginLocateCommand; // @synthesize beginLocateCommand=_beginLocateCommand;
@property(retain, nonatomic) RACSubject *locateSuccess; // @synthesize locateSuccess=_locateSuccess;
@property(retain, nonatomic) RACSubject *locateError; // @synthesize locateError=_locateError;
@property(retain, nonatomic) RACSubject *locateBegin; // @synthesize locateBegin=_locateBegin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setGetOnTheCarPlace:(id)arg1;

// Remaining properties
@property(retain, nonatomic) DCTakeCarBussiness *takeCarBussiness;

@end

