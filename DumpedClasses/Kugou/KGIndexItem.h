//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KGIndexItem : NSObject
{
    _Bool _isDisplayMiniImg;
    _Bool _isDisplayBigImg;
    NSString *_indexChar;
    NSString *_bigImgName;
    NSString *_miniImgName;
    NSString *_selectedMiniImgName;
}

@property(nonatomic) _Bool isDisplayBigImg; // @synthesize isDisplayBigImg=_isDisplayBigImg;
@property(nonatomic) _Bool isDisplayMiniImg; // @synthesize isDisplayMiniImg=_isDisplayMiniImg;
@property(retain, nonatomic) NSString *selectedMiniImgName; // @synthesize selectedMiniImgName=_selectedMiniImgName;
@property(retain, nonatomic) NSString *miniImgName; // @synthesize miniImgName=_miniImgName;
@property(retain, nonatomic) NSString *bigImgName; // @synthesize bigImgName=_bigImgName;
@property(retain, nonatomic) NSString *indexChar; // @synthesize indexChar=_indexChar;
- (void).cxx_destruct;
- (id)initWithIndexChar:(id)arg1 miniImgName:(id)arg2 slectedMiniImgName:(id)arg3 bigImgName:(id)arg4;

@end

