//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDocument.h"

#import "QQDocumentPresenter.h"

@class NSDictionary, NSString;

@interface QQCurrentAccountDocument : QQDocument <QQDocumentPresenter>
{
    int _retryCount;
    id <QQCurrentAccountDocumentDelegate> _delegate;
    NSDictionary *_accountInfo;
}

@property(retain, nonatomic) NSDictionary *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) __weak id <QQCurrentAccountDocumentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAccountInfo:(id)arg1;
- (id)contentsForType:(id)arg1;
- (void)presentDocumentContent:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithDelegate:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

