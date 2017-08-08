//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class GWCinema, Movie, NSArray, NSString;

@interface GWUserDateMovieModel : GWObject
{
    _Bool _hadChangci;
    NSString *_subscribetime;
    NSString *_timeindex;
    NSArray *_movieSpecialArray;
    Movie *_dateMovie;
    GWCinema *_dateCinema;
    double _viewHeight;
    double _viewWidth;
    NSArray *_periodArray;
    unsigned long long _userDateMovieViewShow;
}

+ (id)getSpecialMovieImage:(id)arg1;
@property(nonatomic) _Bool hadChangci; // @synthesize hadChangci=_hadChangci;
@property(nonatomic) unsigned long long userDateMovieViewShow; // @synthesize userDateMovieViewShow=_userDateMovieViewShow;
@property(retain, nonatomic) NSArray *periodArray; // @synthesize periodArray=_periodArray;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) GWCinema *dateCinema; // @synthesize dateCinema=_dateCinema;
@property(retain, nonatomic) Movie *dateMovie; // @synthesize dateMovie=_dateMovie;
@property(copy, nonatomic) NSArray *movieSpecialArray; // @synthesize movieSpecialArray=_movieSpecialArray;
@property(copy, nonatomic) NSString *timeindex; // @synthesize timeindex=_timeindex;
@property(copy, nonatomic) NSString *subscribetime; // @synthesize subscribetime=_subscribetime;
- (void).cxx_destruct;
- (id)sort:(id)arg1;
- (id)getDatePeriodArray:(id)arg1;
- (double)calculateViewHeight;
- (id)init;

@end
