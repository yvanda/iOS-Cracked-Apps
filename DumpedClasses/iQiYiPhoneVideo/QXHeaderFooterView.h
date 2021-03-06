//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "QXCardCellProtocol-Protocol.h"

@class NSString, QXHeaderFooterData;
@protocol QXHeaderFooterViewDelegate;

@interface QXHeaderFooterView : UITableViewHeaderFooterView <QXCardCellProtocol>
{
    QXHeaderFooterData *_headerFooterData;
    id <QXHeaderFooterViewDelegate> _delegate;
    long long _section;
}

+ (Class)dataClass;
+ (id)headerFooterWithTableView:(id)arg1 headerFooterData:(id)arg2;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <QXHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QXHeaderFooterData *headerFooterData; // @synthesize headerFooterData=_headerFooterData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

