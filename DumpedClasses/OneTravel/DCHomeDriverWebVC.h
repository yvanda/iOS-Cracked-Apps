//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCJSViewController.h"

@class DCURLCache;

@interface DCHomeDriverWebVC : DCJSViewController
{
    DCURLCache *_dCache;
    unsigned long long *_switchCount;
}

@property(nonatomic) unsigned long long *switchCount; // @synthesize switchCount=_switchCount;
@property(retain, nonatomic) DCURLCache *dCache; // @synthesize dCache=_dCache;
- (void).cxx_destruct;
- (void)trWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)trWebViewDidFinishLoad:(id)arg1;
- (void)trWebViewDidStartLoad:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end
