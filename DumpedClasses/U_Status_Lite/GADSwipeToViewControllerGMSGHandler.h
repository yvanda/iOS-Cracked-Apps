//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADSlot;

@interface GADSwipeToViewControllerGMSGHandler : GADGMSGHandler
{
    GADSlot *_slot;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (void)adView:(id)arg1 disableSwipeToViewController:(id)arg2;
- (void)adView:(id)arg1 enableSwipeToViewController:(id)arg2;
- (id)initWithSlot:(id)arg1;

@end

