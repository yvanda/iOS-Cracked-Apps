//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandListTagAreaDetailV3InformationModel : CTBusinessBean
{
    int tagIndex;
    NSString *tagContent;
}

@property(copy, nonatomic) NSString *tagContent; // @synthesize tagContent;
@property(nonatomic) int tagIndex; // @synthesize tagIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

