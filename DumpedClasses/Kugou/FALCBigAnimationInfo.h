//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALCBigAnimationInfo : FAModel
{
    long long _animationId;
    NSString *_animationPath;
    NSString *_animationFolderName;
    long long _animationVersion;
    long long _animationType;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) long long animationVersion; // @synthesize animationVersion=_animationVersion;
@property(copy, nonatomic) NSString *animationFolderName; // @synthesize animationFolderName=_animationFolderName;
@property(copy, nonatomic) NSString *animationPath; // @synthesize animationPath=_animationPath;
@property(nonatomic) long long animationId; // @synthesize animationId=_animationId;
- (void).cxx_destruct;

@end

