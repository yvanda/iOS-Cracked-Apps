//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTESBugrptDataSafeUtil : NSObject
{
}

+ (id)serializeObject:(id)arg1;
+ (id)safeConvertDicToJSON:(id)arg1;
+ (id)safeGetValueForKey:(id)arg1 key:(id)arg2;
+ (void)safeAddDictionary:(id)arg1 array:(id)arg2 forKey:(id)arg3;
+ (void)safeAddDictionary:(id)arg1 string:(id)arg2 forKey:(id)arg3;
+ (void)addValidDataToDictionary:(id)arg1 string:(id)arg2 forKey:(id)arg3;

@end
